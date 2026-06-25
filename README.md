# Amuebla
# Compilador y Entorno del Lenguaje AMUEBLA

Este proyecto consiste en la implementación de un **lenguaje de dominio específico (DSL) llamado "AMUEBLA"**, diseñado para definir y visualizar habitaciones y la disposición de muebles (rectangulares y circulares) mediante una interfaz gráfica. El proyecto integra un compilador completo y una librería de ejecución (*runtime*) dedicada.

## 🚀 Arquitectura del Proyecto

* **Compilador (Frontend):** Utiliza herramientas de generación de compiladores para transformar scripts de alto nivel a código C++ ejecutable.
    * **Análisis Léxico:** Implementado con **Flex** (`lex.yy.c`).
    * **Análisis Sintáctico y Semántico:** Implementado con **Bison** (`expresiones.c`/`.h`).
* **Librería de Ejecución (Backend):** Proporciona las primitivas necesarias para la visualización gráfica (`amuebla.cpp` / `amuebla.h`), apoyándose en la librería **Allegro 5**.
* **Gestión de Datos:** Estructura de tabla de símbolos (`contenedor.cpp` / `contenedor.h`) para el manejo de variables durante la compilación.

## 🛠 Tecnologías Utilizadas

* **Lenguajes:** C, C++
* **Herramientas de Compilación:** Flex, Bison
* **Gráficos:** Allegro 5 (primitivas, displays y gestión de colores)
* **Entorno:** Compatible con compiladores C++ estándar (GCC recomendado en entornos Unix/Linux)

## 📂 Estructura del Proyecto

* `expresiones.y / expresiones.c`: Definición de la gramática y lógica de traducción del lenguaje.
* `lex.yy.c`: Analizador léxico generado por Flex.
* `amuebla.cpp` / `amuebla.h`: API gráfica que permite dibujar habitaciones y muebles.
* `contenedor.cpp` / `contenedor.h`: Gestor de identificadores y memoria para el compilador.
* `basica.cpp` / `estructura.cpp`: Ejemplos de programas en C++ resultantes del proceso de traducción.

## ⚙️ Requisitos de Compilación

Para compilar y ejecutar este proyecto, necesitas:

1. **Librería Allegro 5:** Debes tener instalados los paquetes de desarrollo de `allegro5` y `allegro_primitives`.
2. **Herramientas de construcción:** `Flex`, `Bison` y un compilador compatible con C++ (`g++`).

### Pasos para ejecutar:
1. **Traducir el script:** Compila el analizador y úsalo para transformar tu archivo `.amu` a un archivo `.cpp`.
   ```bash
   g++ -o traductor expresiones.c lex.yy.c contenedor.cpp -lfl
   ./traductor script_ejemplo.txt
