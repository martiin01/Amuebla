#include "contenedor.h"

contenedor::contenedor() {
	ocupadas = 0;
}

bool contenedor::insertar(tipo_dato &dato) {
    bool enc = true;
    bool modifica = false;

    if (ocupadas >= MAX) {
        enc = false;
    }
    else{
        for (int i = 0; i < ocupadas; i++) {
        if (strcmp(VectorIdentificadores[i].identificador, dato.identificador) == 0) {
        if(VectorIdentificadores[i].tipo == dato.tipo){
		VectorIdentificadores[i].valor.asignar(dato.valor, dato.tipo);
		modifica=true;

        } else{modifica=false;enc=false;}
        }
    }

    if(enc and !modifica){
	    strcpy(VectorIdentificadores[ocupadas].identificador, dato.identificador);
	    VectorIdentificadores[ocupadas].tipo = dato.tipo;
	    VectorIdentificadores[ocupadas].valor.asignar(dato.valor, dato.tipo);
	    ocupadas++;
    }
    }

    return enc;
}

tipo_valor& tipo_valor::asignar(const tipo_valor& other, int tipo) {
		if (tipo == 0) {
		    valor_entero = other.valor_entero;
		} else if (tipo == 1) {
		    valor_real = other.valor_real;
		} else if (tipo == 2) {
		    valor_bool = other.valor_bool;
		} else if (tipo == 3) {
			valor_mueble_rect = other.valor_mueble_rect;
		} else if (tipo == 4) {
			valor_mueble_circ = other.valor_mueble_circ;
		}
		return *this;
    	}

void contenedor::nombreTipos (string &s1,string &s2,tipo_dato d1,tipo_dato d2){
switch (d1.tipo) {
            case 0:
                s1= "entero";
                break;
            case 1:
                s1="real";
                break;
            case 2:
                s1="lógico";
                break;
            default:
                break;
            }

switch (d2.tipo) {
            case 0:
                s2= "entero";
                break;
            case 1:
                s2="real";
                break;
            case 2:
                s2="lógico";
                break;
            default:
                break;
            }


}

void contenedor::tipoSecuencias(int pos, int tipo_nuevo){
	for(int i = 1; i <= pos; i++){
		VectorIdentificadores[ocupadas - i].tipo = tipo_nuevo;
	}
}

int contenedor::colorANumero(string color){
	int res = -1;

	if(color == "blanco"){
		res = 0;
	}else if (color == "negro"){
		res = 1;
	}else if(color == "gris"){
		res = 2;
	}else if(color == "rojo"){
		res = 3;
	}else if(color == "azul"){
		res = 4;
	}else if(color == "amarillo"){
		res = 5;
	}else if(color == "verde"){
		res = 6;
	}else if(color == "marr0n"){
		res = 7;
	}

	return res;
}

void contenedor::numeroAColor(int color, tipo_cadena &nombre){

	switch(color){
		case 0:
			strcpy(nombre, "BLANCO");
			break;
		case 1:
			strcpy(nombre, "NEGRO");
			break;
		case 2:
			strcpy(nombre, "GRIS");
			break;
		case 3:
			strcpy(nombre, "ROJO");
			break;
		case 4:
			strcpy(nombre, "AZUL");
			break;
		case 5:
			strcpy(nombre, "AMARILLO");
			break;
		case 6:
			strcpy(nombre, "VERDE");
			break;
		case 7:
				strcpy(nombre, "MARRON");
				break;
		default:
			break;
	}
}


bool contenedor::buscar(tipo_cadena ident, tipo_dato &ValorDevuelto) {
    for (int i = 0; i < ocupadas; i++) {
        if (strcmp(VectorIdentificadores[i].identificador, ident) == 0) {
            ValorDevuelto.valor.asignar(VectorIdentificadores[i].valor, VectorIdentificadores[i].tipo);
            ValorDevuelto.tipo = VectorIdentificadores[i].tipo;
            strcpy(ValorDevuelto.identificador, VectorIdentificadores[i].identificador);
            return true;
        }
    }
    return false;
}


void contenedor::tablaFichero(const char* nombreArchivoSalida) {
    ofstream fichero(nombreArchivoSalida);

    if (fichero.is_open()) {
        fichero << "Tabla: " << endl;
        for (int i = 0; i < ocupadas; i++) {
            fichero << VectorIdentificadores[i].identificador;

            if (VectorIdentificadores[i].tipo == 0) {
                fichero << "	entero	";
            } else if (VectorIdentificadores[i].tipo == 1) {
                fichero << "	real	";
            } else if (VectorIdentificadores[i].tipo == 2) {
                fichero << "	lógico	";
            } else if (VectorIdentificadores[i].tipo == 3) {
                fichero << "	mueble rectangular	";
            } else if (VectorIdentificadores[i].tipo == 4) {
                fichero << "	mueble circular   ";
            }

            if (VectorIdentificadores[i].tipo == 0) {
                fichero << VectorIdentificadores[i].valor.valor_entero << endl;
            } else if (VectorIdentificadores[i].tipo == 1) {
                fichero << VectorIdentificadores[i].valor.valor_real << endl;
            } else if (VectorIdentificadores[i].tipo == 2) {
                if (VectorIdentificadores[i].valor.valor_bool == 1) {
                    fichero << "true" << endl;
                } else {
                    fichero << "false" << endl;
                }
            } else if (VectorIdentificadores[i].tipo == 3) {
                fichero << VectorIdentificadores[i].valor.valor_mueble_rect.alto;
                fichero << VectorIdentificadores[i].valor.valor_mueble_rect.ancho;
                fichero << VectorIdentificadores[i].valor.valor_mueble_rect.color << endl;
            } else if (VectorIdentificadores[i].tipo == 4) {
                fichero << VectorIdentificadores[i].valor.valor_mueble_circ.radio;
                fichero << VectorIdentificadores[i].valor.valor_mueble_circ.color << endl;
            }
        }


        fichero.close();
    } else {
        cout << "No se puede abrir fichero" << endl;
    }
}




void contenedor::mostrar() {
	cout << "Tabla de simbolos:" << endl;
    for (int i = 0; i < ocupadas; i++) {
        cout << VectorIdentificadores[i].identificador;
        switch (VectorIdentificadores[i].tipo) {
            case 0:
                cout << "  entero  ";
                break;
            case 1:
                cout << "  real  ";
                break;
            case 2:
                cout << "  lógico  ";
                break;
            case 3:
            	cout << "  mueble_rectangular  ";
            	break;
            case 4:
            	cout << "  mueble_circular  ";
            	break;
            default:
                break;
            }
        switch (VectorIdentificadores[i].tipo) {
            case 0:
                cout << VectorIdentificadores[i].valor.valor_entero << endl;
                break;
            case 1:
                cout << VectorIdentificadores[i].valor.valor_real << endl;
                break;
            case 2:
            	if(VectorIdentificadores[i].valor.valor_bool == 1){
            		cout << "true" << endl;
            	}else{
            		cout << "false" << endl;
            	}
                break;

            case 3:
            	cout << "Alto: " << VectorIdentificadores[i].valor.valor_mueble_rect.alto;
            	cout << " Ancho: " << VectorIdentificadores[i].valor.valor_mueble_rect.ancho;
            	cout << " Color: ";
            	if (VectorIdentificadores[i].valor.valor_mueble_rect.color == 0) {
            	    cout << "blanco" << endl;
            	} else if (VectorIdentificadores[i].valor.valor_mueble_rect.color == 1) {
            	    cout << "negro" << endl;
            	} else if (VectorIdentificadores[i].valor.valor_mueble_rect.color == 2) {
            	    cout << "gris" << endl;
            	} else if (VectorIdentificadores[i].valor.valor_mueble_rect.color == 3) {
            	    cout << "rojo" << endl;
            	} else if (VectorIdentificadores[i].valor.valor_mueble_rect.color == 4) {
            	    cout << "azul" << endl;
            	} else if (VectorIdentificadores[i].valor.valor_mueble_rect.color == 5) {
            	    cout << "amarillo" << endl;
            	} else if (VectorIdentificadores[i].valor.valor_mueble_rect.color == 6) {
            	    cout << "verde" << endl;
            	} else if (VectorIdentificadores[i].valor.valor_mueble_rect.color == 7) {
            	    cout << "marron" << endl;
            	}

            	break;
            case 4:
            	cout << "Radio: " << VectorIdentificadores[i].valor.valor_mueble_circ.radio;
            	cout << " Color: ";
            	if (VectorIdentificadores[i].valor.valor_mueble_circ.color == 0) {
            	    cout << "blanco" << endl;
            	} else if (VectorIdentificadores[i].valor.valor_mueble_circ.color == 1) {
            	    cout << "negro" << endl;
            	} else if (VectorIdentificadores[i].valor.valor_mueble_circ.color == 2) {
            	    cout << "gris" << endl;
            	} else if (VectorIdentificadores[i].valor.valor_mueble_circ.color == 3) {
            	    cout << "rojo" << endl;
            	} else if (VectorIdentificadores[i].valor.valor_mueble_circ.color == 4) {
            	    cout << "azul" << endl;
            	} else if (VectorIdentificadores[i].valor.valor_mueble_circ.color == 5) {
            	    cout << "amarillo" << endl;
            	} else if (VectorIdentificadores[i].valor.valor_mueble_circ.color == 6) {
            	    cout << "verde" << endl;
            	} else if (VectorIdentificadores[i].valor.valor_mueble_circ.color == 7) {
            	    cout << "marron" << endl;
            	}
            	break;

            default:
                break;
        }
    }
}

contenedor::~contenedor() {
}
