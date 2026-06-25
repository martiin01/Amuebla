// Traducción del lenguaje AMuebla
#include "amuebla.h" 
#include <allegro5/allegro5.h>

using namespace std;

int main(int argc, char *argv[]) {
	iniciarAmu();

	// Nuevo habitacion
	nuevaHabitacionAmu("Salón",1000,1000);
	// Se sitúa el sofá
	rectanguloAmu(0, 200, 200, 600, AZUL);
	// Se sitúa la mesa central
	circuloAmu(450, 500, 150.5, AZUL);
	pausaAmu(1.2);
	// Se sitúan los dos sillones
	rectanguloAmu(350, 100, 200, 200, AZUL);
	rectanguloAmu(350, 700, 200, 200, AZUL);
	// Se sitúa un mueble
	rectanguloAmu(900, 100, 200, 800, NEGRO);

	// Nuevo habitacion
	nuevaHabitacionAmu("Dormitorio",300,300);
	rectanguloAmu(75, 0, 150, 200, VERDE);
	circuloAmu(50, 25, 25, ROJO);
	circuloAmu(250, 25, 25, ROJO);
	rectanguloAmu(900, 100, 300, 40, GRIS);
	pausaAmu(2.2);

	// Nuevo habitacion
	nuevaHabitacionAmu("Terraza",400,600);
	rectanguloAmu(0, 0, 100, 100, AMARILLO);
	rectanguloAmu(0, 200, 100, 100, AMARILLO);
	rectanguloAmu(100, 100, 100, 100, AMARILLO);
	rectanguloAmu(100, 300, 100, 100, AMARILLO);
	rectanguloAmu(200, 0, 100, 100, AMARILLO);
	rectanguloAmu(200, 200, 100, 100, AMARILLO);
	rectanguloAmu(300, 100, 100, 100, AMARILLO);
	rectanguloAmu(300, 300, 100, 100, AMARILLO);
	rectanguloAmu(400, 0, 100, 100, AMARILLO);
	rectanguloAmu(400, 200, 100, 100, AMARILLO);
	rectanguloAmu(500, 100, 100, 100, AMARILLO);
	rectanguloAmu(500, 300, 100, 100, AMARILLO);
	circuloAmu(50, 150, 47.5, GRIS);
	circuloAmu(50, 350, 47.5, GRIS);
	circuloAmu(150, 50, 47.5, GRIS);
	circuloAmu(150, 250, 47.5, GRIS);
	circuloAmu(250, 150, 47.5, GRIS);
	circuloAmu(250, 350, 47.5, GRIS);
	circuloAmu(350, 50, 47.5, GRIS);
	circuloAmu(350, 250, 47.5, GRIS);
	circuloAmu(450, 150, 47.5, GRIS);
	circuloAmu(450, 350, 47.5, GRIS);
	circuloAmu(550, 50, 47.5, GRIS);
	circuloAmu(550, 250, 47.5, GRIS);
	pausaAmu(3.2);

	// Se liberan los recursos del entorno gráfico
	terminarAmu();
	return 0;
}