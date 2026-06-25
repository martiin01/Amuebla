/* A Bison parser, made by GNU Bison 3.0.4.  */

/* Bison interface for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015 Free Software Foundation, Inc.

   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <http://www.gnu.org/licenses/>.  */

/* As a special exception, you may create a larger work that contains
   part or all of the Bison parser skeleton and distribute that work
   under terms of your choice, so long as that work isn't itself a
   parser generator using the skeleton or a modified version thereof
   as a parser skeleton.  Alternatively, if you modify or redistribute
   the parser skeleton itself, you may (at your option) remove this
   special exception, which will cause the skeleton and the resulting
   Bison output files to be licensed under the GNU General Public
   License without this special exception.

   This special exception was added by the Free Software Foundation in
   version 2.2 of Bison.  */

#ifndef YY_YY_EXPRESIONES_H_INCLUDED
# define YY_YY_EXPRESIONES_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    TRUE = 258,
    FALSE = 259,
    NUMERO = 260,
    REAL = 261,
    ASIGNACION = 262,
    ASIGNACIONIGUAL = 263,
    AND = 264,
    OR = 265,
    NOT = 266,
    MAYOR = 267,
    MAYOR_IGUAL = 268,
    MENOR = 269,
    MENOR_IGUAL = 270,
    IGUAL = 271,
    DISTINTO = 272,
    IDVariable = 273,
    VARIABLEMAYUS = 274,
    Variables = 275,
    MUEBLES = 276,
    INIHABITACION = 277,
    FINHABITACION = 278,
    ENTERO = 279,
    NUMREAL = 280,
    LOG = 281,
    COLOR = 282,
    RECTANGULO = 283,
    CIRCULO = 284,
    COMA = 285,
    DOSPUNTOS = 286,
    CADENACOMILLAS = 287,
    PARENTIZQ = 288,
    PARENTDER = 289,
    PAUSA = 290,
    MENSAJE = 291,
    SITUAR = 292,
    SI = 293,
    SINO = 294,
    REPETIR = 295,
    menos = 296
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED

union YYSTYPE
{
#line 28 "expresiones.y" /* yacc.c:1909  */


  char c_cadena[100];
  bool c_log;
  int c_entero;	
  float c_real;
  
  struct {
  	bool esReal;
  	float valor;
  }c_expresionesion;

#line 109 "expresiones.h" /* yacc.c:1909  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_EXPRESIONES_H_INCLUDED  */
