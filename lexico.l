%{
#include "expresiones.h"
#include "contenedor.h"
#include <math.h>
#include <cstdio>
#include <string>
#include <cmath>
int n_lineas;
int tipo_aux;
contenedor contenedorr;
%}

%option noyywrap
%x COM1 COM2 COM3

%%
"%%"                BEGIN(COM3);
<COM3>"\n"          BEGIN(0); n_lineas++; return '\n';
<COM3>.             ;

true					return TRUE;
false					return FALSE;

and					return AND; 
or					return OR;
not					return NOT;


VARIABLES				strcpy(yylval.c_cadena,yytext);return Variables;
MUEBLES			strcpy(yylval.c_cadena,yytext);return MUEBLES;
HABITACION					strcpy(yylval.c_cadena,yytext);return INIHABITACION;
FINHABITACION				strcpy(yylval.c_cadena,yytext);return FINHABITACION;

Entero					strcpy(yylval.c_cadena,yytext);return ENTERO;
Real					strcpy(yylval.c_cadena,yytext);return NUMREAL;
Bool					strcpy(yylval.c_cadena,yytext);return LOG;

rojo					strcpy(yylval.c_cadena,yytext);return COLOR;
azul					strcpy(yylval.c_cadena,yytext);return COLOR;
amarillo				strcpy(yylval.c_cadena,yytext);return COLOR;
verde 					strcpy(yylval.c_cadena,yytext);return COLOR;
marron					strcpy(yylval.c_cadena,yytext);return COLOR;
blanco					strcpy(yylval.c_cadena,yytext);return COLOR;
negro					strcpy(yylval.c_cadena,yytext);return COLOR;
gris					strcpy(yylval.c_cadena,yytext);return COLOR;


rectangulo			strcpy(yylval.c_cadena,yytext);return RECTANGULO;
circulo		strcpy(yylval.c_cadena,yytext);return CIRCULO;

pausa					strcpy(yylval.c_cadena,yytext);return PAUSA;
mensaje					strcpy(yylval.c_cadena,yytext);return MENSAJE;
situar					strcpy(yylval.c_cadena,yytext);return SITUAR;

si					strcpy(yylval.c_cadena,yytext);return SI;
si_no					strcpy(yylval.c_cadena,yytext);return SINO;

[<]					return MENOR;
[<][=]					return MENOR_IGUAL;
[>]					return MAYOR;
[,]					return COMA;
[:]					return DOSPUNTOS;
[(]					return PARENTIZQ;
[)]					return PARENTDER;		
[=]					return ASIGNACIONIGUAL;
[>][=]					return MAYOR_IGUAL;
[=][=]					return IGUAL;
[!][=]					return DISTINTO;
[<][-]					return ASIGNACION;

[0-9]+					yylval.c_entero = atoi(yytext);return NUMERO;
[0-9]+[.][0-9]*|[0-9]*[.][0-9]+		yylval.c_real = atof(yytext);return REAL;

[A-ZÑ][A-Za-z0-9ñÑ_]*			strcpy(yylval.c_cadena,yytext);return VARIABLEMAYUS;
[a-zñ][a-zA-Z0-9ñÑ_]*			strcpy(yylval.c_cadena,yytext);return IDVariable;

["][^"]*["]				strcpy(yylval.c_cadena,yytext);return CADENACOMILLAS;

\n					n_lineas++; return (yytext[0]);
\%%.*                               		        ;
[\t ]					;	
. 					return (yytext[0]);
%%


