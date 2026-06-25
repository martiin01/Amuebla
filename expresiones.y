%{
#include "contenedor.h"
#include <iostream>
using namespace std;

FILE* fGen;
ofstream salida;
bool condicionn = false;  
bool ejecutarCondicion = false; 
bool errorSemantico = false;   			
extern int n_lineas;
extern int tipo_aux;
extern int yylex();
extern FILE* yyin;
extern FILE* yyout;
extern contenedor contenedorr;

//definimos los procedimientos auxiliares

void yyerror(const char* s){ 
	cout << "Error en la linea "<< n_lineas<<endl;	
} 



%}

%union{

  char c_cadena[100];
  bool c_log;
  int c_entero;	
  float c_real;
  
  struct {
  	bool esReal;
  	float valor;
  }c_expresionesion;
}


%start programa
%token TRUE FALSE
%token NUMERO REAL 
%token ASIGNACION 
%token ASIGNACIONIGUAL
%token AND OR NOT MAYOR MAYOR_IGUAL MENOR MENOR_IGUAL IGUAL DISTINTO

%token IDVariable VARIABLEMAYUS
%token Variables MUEBLES INIHABITACION FINHABITACION
%token ENTERO NUMREAL LOG
%token COLOR RECTANGULO CIRCULO
%token COMA DOSPUNTOS CADENACOMILLAS PARENTIZQ PARENTDER
%token PAUSA MENSAJE SITUAR
%token SI SINO REPETIR

%type <c_entero> NUMERO
%type <c_real> REAL
%type <c_expresionesion> expresion
%type <c_log> expresion_bool

%type <c_cadena> secuenciaId
%type <c_cadena> CADENACOMILLAS

%type <c_cadena> IDVariable
%type <c_cadena> VARIABLEMAYUS
%type <c_cadena> COLOR
%type <c_cadena> CIRCULO
%type <c_cadena> RECTANGULO
%type <c_cadena> PAUSA
%type <c_cadena> MENSAJE
%type <c_cadena> SITUAR
%type <c_cadena> SI
%type <c_cadena> SINO
%type <c_cadena> REPETIR


%left OR
%left AND
%left IGUAL DISTINTO
%left MENOR MENOR_IGUAL MAYOR MAYOR_IGUAL
%left '+' '-'   
%left '*' '/' '%' 
%left menos
%left NOT




%%

programa: siguienteLineaCond bloqueVars bloqueMuebles bloqueHabitaciones {;}
      ;

siguienteLin:	 '\n' 			{;}
       | siguienteLin '\n'		{;}
       ;
       
siguienteLineaCond:
       | siguienteLineaCond '\n' 		{;}	
       ;
       
bloqueVars:								{;}
       | Variables siguienteLin secuenciaVariables		{;}
       ;
       
secuenciaVariables: 
       | secuenciaVariables definicionVars	{;}
       ;
       
definicionVars: ENTERO secuenciaId siguienteLin			{				
								contenedorr.tipoSecuencias((tipo_aux), 0);
								 tipo_aux = 0;	 
									 
									 }

       | NUMREAL secuenciaId siguienteLin			{ contenedorr.tipoSecuencias((tipo_aux), 1);
									 tipo_aux = 0;}		
									 	
									 
       									 
       
       | LOG secuenciaId siguienteLin				{  contenedorr.tipoSecuencias((tipo_aux), 2);
       												 tipo_aux = 0;}
									 	
									 
       
       | ENTERO IDVariable ASIGNACION expresion siguienteLin		{if(errorSemantico){cout<<"Error semántico línea: "<< n_lineas << endl;}
       									 else if($4.esReal){
       									 	cout << "Error semántico línea: " << n_lineas << " Valor real a entero" <<endl;
       									 }
									 else{
       									 tipo_dato aux;
										 strcpy(aux.identificador, $2);
										 aux.tipo = 0;
										 aux.valor.valor_entero = $4.valor;								 
										 bool errorTipo = true;
										 errorTipo = contenedorr.insertar(aux);
										 if(errorTipo == false){			
											tipo_dato aux2;
											string tipo1, tipo2;
											contenedorr.buscar(aux.identificador, aux2);
											contenedorr.nombreTipos(tipo1, tipo2, aux, aux2);
											errorSemantico = true;
											if(errorSemantico){cout<<"Error semántico línea: "<< n_lineas << endl;}
											 }

									 }
									 errorSemantico=false;
	   }                  
									 
									 
       | NUMREAL IDVariable ASIGNACION expresion siguienteLin                {if(errorSemantico){cout<<"Error semántico línea: "<< n_lineas << endl;}
       									 else if(!$4.esReal){
       									 	cout << "Error semántico línea: " << n_lineas << " Valor entero a un real" << endl;
       									 }
									 else{
       									 tipo_dato aux;
									 strcpy(aux.identificador, $2);
									 aux.tipo = 1;
									 aux.valor.valor_real = $4.valor;								 
									 bool errorTipo = true;
									 errorTipo = contenedorr.insertar(aux);
									 if(errorTipo == false){
										string tipo1, tipo2;
										tipo_dato aux2;
										contenedorr.buscar(aux.identificador, aux2);
										contenedorr.nombreTipos(tipo1, tipo2, aux, aux2);
										errorSemantico = true;
										if(errorSemantico){cout<<"Error semántico en línea "<< n_lineas << ": ";}
										
									 }

									 }
									 errorSemantico=false;}
									 

									 
       | LOG IDVariable ASIGNACION expresion_bool siguienteLin	   {if(errorSemantico){}
									else{
       									 tipo_dato aux;
									 strcpy(aux.identificador, $2);
									 aux.tipo = 2;
									 if($4){
									 	aux.valor.valor_bool = true;
									 }else {
									 	aux.valor.valor_bool = false;
									 }
									 contenedorr.insertar(aux);
									 }
									 }
									 
       | IDVariable ASIGNACION expresion siguienteLin      {tipo_dato aux;
									 if(contenedorr.buscar($1, aux)){
									 	switch(aux.tipo){
									 		case 0:
									 			if($3.esReal){
       									 				cout << "Error semántico línea: " << n_lineas << "  Valor real a entero" << endl;
       												}else{
									 				aux.valor.valor_entero = $3.valor;
									 			}
									 			break;
									 		case 1:
									 			if(!$3.esReal){
       									 				cout << "Error semántico línea: " << n_lineas << " Valor entero a real." << endl;
       												}else{
									 				aux.valor.valor_real = $3.valor;
									 			}
									 			break;
									 		default:
									 		break;
									 	}
									 	contenedorr.insertar(aux);
									 }
									 }
									 
       | IDVariable ASIGNACION expresion_bool siguienteLin		{tipo_dato aux;
       									 if(contenedorr.buscar($1, aux)){
       									 	if(aux.tipo == 2){
       									 		if($3){
												aux.valor.valor_bool = true;
											}else {
												aux.valor.valor_bool = false;
											}
       									 	}
       									 	contenedorr.insertar(aux);
       									 }
       									 }
       									 
       |error  siguienteLin						{yyerrok; errorSemantico=false;}								 
       ;

secuenciaId: IDVariable 		{ tipo_dato aux;
						 strcpy(aux.identificador, $1);
						 tipo_aux++;
						 if(contenedorr.buscar($1, aux)){
						 	cout << "Error semántico línea: " << n_lineas  << endl;
						 }
						 contenedorr.insertar(aux);}
						 
		|  secuenciaId COMA IDVariable {
       						 tipo_dato aux;
						 strcpy(aux.identificador, $3);
						 tipo_aux++;
						 if(contenedorr.buscar($3, aux)){
						 	cout << "Error semántico línea: " << n_lineas  << endl;
						 }
						 contenedorr.insertar(aux);}
       	;
       
bloqueMuebles: MUEBLES siguienteLin secuenciaMuebles	{;}
       ;
       
secuenciaMuebles: definicionMueble	{;}
       | secuenciaMuebles definicionMueble	{;}
       ;
       
definicionMueble: VARIABLEMAYUS ASIGNACIONIGUAL MENOR RECTANGULO COMA expresion COMA expresion COMA COLOR MAYOR siguienteLin	 {tipo_dato aux;
											 strcpy(aux.identificador, $1);
											 if(contenedorr.buscar($1, aux)){
											 	cout << "Error semántico línea: " << n_lineas <<  endl;
											 }else{
											 
											 aux.tipo = 3;
											 aux.valor.valor_mueble_rect.alto = $6.valor;
											 aux.valor.valor_mueble_rect.ancho = $8.valor;
											 aux.valor.valor_mueble_rect.color = contenedorr.colorANumero($10);
											 contenedorr.insertar(aux);}
											 
											 }
											 
											 
	| VARIABLEMAYUS ASIGNACIONIGUAL MENOR CIRCULO COMA expresion COMA COLOR MAYOR siguienteLin  {
                                                                      tipo_dato aux;
                                                                      strcpy(aux.identificador, $1);
                                                                      if (contenedorr.buscar($1, aux)) {
                                                                             cout << "Error semántico línea: " << n_lineas  << endl;
                                                                      } else {
                                                                             
                                                                             aux.tipo = 4; 
                                                                             aux.valor.valor_mueble_circ.radio = $6.valor;
                                                                             aux.valor.valor_mueble_circ.color = contenedorr.colorANumero($8);
                                                                             contenedorr.insertar(aux);
                                                                            
                                                                      }
                                                                      } 
  | error siguienteLin {
  yyerrok;
  errorSemantico = false;
  }
  ;

bloqueHabitaciones: definicionHabitacion		{;}
       | bloqueHabitaciones definicionHabitacion	{ ;}
       ;
        
definicionHabitacion: INIHABITACION {salida << "\t// Nuevo habitacion" << endl;} PARENTIZQ expresion COMA expresion PARENTDER CADENACOMILLAS
		 {salida << "\tnuevaHabitacionAmu("<< $8 << ","<< $4.valor << ","<< $6.valor<<");"  << endl;} DOSPUNTOS siguienteLin secCondiciones  FINHABITACION siguienteLin { salida << endl;}
	;

secuenciaInstrucciones: definicionInstruccion		{;}
       
       | secuenciaInstrucciones definicionInstruccion 	{;}
       
       ;
definicionInstruccion:   SITUAR PARENTIZQ VARIABLEMAYUS COMA expresion COMA expresion PARENTDER siguienteLin {if(!condicionn || ejecutarCondicion){ 
												tipo_dato aux;
												tipo_cadena color;
												if(contenedorr.buscar($3, aux)){
													
													
													if(aux.tipo == 3){
													contenedorr.numeroAColor(aux.valor.valor_mueble_rect.color, color);
													salida << "\trectanguloAmu(" << (int)$5.valor << ", " << (int)$7.valor << ", " << aux.valor.valor_mueble_rect.alto << ", " << aux.valor.valor_mueble_rect.ancho << ", " << color << ");" << endl;
													}else{
													contenedorr.numeroAColor(aux.valor.valor_mueble_circ.color, color);
													salida << "\tcirculoAmu(" << (int)$5.valor << ", " << (int)$7.valor << ", " << aux.valor.valor_mueble_circ.radio << ", " << color << ");" << endl;
													
													}
												}
												}
											   } 
									

		| PAUSA PARENTIZQ expresion PARENTDER siguienteLin {if(!condicionn || ejecutarCondicion){
       												salida << "\tpausaAmu(" << $3.valor << ");" << endl;
       											}
       											}
       
		
		| MENSAJE PARENTIZQ CADENACOMILLAS PARENTDER siguienteLin  {if(!condicionn || ejecutarCondicion){
       												int longitud = strlen($3);
       												salida << "\t// ";
       												for(int i = 1; i < (longitud - 1); i++){
       													salida << $3[i];}		
       												salida << endl; 	}
       											}
		
		| IDVariable ASIGNACION expresion siguienteLin		{tipo_dato aux;
											 if(contenedorr.buscar($1, aux)){
											 	switch(aux.tipo){
											 		case 0:											 		
									 					aux.valor.valor_entero = $3.valor;									 	
											 			break;
											 		case 1:											 			
									 						aux.valor.valor_real = $3.valor;									 					
											 			break;
											 		default:
											 		break;
											 	}
											 	contenedorr.insertar(aux);
											 }
											 }
											 
       ;	
 
secCondiciones: defCondicion secCondiciones		{;}
       | definicionInstruccion secCondiciones			{;}
       | 						{;}
       ;
       
	
defCondicion: condicionSi		 				{condicionn = false;}
       | condicionSi condicionSino	 				{condicionn = false;}
       
       ;

condicionSi: SI PARENTIZQ expresion_bool PARENTDER {condicionn = true; ejecutarCondicion = $3;}  '{' siguienteLineaCond secuenciaInstrucciones '}' siguienteLin {;}
       ;
    
condicionSino: SINO {ejecutarCondicion = !ejecutarCondicion;} '{' siguienteLineaCond secuenciaInstrucciones '}' siguienteLin {;}
       ;


expresion:    NUMERO 		{$$.esReal=false;$$.valor=$1;}	

       | REAL 			{$$.esReal=true;$$.valor=$1;}
       
       | IDVariable		{tipo_dato aux;
       				 strcpy(aux.identificador, $1);
       				 if(contenedorr.buscar($1, aux)){
       				 	if(aux.tipo == 0){$$.esReal = false;$$.valor = aux.valor.valor_entero;}
       				 	
       				 	else{if(aux.tipo == 1){$$.esReal = true; $$.valor = aux.valor.valor_real;}
       				 	
       				 	else{if(aux.tipo == 2){errorSemantico = true; cout<<"El tipo lógico no puede aparecer en la parte derecha ";}}
       				 	}
       				 }
			 	 else{errorSemantico = true; }
       				 }
       				 
       
       | '(' expresion')'		{$$.esReal=$2.esReal;$$.valor=$2.valor;} 
            
                    
       | expresion'+' expresion		{$$.esReal=$1.esReal||$3.esReal;
       
       				 if($$.esReal){$$.valor=$1.valor+$3.valor;} 
       				 else{$$.valor=int($1.valor)+int($3.valor);}
       				 
			 	}
			 	
            
       | expresion'-' expresion   	{$$.esReal=$1.esReal||$3.esReal;
       
       				 if($$.esReal){$$.valor=$1.valor-$3.valor;} 
       				 else{$$.valor=int($1.valor)-int($3.valor);}
       				 
			 	}
			 	
                 
       | expresion'*' expresion       	{$$.esReal = $1.esReal || $3.esReal;
       
       				 if ($$.esReal){$$.valor = $1.valor * $3.valor;} 
       				 else{$$.valor = int($1.valor) * int($3.valor);}
       				 
			 	}
			 	
       | expresion'/' expresion       	{$$.esReal = true;
       
       				  if($3.valor == 0){errorSemantico = true;cout<<"Intento de división entre 0 - ";}
       				  
       				  else{{$$.valor = $1.valor / $3.valor;} 
       				  
       				  }
       				 
			 	}
       
			 	
       				 	
       | expresion'%' expresion		{$$.esReal = $1.esReal || $3.esReal;
       
       				  if($$.esReal || $3.valor == 0){errorSemantico = true;}
       				  
       				  if($3.valor == 0){cout<<"Intento de division entre 0 - ";}
       				  
       				  	else{if($$.esReal){cout<<"Se usa el operando % con un operando real - ";}
       				  	
       				  	     else{$$.valor=int($1.valor)%int($3.valor);}
       				  	}
       				  	
       				  	     
                                }
			 	
       
       |'-' expresion%prec menos  	{$$.esReal=$2.esReal;$$.valor= -$2.valor;}
       ;
       
       
expresion_bool: FALSE                   {$$=false;
													} 

       |TRUE                        {$$=true;
       						}

       
       |expresion MAYOR expresion			{$$=$1.valor>$3.valor;
       						}

	   |expresion MENOR expresion			{$$=$1.valor<$3.valor;
	   						}
       
       |expresion MAYOR_IGUAL expresion		{$$=$1.valor>=$3.valor;
       						}

       
       |expresion MENOR_IGUAL expresion		{$$=$1.valor<=$3.valor;
       						}
       
       
       |expresion IGUAL expresion			{$$=$1.valor==$3.valor;
       						}
       
       
       |expresion DISTINTO expresion		{$$=$1.valor!=$3.valor;
       						}
       
       
       |expresion_bool IGUAL expresion_bool	{$$=$1==$3;
       						}
       
       
       |expresion_bool DISTINTO expresion_bool	{$$=$1!=$3;
       						}
       
       |expresion_bool OR expresion_bool		
       							{if($1==false 
       							&& $3==false){$$=false;
       							}
       				           else{$$=true;
       				           }
       				        }
       
       |expresion_bool AND expresion_bool		
       						{if($1==true && $3==true){$$=true;
       						}
       					  else{$$=false;
       					  }
       					}
       				        
       				        
       |NOT expresion_bool	{if($2==false){$$=true;
       						}
       					  
       					     else{$$=false;
       					     }
       					}
       								
       								
       |'(' expresion_bool ')'     {$$ = $2;
       						}							
       ;
       
       
%%

int main(int argc, char* argv[]) {
    n_lineas = 0;
    
    if (argc != 1) {
        yyin = fopen(argv[1], "rt");
    } else {
        cout << "Faltan argumentos" << endl;
        return 1;
    }
    string fichero = argv[1];
    fichero.replace(fichero.size() - 4, 4, ".cpp");
    salida.open(fichero);
	salida << "// Traducción del lenguaje AMuebla" << endl;
	salida << "#include \"amuebla.h\" " << endl;
	salida << "#include <allegro5/allegro5.h>" << endl;
	salida << endl;
	salida << "using namespace std;" << endl;
	salida << endl;
	salida << "int main(int argc, char *argv[]) {" << endl;
	salida << "\tiniciarAmu();" << endl;
	salida << endl;
    yyparse();
    contenedorr.mostrar();
    salida << "\t// Se liberan los recursos del entorno gráfico" << endl;
	salida << "\tterminarAmu();" << endl;
	salida << "\treturn 0;" << endl;
	salida << "}";
    salida.close();
    
    return 0;
}
