#ifndef _CONTENEDOR_H
#define _CONTENEDOR_H

#include <iostream>
#include <string.h>
#include <typeinfo>
#include <fstream>

using namespace std;
typedef char tipo_cadena[100];

typedef struct mueble_rectangular {
	mueble_rectangular() {};
	~mueble_rectangular() {};
	float  alto;
	float  ancho;
	int    color;
}mueble_rectangular;

typedef struct mueble_circular {
	mueble_circular() {};
	~mueble_circular() {};
	float    radio;
	int    color;
}mueble_circular;

typedef union tipo_valor {
	tipo_valor() {}
    ~tipo_valor() {}
	int 			valor_entero;
	float 			valor_real;
	bool 			valor_bool;
	tipo_cadena 		valor_cad;
	mueble_rectangular valor_mueble_rect;
	mueble_circular valor_mueble_circ;
	 tipo_valor& asignar(const tipo_valor& other, int tipo);
}tipo_valor;


typedef struct tipo_dato {
	tipo_dato() {}
    ~tipo_dato() {}
	tipo_cadena		identificador;
	int 			tipo;
	tipo_valor		valor;
}tipo_dato;
const int MAX = 100;

class contenedor {
private:
  tipo_dato VectorIdentificadores[MAX];
  int ocupadas;

    public:

    contenedor();


            bool insertar(tipo_dato &dato);
    		bool buscar(tipo_cadena ident, tipo_dato &ValorDevuelto);
    		void nombreTipos (string &s1,string &s2,tipo_dato d1,tipo_dato d2);
    		void tipoSecuencias(int pos, int tipo_nuevo);
    		int colorANumero(string color);
    		void numeroAColor(int color, tipo_cadena &nombre);
    		void tablaFichero(const char* nombreArchivoSalida);
            void mostrar();

	virtual ~contenedor();
};

#endif
