/* A Bison parser, made by GNU Bison 3.0.4.  */

/* Bison implementation for Yacc-like parsers in C

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

/* C LALR(1) parser skeleton written by Richard Stallman, by
   simplifying the original so-called "semantic" parser.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "3.0.4"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* Copy the first part of user declarations.  */
#line 1 "expresiones.y" /* yacc.c:339  */

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




#line 93 "expresiones.c" /* yacc.c:339  */

# ifndef YY_NULLPTR
#  if defined __cplusplus && 201103L <= __cplusplus
#   define YY_NULLPTR nullptr
#  else
#   define YY_NULLPTR 0
#  endif
# endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* In a future release of Bison, this section will be replaced
   by #include "expresiones.h".  */
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
#line 28 "expresiones.y" /* yacc.c:355  */


  char c_cadena[100];
  bool c_log;
  int c_entero;	
  float c_real;
  
  struct {
  	bool esReal;
  	float valor;
  }c_expresionesion;

#line 188 "expresiones.c" /* yacc.c:355  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_EXPRESIONES_H_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 205 "expresiones.c" /* yacc.c:358  */

#ifdef short
# undef short
#endif

#ifdef YYTYPE_UINT8
typedef YYTYPE_UINT8 yytype_uint8;
#else
typedef unsigned char yytype_uint8;
#endif

#ifdef YYTYPE_INT8
typedef YYTYPE_INT8 yytype_int8;
#else
typedef signed char yytype_int8;
#endif

#ifdef YYTYPE_UINT16
typedef YYTYPE_UINT16 yytype_uint16;
#else
typedef unsigned short int yytype_uint16;
#endif

#ifdef YYTYPE_INT16
typedef YYTYPE_INT16 yytype_int16;
#else
typedef short int yytype_int16;
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif ! defined YYSIZE_T
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned int
# endif
#endif

#define YYSIZE_MAXIMUM ((YYSIZE_T) -1)

#ifndef YY_
# if defined YYENABLE_NLS && YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(Msgid) dgettext ("bison-runtime", Msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(Msgid) Msgid
# endif
#endif

#ifndef YY_ATTRIBUTE
# if (defined __GNUC__                                               \
      && (2 < __GNUC__ || (__GNUC__ == 2 && 96 <= __GNUC_MINOR__)))  \
     || defined __SUNPRO_C && 0x5110 <= __SUNPRO_C
#  define YY_ATTRIBUTE(Spec) __attribute__(Spec)
# else
#  define YY_ATTRIBUTE(Spec) /* empty */
# endif
#endif

#ifndef YY_ATTRIBUTE_PURE
# define YY_ATTRIBUTE_PURE   YY_ATTRIBUTE ((__pure__))
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# define YY_ATTRIBUTE_UNUSED YY_ATTRIBUTE ((__unused__))
#endif

#if !defined _Noreturn \
     && (!defined __STDC_VERSION__ || __STDC_VERSION__ < 201112)
# if defined _MSC_VER && 1200 <= _MSC_VER
#  define _Noreturn __declspec (noreturn)
# else
#  define _Noreturn YY_ATTRIBUTE ((__noreturn__))
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(E) ((void) (E))
#else
# define YYUSE(E) /* empty */
#endif

#if defined __GNUC__ && 407 <= __GNUC__ * 100 + __GNUC_MINOR__
/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN \
    _Pragma ("GCC diagnostic push") \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")\
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# define YY_IGNORE_MAYBE_UNINITIALIZED_END \
    _Pragma ("GCC diagnostic pop")
#else
# define YY_INITIAL_VALUE(Value) Value
#endif
#ifndef YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_END
#endif
#ifndef YY_INITIAL_VALUE
# define YY_INITIAL_VALUE(Value) /* Nothing. */
#endif


#if ! defined yyoverflow || YYERROR_VERBOSE

/* The parser invokes alloca or malloc; define the necessary symbols.  */

# ifdef YYSTACK_USE_ALLOCA
#  if YYSTACK_USE_ALLOCA
#   ifdef __GNUC__
#    define YYSTACK_ALLOC __builtin_alloca
#   elif defined __BUILTIN_VA_ARG_INCR
#    include <alloca.h> /* INFRINGES ON USER NAME SPACE */
#   elif defined _AIX
#    define YYSTACK_ALLOC __alloca
#   elif defined _MSC_VER
#    include <malloc.h> /* INFRINGES ON USER NAME SPACE */
#    define alloca _alloca
#   else
#    define YYSTACK_ALLOC alloca
#    if ! defined _ALLOCA_H && ! defined EXIT_SUCCESS
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
      /* Use EXIT_SUCCESS as a witness for stdlib.h.  */
#     ifndef EXIT_SUCCESS
#      define EXIT_SUCCESS 0
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's 'empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (0)
#  ifndef YYSTACK_ALLOC_MAXIMUM
    /* The OS might guarantee only one guard page at the bottom of the stack,
       and a page size can be as small as 4096 bytes.  So we cannot safely
       invoke alloca (N) if N exceeds 4096.  Use a slightly smaller number
       to allow for a few compiler-allocated temporary stack slots.  */
#   define YYSTACK_ALLOC_MAXIMUM 4032 /* reasonable circa 2006 */
#  endif
# else
#  define YYSTACK_ALLOC YYMALLOC
#  define YYSTACK_FREE YYFREE
#  ifndef YYSTACK_ALLOC_MAXIMUM
#   define YYSTACK_ALLOC_MAXIMUM YYSIZE_MAXIMUM
#  endif
#  if (defined __cplusplus && ! defined EXIT_SUCCESS \
       && ! ((defined YYMALLOC || defined malloc) \
             && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef EXIT_SUCCESS
#    define EXIT_SUCCESS 0
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined EXIT_SUCCESS
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined EXIT_SUCCESS
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
# endif
#endif /* ! defined yyoverflow || YYERROR_VERBOSE */


#if (! defined yyoverflow \
     && (! defined __cplusplus \
         || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yytype_int16 yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (yytype_int16) + sizeof (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

# define YYCOPY_NEEDED 1

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)                           \
    do                                                                  \
      {                                                                 \
        YYSIZE_T yynewbytes;                                            \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / sizeof (*yyptr);                          \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, (Count) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYSIZE_T yyi;                         \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  3
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   286

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  52
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  25
/* YYNRULES -- Number of rules.  */
#define YYNRULES  71
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  182

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   296

#define YYTRANSLATE(YYX)                                                \
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, without out-of-bounds checking.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
      47,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,    45,     2,     2,
      50,    51,    43,    41,     2,    42,     2,    44,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    48,     2,    49,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     1,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    46
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    92,    92,    95,    96,    99,   100,   103,   104,   107,
     108,   111,   117,   123,   128,   153,   179,   193,   217,   230,
     233,   241,   251,   254,   255,   258,   273,   287,   293,   294,
     297,   298,   297,   301,   303,   306,   325,   331,   339,   357,
     358,   359,   363,   364,   368,   368,   371,   371,   375,   377,
     379,   393,   396,   404,   412,   419,   431,   446,   450,   453,
     457,   460,   463,   467,   471,   475,   479,   483,   486,   494,
     502,   510
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "TRUE", "FALSE", "NUMERO", "REAL",
  "ASIGNACION", "ASIGNACIONIGUAL", "AND", "OR", "NOT", "MAYOR",
  "MAYOR_IGUAL", "MENOR", "MENOR_IGUAL", "IGUAL", "DISTINTO", "IDVariable",
  "VARIABLEMAYUS", "Variables", "MUEBLES", "INIHABITACION",
  "FINHABITACION", "ENTERO", "NUMREAL", "LOG", "COLOR", "RECTANGULO",
  "CIRCULO", "COMA", "DOSPUNTOS", "CADENACOMILLAS", "PARENTIZQ",
  "PARENTDER", "PAUSA", "MENSAJE", "SITUAR", "SI", "SINO", "REPETIR",
  "'+'", "'-'", "'*'", "'/'", "'%'", "menos", "'\\n'", "'{'", "'}'", "'('",
  "')'", "$accept", "programa", "siguienteLin", "siguienteLineaCond",
  "bloqueVars", "secuenciaVariables", "definicionVars", "secuenciaId",
  "bloqueMuebles", "secuenciaMuebles", "definicionMueble",
  "bloqueHabitaciones", "definicionHabitacion", "$@1", "$@2",
  "secuenciaInstrucciones", "definicionInstruccion", "secCondiciones",
  "defCondicion", "condicionSi", "$@3", "condicionSino", "$@4",
  "expresion", "expresion_bool", YY_NULLPTR
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[NUM] -- (External) token number corresponding to the
   (internal) symbol number NUM (which must be that of a token).  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,    43,    45,    42,    47,    37,   296,    10,   123,   125,
      40,    41
};
# endif

#define YYPACT_NINF -162

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-162)))

#define YYTABLE_NINF -23

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
    -162,     3,   -15,  -162,   -21,  -162,     8,  -162,   -13,   -21,
      27,  -162,   118,     1,  -162,    27,  -162,   -21,    68,    63,
      73,    83,  -162,   -21,    90,     0,  -162,    97,  -162,   -13,
      62,    96,   -23,   106,   -23,   125,   -23,   -13,   124,  -162,
      64,  -162,  -162,  -162,  -162,    62,  -162,    64,    62,   145,
     117,    64,   122,   -13,    64,   -13,    62,   -13,    79,    64,
     170,   160,  -162,  -162,    80,    21,    64,    64,    64,    64,
      64,    64,    64,    64,    64,    64,    64,   -13,    62,    62,
      62,    62,   -13,   234,  -162,   234,   117,   150,   151,   229,
      64,  -162,  -162,   241,   241,   241,   241,   241,   241,    40,
      40,  -162,  -162,  -162,   129,    70,  -162,  -162,   -13,   -13,
     -13,    64,    64,   207,   176,   186,   115,    64,   127,  -162,
     192,   143,   147,   136,   -21,   -21,   179,   -13,   161,   -21,
     187,   174,   177,   190,   191,    15,   203,    15,   154,   -13,
      64,    64,   193,   220,    62,  -162,   -21,  -162,  -162,  -162,
     234,   219,   175,   208,   101,   -13,   194,   -13,   -21,   -21,
      64,  -162,  -162,   -13,   -13,   202,   206,   148,    64,  -162,
      53,  -162,   224,   148,   -21,  -162,   -21,   133,   -13,   -13,
     -21,   -13
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       5,     0,     7,     1,     0,     6,     0,     3,     9,     0,
       0,     4,     0,     0,    30,     2,    28,     0,     0,     0,
       0,     0,    10,     0,     0,     0,    23,     0,    29,    19,
       0,    20,     0,    20,     0,    20,     0,    27,     0,    24,
       0,    59,    58,    48,    49,     0,    50,     0,     0,     0,
       0,     0,     0,    11,     0,    12,     0,    13,     0,     0,
       0,     0,    70,    57,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    17,     0,     0,
       0,     0,    18,     0,    21,     0,     0,     0,     0,     0,
       0,    51,    71,    60,    62,    61,    63,    64,    65,    52,
      53,    54,    55,    56,    69,    68,    66,    67,    14,    15,
      16,     0,     0,     0,     0,     0,     0,     0,     0,    31,
       0,     0,     0,     0,     0,     0,     0,    26,    41,     0,
       0,     0,     0,     0,     0,    41,     0,    41,    42,    25,
       0,     0,     0,     0,     0,    40,     0,    39,    46,    43,
       0,     0,     0,     0,     0,    32,     0,    38,     0,     0,
       0,    44,     5,    36,    37,     0,     0,     0,     0,     5,
       0,    33,     0,     0,     0,    34,     0,     0,    47,    35,
       0,    45
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -162,  -162,    -9,  -158,  -162,  -162,  -162,   132,  -162,  -162,
     215,  -162,   240,  -162,  -162,    84,  -161,  -120,  -162,  -162,
    -162,  -162,  -162,   -12,   -35
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     1,     8,     2,     6,    12,    22,    32,    10,    25,
      26,    15,    16,    27,   122,   170,   135,   136,   137,   138,
     166,   149,   156,    61,    50
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      13,    23,    23,     3,   167,     4,   171,    52,    29,   175,
      62,   173,   171,    65,    37,   145,   175,   147,    49,    24,
      24,    86,   -22,    53,     7,    55,     7,    57,    60,     9,
      78,    79,     5,   130,    11,    63,    64,    80,    81,    83,
      77,    82,    85,   104,   105,   106,   107,    89,    11,    14,
     131,   132,   133,   134,    93,    94,    95,    96,    97,    98,
      99,   100,   101,   102,   103,    41,    42,    43,    44,    43,
      44,   130,    92,    45,   108,    30,   109,   110,   113,    78,
      46,    31,    46,    74,    75,    76,    80,    81,   131,   132,
     133,    33,    66,    67,    68,    69,    70,    71,    38,   114,
     115,    35,   174,    51,    47,   120,    47,    87,    88,   154,
      78,    79,    48,    54,    59,   127,   128,    80,    81,    17,
     139,    72,    73,    74,    75,    76,    78,    79,   150,   151,
      40,    91,    56,    80,    81,   161,    18,   155,    58,    -8,
      84,   157,    19,    20,    21,    80,    81,   119,   165,   163,
     164,   130,    34,    36,   121,   124,   172,    66,    67,    68,
      69,    70,    71,   126,     7,   178,   130,   179,   131,   132,
     133,   181,    66,    67,    68,    69,    70,    71,   125,   130,
     111,   112,   180,   131,   132,   133,    72,    73,    74,    75,
      76,   129,     7,   148,   140,     5,   131,   132,   133,   134,
      90,    72,    73,    74,    75,    76,   117,   141,    11,   159,
     142,    72,    73,    74,    75,    76,   118,    72,    73,    74,
      75,    76,   123,   143,   144,   152,   146,    72,    73,    74,
      75,    76,   168,    72,    73,    74,    75,    76,   160,   153,
      39,   116,   162,    72,    73,    74,    75,    76,    72,    73,
      74,    75,    76,   158,   169,    28,     0,   177,   176,     0,
      72,    73,    74,    75,    76,    72,    73,    74,    75,    76,
      72,    73,    74,    75,    76,    72,    73,    74,    75,    76,
      91,     7,    72,    73,    74,    75,    76
};

static const yytype_int16 yycheck[] =
{
       9,     1,     1,     0,   162,    20,   167,    30,    17,   170,
      45,   169,   173,    48,    23,   135,   177,   137,    30,    19,
      19,    56,    22,    32,    47,    34,    47,    36,    40,    21,
       9,    10,    47,    18,    47,    47,    48,    16,    17,    51,
      49,    50,    54,    78,    79,    80,    81,    59,    47,    22,
      35,    36,    37,    38,    66,    67,    68,    69,    70,    71,
      72,    73,    74,    75,    76,     3,     4,     5,     6,     5,
       6,    18,    51,    11,    83,     7,    85,    86,    90,     9,
      18,    18,    18,    43,    44,    45,    16,    17,    35,    36,
      37,    18,    12,    13,    14,    15,    16,    17,     8,   111,
     112,    18,    49,     7,    42,   117,    42,    28,    29,   144,
       9,    10,    50,     7,    50,   124,   125,    16,    17,     1,
     129,    41,    42,    43,    44,    45,     9,    10,   140,   141,
      33,    51,     7,    16,    17,    34,    18,   146,    14,    21,
      18,   150,    24,    25,    26,    16,    17,    32,   160,   158,
     159,    18,    20,    21,    27,    12,   168,    12,    13,    14,
      15,    16,    17,    27,    47,   174,    18,   176,    35,    36,
      37,   180,    12,    13,    14,    15,    16,    17,    31,    18,
      30,    30,    49,    35,    36,    37,    41,    42,    43,    44,
      45,    12,    47,    39,     7,    47,    35,    36,    37,    38,
      30,    41,    42,    43,    44,    45,    30,    33,    47,    34,
      33,    41,    42,    43,    44,    45,    30,    41,    42,    43,
      44,    45,    30,    33,    33,    32,    23,    41,    42,    43,
      44,    45,    30,    41,    42,    43,    44,    45,    30,    19,
      25,    34,    48,    41,    42,    43,    44,    45,    41,    42,
      43,    44,    45,    34,    48,    15,    -1,   173,    34,    -1,
      41,    42,    43,    44,    45,    41,    42,    43,    44,    45,
      41,    42,    43,    44,    45,    41,    42,    43,    44,    45,
      51,    47,    41,    42,    43,    44,    45
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    53,    55,     0,    20,    47,    56,    47,    54,    21,
      60,    47,    57,    54,    22,    63,    64,     1,    18,    24,
      25,    26,    58,     1,    19,    61,    62,    65,    64,    54,
       7,    18,    59,    18,    59,    18,    59,    54,     8,    62,
      33,     3,     4,     5,     6,    11,    18,    42,    50,    75,
      76,     7,    30,    54,     7,    54,     7,    54,    14,    50,
      75,    75,    76,    75,    75,    76,    12,    13,    14,    15,
      16,    17,    41,    42,    43,    44,    45,    54,     9,    10,
      16,    17,    54,    75,    18,    75,    76,    28,    29,    75,
      30,    51,    51,    75,    75,    75,    75,    75,    75,    75,
      75,    75,    75,    75,    76,    76,    76,    76,    54,    54,
      54,    30,    30,    75,    75,    75,    34,    30,    30,    32,
      75,    27,    66,    30,    12,    31,    27,    54,    54,    12,
      18,    35,    36,    37,    38,    68,    69,    70,    71,    54,
       7,    33,    33,    33,    33,    69,    23,    69,    39,    73,
      75,    75,    32,    19,    76,    54,    74,    54,    34,    34,
      30,    34,    48,    54,    54,    75,    72,    55,    30,    48,
      67,    68,    75,    55,    49,    68,    34,    67,    54,    54,
      49,    54
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    52,    53,    54,    54,    55,    55,    56,    56,    57,
      57,    58,    58,    58,    58,    58,    58,    58,    58,    58,
      59,    59,    60,    61,    61,    62,    62,    62,    63,    63,
      65,    66,    64,    67,    67,    68,    68,    68,    68,    69,
      69,    69,    70,    70,    72,    71,    74,    73,    75,    75,
      75,    75,    75,    75,    75,    75,    75,    75,    76,    76,
      76,    76,    76,    76,    76,    76,    76,    76,    76,    76,
      76,    76
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     4,     1,     2,     0,     2,     0,     3,     0,
       2,     3,     3,     3,     5,     5,     5,     4,     4,     2,
       1,     3,     3,     1,     2,    12,    10,     2,     1,     2,
       0,     0,    14,     1,     2,     9,     5,     5,     4,     2,
       2,     0,     1,     2,     0,    10,     0,     7,     1,     1,
       1,     3,     3,     3,     3,     3,     3,     2,     1,     1,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       2,     3
};


#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)
#define YYEMPTY         (-2)
#define YYEOF           0

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                  \
do                                                              \
  if (yychar == YYEMPTY)                                        \
    {                                                           \
      yychar = (Token);                                         \
      yylval = (Value);                                         \
      YYPOPSTACK (yylen);                                       \
      yystate = *yyssp;                                         \
      goto yybackup;                                            \
    }                                                           \
  else                                                          \
    {                                                           \
      yyerror (YY_("syntax error: cannot back up")); \
      YYERROR;                                                  \
    }                                                           \
while (0)

/* Error token number */
#define YYTERROR        1
#define YYERRCODE       256



/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)                        \
do {                                            \
  if (yydebug)                                  \
    YYFPRINTF Args;                             \
} while (0)

/* This macro is provided for backward compatibility. */
#ifndef YY_LOCATION_PRINT
# define YY_LOCATION_PRINT(File, Loc) ((void) 0)
#endif


# define YY_SYMBOL_PRINT(Title, Type, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Type, Value); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*----------------------------------------.
| Print this symbol's value on YYOUTPUT.  |
`----------------------------------------*/

static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
{
  FILE *yyo = yyoutput;
  YYUSE (yyo);
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# endif
  YYUSE (yytype);
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyoutput, "%s %s (",
             yytype < YYNTOKENS ? "token" : "nterm", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yytype_int16 *yybottom, yytype_int16 *yytop)
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)                            \
do {                                                            \
  if (yydebug)                                                  \
    yy_stack_print ((Bottom), (Top));                           \
} while (0)


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

static void
yy_reduce_print (yytype_int16 *yyssp, YYSTYPE *yyvsp, int yyrule)
{
  unsigned long int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       yystos[yyssp[yyi + 1 - yynrhs]],
                       &(yyvsp[(yyi + 1) - (yynrhs)])
                                              );
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print (yyssp, yyvsp, Rule); \
} while (0)

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args)
# define YY_SYMBOL_PRINT(Title, Type, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
#endif /* !YYDEBUG */


/* YYINITDEPTH -- initial size of the parser's stacks.  */
#ifndef YYINITDEPTH
# define YYINITDEPTH 200
#endif

/* YYMAXDEPTH -- maximum size the stacks can grow to (effective only
   if the built-in stack extension method is used).

   Do not make this value too large; the results are undefined if
   YYSTACK_ALLOC_MAXIMUM < YYSTACK_BYTES (YYMAXDEPTH)
   evaluated with infinite-precision integer arithmetic.  */

#ifndef YYMAXDEPTH
# define YYMAXDEPTH 10000
#endif


#if YYERROR_VERBOSE

# ifndef yystrlen
#  if defined __GLIBC__ && defined _STRING_H
#   define yystrlen strlen
#  else
/* Return the length of YYSTR.  */
static YYSIZE_T
yystrlen (const char *yystr)
{
  YYSIZE_T yylen;
  for (yylen = 0; yystr[yylen]; yylen++)
    continue;
  return yylen;
}
#  endif
# endif

# ifndef yystpcpy
#  if defined __GLIBC__ && defined _STRING_H && defined _GNU_SOURCE
#   define yystpcpy stpcpy
#  else
/* Copy YYSRC to YYDEST, returning the address of the terminating '\0' in
   YYDEST.  */
static char *
yystpcpy (char *yydest, const char *yysrc)
{
  char *yyd = yydest;
  const char *yys = yysrc;

  while ((*yyd++ = *yys++) != '\0')
    continue;

  return yyd - 1;
}
#  endif
# endif

# ifndef yytnamerr
/* Copy to YYRES the contents of YYSTR after stripping away unnecessary
   quotes and backslashes, so that it's suitable for yyerror.  The
   heuristic is that double-quoting is unnecessary unless the string
   contains an apostrophe, a comma, or backslash (other than
   backslash-backslash).  YYSTR is taken from yytname.  If YYRES is
   null, do not copy; instead, return the length of what the result
   would have been.  */
static YYSIZE_T
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      YYSIZE_T yyn = 0;
      char const *yyp = yystr;

      for (;;)
        switch (*++yyp)
          {
          case '\'':
          case ',':
            goto do_not_strip_quotes;

          case '\\':
            if (*++yyp != '\\')
              goto do_not_strip_quotes;
            /* Fall through.  */
          default:
            if (yyres)
              yyres[yyn] = *yyp;
            yyn++;
            break;

          case '"':
            if (yyres)
              yyres[yyn] = '\0';
            return yyn;
          }
    do_not_strip_quotes: ;
    }

  if (! yyres)
    return yystrlen (yystr);

  return yystpcpy (yyres, yystr) - yyres;
}
# endif

/* Copy into *YYMSG, which is of size *YYMSG_ALLOC, an error message
   about the unexpected token YYTOKEN for the state stack whose top is
   YYSSP.

   Return 0 if *YYMSG was successfully written.  Return 1 if *YYMSG is
   not large enough to hold the message.  In that case, also set
   *YYMSG_ALLOC to the required number of bytes.  Return 2 if the
   required number of bytes is too large to store.  */
static int
yysyntax_error (YYSIZE_T *yymsg_alloc, char **yymsg,
                yytype_int16 *yyssp, int yytoken)
{
  YYSIZE_T yysize0 = yytnamerr (YY_NULLPTR, yytname[yytoken]);
  YYSIZE_T yysize = yysize0;
  enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULLPTR;
  /* Arguments of yyformat. */
  char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
  /* Number of reported tokens (one for the "unexpected", one per
     "expected"). */
  int yycount = 0;

  /* There are many possibilities here to consider:
     - If this state is a consistent state with a default action, then
       the only way this function was invoked is if the default action
       is an error action.  In that case, don't check for expected
       tokens because there are none.
     - The only way there can be no lookahead present (in yychar) is if
       this state is a consistent state with a default action.  Thus,
       detecting the absence of a lookahead is sufficient to determine
       that there is no unexpected or expected token to report.  In that
       case, just report a simple "syntax error".
     - Don't assume there isn't a lookahead just because this state is a
       consistent state with a default action.  There might have been a
       previous inconsistent state, consistent state with a non-default
       action, or user semantic action that manipulated yychar.
     - Of course, the expected token list depends on states to have
       correct lookahead information, and it depends on the parser not
       to perform extra reductions after fetching a lookahead from the
       scanner and before detecting a syntax error.  Thus, state merging
       (from LALR or IELR) and default reductions corrupt the expected
       token list.  However, the list is correct for canonical LR with
       one exception: it will still contain any token that will not be
       accepted due to an error action in a later state.
  */
  if (yytoken != YYEMPTY)
    {
      int yyn = yypact[*yyssp];
      yyarg[yycount++] = yytname[yytoken];
      if (!yypact_value_is_default (yyn))
        {
          /* Start YYX at -YYN if negative to avoid negative indexes in
             YYCHECK.  In other words, skip the first -YYN actions for
             this state because they are default actions.  */
          int yyxbegin = yyn < 0 ? -yyn : 0;
          /* Stay within bounds of both yycheck and yytname.  */
          int yychecklim = YYLAST - yyn + 1;
          int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
          int yyx;

          for (yyx = yyxbegin; yyx < yyxend; ++yyx)
            if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR
                && !yytable_value_is_error (yytable[yyx + yyn]))
              {
                if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
                  {
                    yycount = 1;
                    yysize = yysize0;
                    break;
                  }
                yyarg[yycount++] = yytname[yyx];
                {
                  YYSIZE_T yysize1 = yysize + yytnamerr (YY_NULLPTR, yytname[yyx]);
                  if (! (yysize <= yysize1
                         && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
                    return 2;
                  yysize = yysize1;
                }
              }
        }
    }

  switch (yycount)
    {
# define YYCASE_(N, S)                      \
      case N:                               \
        yyformat = S;                       \
      break
      YYCASE_(0, YY_("syntax error"));
      YYCASE_(1, YY_("syntax error, unexpected %s"));
      YYCASE_(2, YY_("syntax error, unexpected %s, expecting %s"));
      YYCASE_(3, YY_("syntax error, unexpected %s, expecting %s or %s"));
      YYCASE_(4, YY_("syntax error, unexpected %s, expecting %s or %s or %s"));
      YYCASE_(5, YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s"));
# undef YYCASE_
    }

  {
    YYSIZE_T yysize1 = yysize + yystrlen (yyformat);
    if (! (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
      return 2;
    yysize = yysize1;
  }

  if (*yymsg_alloc < yysize)
    {
      *yymsg_alloc = 2 * yysize;
      if (! (yysize <= *yymsg_alloc
             && *yymsg_alloc <= YYSTACK_ALLOC_MAXIMUM))
        *yymsg_alloc = YYSTACK_ALLOC_MAXIMUM;
      return 1;
    }

  /* Avoid sprintf, as that infringes on the user's name space.
     Don't have undefined behavior even if the translation
     produced a string with the wrong number of "%s"s.  */
  {
    char *yyp = *yymsg;
    int yyi = 0;
    while ((*yyp = *yyformat) != '\0')
      if (*yyp == '%' && yyformat[1] == 's' && yyi < yycount)
        {
          yyp += yytnamerr (yyp, yyarg[yyi++]);
          yyformat += 2;
        }
      else
        {
          yyp++;
          yyformat++;
        }
  }
  return 0;
}
#endif /* YYERROR_VERBOSE */

/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
{
  YYUSE (yyvaluep);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YYUSE (yytype);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}




/* The lookahead symbol.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;
/* Number of syntax errors so far.  */
int yynerrs;


/*----------.
| yyparse.  |
`----------*/

int
yyparse (void)
{
    int yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       'yyss': related to states.
       'yyvs': related to semantic values.

       Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* The state stack.  */
    yytype_int16 yyssa[YYINITDEPTH];
    yytype_int16 *yyss;
    yytype_int16 *yyssp;

    /* The semantic value stack.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs;
    YYSTYPE *yyvsp;

    YYSIZE_T yystacksize;

  int yyn;
  int yyresult;
  /* Lookahead token as an internal (translated) token number.  */
  int yytoken = 0;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;

#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
#endif

#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  yyssp = yyss = yyssa;
  yyvsp = yyvs = yyvsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */
  goto yysetstate;

/*------------------------------------------------------------.
| yynewstate -- Push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
 yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;

 yysetstate:
  *yyssp = yystate;

  if (yyss + yystacksize - 1 <= yyssp)
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYSIZE_T yysize = yyssp - yyss + 1;

#ifdef yyoverflow
      {
        /* Give user a chance to reallocate the stack.  Use copies of
           these so that the &'s don't force the real ones into
           memory.  */
        YYSTYPE *yyvs1 = yyvs;
        yytype_int16 *yyss1 = yyss;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * sizeof (*yyssp),
                    &yyvs1, yysize * sizeof (*yyvsp),
                    &yystacksize);

        yyss = yyss1;
        yyvs = yyvs1;
      }
#else /* no yyoverflow */
# ifndef YYSTACK_RELOCATE
      goto yyexhaustedlab;
# else
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
        goto yyexhaustedlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yytype_int16 *yyss1 = yyss;
        union yyalloc *yyptr =
          (union yyalloc *) YYSTACK_ALLOC (YYSTACK_BYTES (yystacksize));
        if (! yyptr)
          goto yyexhaustedlab;
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
#  undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif
#endif /* no yyoverflow */

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

      YYDPRINTF ((stderr, "Stack size increased to %lu\n",
                  (unsigned long int) yystacksize));

      if (yyss + yystacksize - 1 <= yyssp)
        YYABORT;
    }

  YYDPRINTF ((stderr, "Entering state %d\n", yystate));

  if (yystate == YYFINAL)
    YYACCEPT;

  goto yybackup;

/*-----------.
| yybackup.  |
`-----------*/
yybackup:

  /* Do appropriate processing given the current state.  Read a
     lookahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to lookahead token.  */
  yyn = yypact[yystate];
  if (yypact_value_is_default (yyn))
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid lookahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = yylex ();
    }

  if (yychar <= YYEOF)
    {
      yychar = yytoken = YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else
    {
      yytoken = YYTRANSLATE (yychar);
      YY_SYMBOL_PRINT ("Next token is", yytoken, &yylval, &yylloc);
    }

  /* If the proper action on seeing token YYTOKEN is to reduce or to
     detect an error, take that action.  */
  yyn += yytoken;
  if (yyn < 0 || YYLAST < yyn || yycheck[yyn] != yytoken)
    goto yydefault;
  yyn = yytable[yyn];
  if (yyn <= 0)
    {
      if (yytable_value_is_error (yyn))
        goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the lookahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);

  /* Discard the shifted token.  */
  yychar = YYEMPTY;

  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

  goto yynewstate;


/*-----------------------------------------------------------.
| yydefault -- do the default action for the current state.  |
`-----------------------------------------------------------*/
yydefault:
  yyn = yydefact[yystate];
  if (yyn == 0)
    goto yyerrlab;
  goto yyreduce;


/*-----------------------------.
| yyreduce -- Do a reduction.  |
`-----------------------------*/
yyreduce:
  /* yyn is the number of a rule to reduce with.  */
  yylen = yyr2[yyn];

  /* If YYLEN is nonzero, implement the default value of the action:
     '$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
        case 2:
#line 92 "expresiones.y" /* yacc.c:1646  */
    {;}
#line 1427 "expresiones.c" /* yacc.c:1646  */
    break;

  case 3:
#line 95 "expresiones.y" /* yacc.c:1646  */
    {;}
#line 1433 "expresiones.c" /* yacc.c:1646  */
    break;

  case 4:
#line 96 "expresiones.y" /* yacc.c:1646  */
    {;}
#line 1439 "expresiones.c" /* yacc.c:1646  */
    break;

  case 6:
#line 100 "expresiones.y" /* yacc.c:1646  */
    {;}
#line 1445 "expresiones.c" /* yacc.c:1646  */
    break;

  case 7:
#line 103 "expresiones.y" /* yacc.c:1646  */
    {;}
#line 1451 "expresiones.c" /* yacc.c:1646  */
    break;

  case 8:
#line 104 "expresiones.y" /* yacc.c:1646  */
    {;}
#line 1457 "expresiones.c" /* yacc.c:1646  */
    break;

  case 10:
#line 108 "expresiones.y" /* yacc.c:1646  */
    {;}
#line 1463 "expresiones.c" /* yacc.c:1646  */
    break;

  case 11:
#line 111 "expresiones.y" /* yacc.c:1646  */
    {				
								contenedorr.tipoSecuencias((tipo_aux), 0);
								 tipo_aux = 0;	 
									 
									 }
#line 1473 "expresiones.c" /* yacc.c:1646  */
    break;

  case 12:
#line 117 "expresiones.y" /* yacc.c:1646  */
    { contenedorr.tipoSecuencias((tipo_aux), 1);
									 tipo_aux = 0;}
#line 1480 "expresiones.c" /* yacc.c:1646  */
    break;

  case 13:
#line 123 "expresiones.y" /* yacc.c:1646  */
    {  contenedorr.tipoSecuencias((tipo_aux), 2);
       												 tipo_aux = 0;}
#line 1487 "expresiones.c" /* yacc.c:1646  */
    break;

  case 14:
#line 128 "expresiones.y" /* yacc.c:1646  */
    {if(errorSemantico){cout<<"Error semántico línea: "<< n_lineas << endl;}
       									 else if((yyvsp[-1].c_expresionesion).esReal){
       									 	cout << "Error semántico línea: " << n_lineas << " Valor real a entero" <<endl;
       									 }
									 else{
       									 tipo_dato aux;
										 strcpy(aux.identificador, (yyvsp[-3].c_cadena));
										 aux.tipo = 0;
										 aux.valor.valor_entero = (yyvsp[-1].c_expresionesion).valor;								 
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
#line 1515 "expresiones.c" /* yacc.c:1646  */
    break;

  case 15:
#line 153 "expresiones.y" /* yacc.c:1646  */
    {if(errorSemantico){cout<<"Error semántico línea: "<< n_lineas << endl;}
       									 else if(!(yyvsp[-1].c_expresionesion).esReal){
       									 	cout << "Error semántico línea: " << n_lineas << " Valor entero a un real" << endl;
       									 }
									 else{
       									 tipo_dato aux;
									 strcpy(aux.identificador, (yyvsp[-3].c_cadena));
									 aux.tipo = 1;
									 aux.valor.valor_real = (yyvsp[-1].c_expresionesion).valor;								 
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
#line 1543 "expresiones.c" /* yacc.c:1646  */
    break;

  case 16:
#line 179 "expresiones.y" /* yacc.c:1646  */
    {if(errorSemantico){}
									else{
       									 tipo_dato aux;
									 strcpy(aux.identificador, (yyvsp[-3].c_cadena));
									 aux.tipo = 2;
									 if((yyvsp[-1].c_log)){
									 	aux.valor.valor_bool = true;
									 }else {
									 	aux.valor.valor_bool = false;
									 }
									 contenedorr.insertar(aux);
									 }
									 }
#line 1561 "expresiones.c" /* yacc.c:1646  */
    break;

  case 17:
#line 193 "expresiones.y" /* yacc.c:1646  */
    {tipo_dato aux;
									 if(contenedorr.buscar((yyvsp[-3].c_cadena), aux)){
									 	switch(aux.tipo){
									 		case 0:
									 			if((yyvsp[-1].c_expresionesion).esReal){
       									 				cout << "Error semántico línea: " << n_lineas << "  Valor real a entero" << endl;
       												}else{
									 				aux.valor.valor_entero = (yyvsp[-1].c_expresionesion).valor;
									 			}
									 			break;
									 		case 1:
									 			if(!(yyvsp[-1].c_expresionesion).esReal){
       									 				cout << "Error semántico línea: " << n_lineas << " Valor entero a real." << endl;
       												}else{
									 				aux.valor.valor_real = (yyvsp[-1].c_expresionesion).valor;
									 			}
									 			break;
									 		default:
									 		break;
									 	}
									 	contenedorr.insertar(aux);
									 }
									 }
#line 1589 "expresiones.c" /* yacc.c:1646  */
    break;

  case 18:
#line 217 "expresiones.y" /* yacc.c:1646  */
    {tipo_dato aux;
       									 if(contenedorr.buscar((yyvsp[-3].c_cadena), aux)){
       									 	if(aux.tipo == 2){
       									 		if((yyvsp[-1].c_log)){
												aux.valor.valor_bool = true;
											}else {
												aux.valor.valor_bool = false;
											}
       									 	}
       									 	contenedorr.insertar(aux);
       									 }
       									 }
#line 1606 "expresiones.c" /* yacc.c:1646  */
    break;

  case 19:
#line 230 "expresiones.y" /* yacc.c:1646  */
    {yyerrok; errorSemantico=false;}
#line 1612 "expresiones.c" /* yacc.c:1646  */
    break;

  case 20:
#line 233 "expresiones.y" /* yacc.c:1646  */
    { tipo_dato aux;
						 strcpy(aux.identificador, (yyvsp[0].c_cadena));
						 tipo_aux++;
						 if(contenedorr.buscar((yyvsp[0].c_cadena), aux)){
						 	cout << "Error semántico línea: " << n_lineas  << endl;
						 }
						 contenedorr.insertar(aux);}
#line 1624 "expresiones.c" /* yacc.c:1646  */
    break;

  case 21:
#line 241 "expresiones.y" /* yacc.c:1646  */
    {
       						 tipo_dato aux;
						 strcpy(aux.identificador, (yyvsp[0].c_cadena));
						 tipo_aux++;
						 if(contenedorr.buscar((yyvsp[0].c_cadena), aux)){
						 	cout << "Error semántico línea: " << n_lineas  << endl;
						 }
						 contenedorr.insertar(aux);}
#line 1637 "expresiones.c" /* yacc.c:1646  */
    break;

  case 22:
#line 251 "expresiones.y" /* yacc.c:1646  */
    {;}
#line 1643 "expresiones.c" /* yacc.c:1646  */
    break;

  case 23:
#line 254 "expresiones.y" /* yacc.c:1646  */
    {;}
#line 1649 "expresiones.c" /* yacc.c:1646  */
    break;

  case 24:
#line 255 "expresiones.y" /* yacc.c:1646  */
    {;}
#line 1655 "expresiones.c" /* yacc.c:1646  */
    break;

  case 25:
#line 258 "expresiones.y" /* yacc.c:1646  */
    {tipo_dato aux;
											 strcpy(aux.identificador, (yyvsp[-11].c_cadena));
											 if(contenedorr.buscar((yyvsp[-11].c_cadena), aux)){
											 	cout << "Error semántico línea: " << n_lineas <<  endl;
											 }else{
											 
											 aux.tipo = 3;
											 aux.valor.valor_mueble_rect.alto = (yyvsp[-6].c_expresionesion).valor;
											 aux.valor.valor_mueble_rect.ancho = (yyvsp[-4].c_expresionesion).valor;
											 aux.valor.valor_mueble_rect.color = contenedorr.colorANumero((yyvsp[-2].c_cadena));
											 contenedorr.insertar(aux);}
											 
											 }
#line 1673 "expresiones.c" /* yacc.c:1646  */
    break;

  case 26:
#line 273 "expresiones.y" /* yacc.c:1646  */
    {
                                                                      tipo_dato aux;
                                                                      strcpy(aux.identificador, (yyvsp[-9].c_cadena));
                                                                      if (contenedorr.buscar((yyvsp[-9].c_cadena), aux)) {
                                                                             cout << "Error semántico línea: " << n_lineas  << endl;
                                                                      } else {
                                                                             
                                                                             aux.tipo = 4; 
                                                                             aux.valor.valor_mueble_circ.radio = (yyvsp[-4].c_expresionesion).valor;
                                                                             aux.valor.valor_mueble_circ.color = contenedorr.colorANumero((yyvsp[-2].c_cadena));
                                                                             contenedorr.insertar(aux);
                                                                            
                                                                      }
                                                                      }
#line 1692 "expresiones.c" /* yacc.c:1646  */
    break;

  case 27:
#line 287 "expresiones.y" /* yacc.c:1646  */
    {
  yyerrok;
  errorSemantico = false;
  }
#line 1701 "expresiones.c" /* yacc.c:1646  */
    break;

  case 28:
#line 293 "expresiones.y" /* yacc.c:1646  */
    {;}
#line 1707 "expresiones.c" /* yacc.c:1646  */
    break;

  case 29:
#line 294 "expresiones.y" /* yacc.c:1646  */
    { ;}
#line 1713 "expresiones.c" /* yacc.c:1646  */
    break;

  case 30:
#line 297 "expresiones.y" /* yacc.c:1646  */
    {salida << "\t// Nuevo habitacion" << endl;}
#line 1719 "expresiones.c" /* yacc.c:1646  */
    break;

  case 31:
#line 298 "expresiones.y" /* yacc.c:1646  */
    {salida << "\tnuevaHabitacionAmu("<< (yyvsp[0].c_cadena) << ","<< (yyvsp[-4].c_expresionesion).valor << ","<< (yyvsp[-2].c_expresionesion).valor<<");"  << endl;}
#line 1725 "expresiones.c" /* yacc.c:1646  */
    break;

  case 32:
#line 298 "expresiones.y" /* yacc.c:1646  */
    { salida << endl;}
#line 1731 "expresiones.c" /* yacc.c:1646  */
    break;

  case 33:
#line 301 "expresiones.y" /* yacc.c:1646  */
    {;}
#line 1737 "expresiones.c" /* yacc.c:1646  */
    break;

  case 34:
#line 303 "expresiones.y" /* yacc.c:1646  */
    {;}
#line 1743 "expresiones.c" /* yacc.c:1646  */
    break;

  case 35:
#line 306 "expresiones.y" /* yacc.c:1646  */
    {if(!condicionn || ejecutarCondicion){ 
												tipo_dato aux;
												tipo_cadena color;
												if(contenedorr.buscar((yyvsp[-6].c_cadena), aux)){
													
													
													if(aux.tipo == 3){
													contenedorr.numeroAColor(aux.valor.valor_mueble_rect.color, color);
													salida << "\trectanguloAmu(" << (int)(yyvsp[-4].c_expresionesion).valor << ", " << (int)(yyvsp[-2].c_expresionesion).valor << ", " << aux.valor.valor_mueble_rect.alto << ", " << aux.valor.valor_mueble_rect.ancho << ", " << color << ");" << endl;
													}else{
													contenedorr.numeroAColor(aux.valor.valor_mueble_circ.color, color);
													salida << "\tcirculoAmu(" << (int)(yyvsp[-4].c_expresionesion).valor << ", " << (int)(yyvsp[-2].c_expresionesion).valor << ", " << aux.valor.valor_mueble_circ.radio << ", " << color << ");" << endl;
													
													}
												}
												}
											   }
#line 1765 "expresiones.c" /* yacc.c:1646  */
    break;

  case 36:
#line 325 "expresiones.y" /* yacc.c:1646  */
    {if(!condicionn || ejecutarCondicion){
       												salida << "\tpausaAmu(" << (yyvsp[-2].c_expresionesion).valor << ");" << endl;
       											}
       											}
#line 1774 "expresiones.c" /* yacc.c:1646  */
    break;

  case 37:
#line 331 "expresiones.y" /* yacc.c:1646  */
    {if(!condicionn || ejecutarCondicion){
       												int longitud = strlen((yyvsp[-2].c_cadena));
       												salida << "\t// ";
       												for(int i = 1; i < (longitud - 1); i++){
       													salida << (yyvsp[-2].c_cadena)[i];}		
       												salida << endl; 	}
       											}
#line 1786 "expresiones.c" /* yacc.c:1646  */
    break;

  case 38:
#line 339 "expresiones.y" /* yacc.c:1646  */
    {tipo_dato aux;
											 if(contenedorr.buscar((yyvsp[-3].c_cadena), aux)){
											 	switch(aux.tipo){
											 		case 0:											 		
									 					aux.valor.valor_entero = (yyvsp[-1].c_expresionesion).valor;									 	
											 			break;
											 		case 1:											 			
									 						aux.valor.valor_real = (yyvsp[-1].c_expresionesion).valor;									 					
											 			break;
											 		default:
											 		break;
											 	}
											 	contenedorr.insertar(aux);
											 }
											 }
#line 1806 "expresiones.c" /* yacc.c:1646  */
    break;

  case 39:
#line 357 "expresiones.y" /* yacc.c:1646  */
    {;}
#line 1812 "expresiones.c" /* yacc.c:1646  */
    break;

  case 40:
#line 358 "expresiones.y" /* yacc.c:1646  */
    {;}
#line 1818 "expresiones.c" /* yacc.c:1646  */
    break;

  case 41:
#line 359 "expresiones.y" /* yacc.c:1646  */
    {;}
#line 1824 "expresiones.c" /* yacc.c:1646  */
    break;

  case 42:
#line 363 "expresiones.y" /* yacc.c:1646  */
    {condicionn = false;}
#line 1830 "expresiones.c" /* yacc.c:1646  */
    break;

  case 43:
#line 364 "expresiones.y" /* yacc.c:1646  */
    {condicionn = false;}
#line 1836 "expresiones.c" /* yacc.c:1646  */
    break;

  case 44:
#line 368 "expresiones.y" /* yacc.c:1646  */
    {condicionn = true; ejecutarCondicion = (yyvsp[-1].c_log);}
#line 1842 "expresiones.c" /* yacc.c:1646  */
    break;

  case 45:
#line 368 "expresiones.y" /* yacc.c:1646  */
    {;}
#line 1848 "expresiones.c" /* yacc.c:1646  */
    break;

  case 46:
#line 371 "expresiones.y" /* yacc.c:1646  */
    {ejecutarCondicion = !ejecutarCondicion;}
#line 1854 "expresiones.c" /* yacc.c:1646  */
    break;

  case 47:
#line 371 "expresiones.y" /* yacc.c:1646  */
    {;}
#line 1860 "expresiones.c" /* yacc.c:1646  */
    break;

  case 48:
#line 375 "expresiones.y" /* yacc.c:1646  */
    {(yyval.c_expresionesion).esReal=false;(yyval.c_expresionesion).valor=(yyvsp[0].c_entero);}
#line 1866 "expresiones.c" /* yacc.c:1646  */
    break;

  case 49:
#line 377 "expresiones.y" /* yacc.c:1646  */
    {(yyval.c_expresionesion).esReal=true;(yyval.c_expresionesion).valor=(yyvsp[0].c_real);}
#line 1872 "expresiones.c" /* yacc.c:1646  */
    break;

  case 50:
#line 379 "expresiones.y" /* yacc.c:1646  */
    {tipo_dato aux;
       				 strcpy(aux.identificador, (yyvsp[0].c_cadena));
       				 if(contenedorr.buscar((yyvsp[0].c_cadena), aux)){
       				 	if(aux.tipo == 0){(yyval.c_expresionesion).esReal = false;(yyval.c_expresionesion).valor = aux.valor.valor_entero;}
       				 	
       				 	else{if(aux.tipo == 1){(yyval.c_expresionesion).esReal = true; (yyval.c_expresionesion).valor = aux.valor.valor_real;}
       				 	
       				 	else{if(aux.tipo == 2){errorSemantico = true; cout<<"El tipo lógico no puede aparecer en la parte derecha ";}}
       				 	}
       				 }
			 	 else{errorSemantico = true; }
       				 }
#line 1889 "expresiones.c" /* yacc.c:1646  */
    break;

  case 51:
#line 393 "expresiones.y" /* yacc.c:1646  */
    {(yyval.c_expresionesion).esReal=(yyvsp[-1].c_expresionesion).esReal;(yyval.c_expresionesion).valor=(yyvsp[-1].c_expresionesion).valor;}
#line 1895 "expresiones.c" /* yacc.c:1646  */
    break;

  case 52:
#line 396 "expresiones.y" /* yacc.c:1646  */
    {(yyval.c_expresionesion).esReal=(yyvsp[-2].c_expresionesion).esReal||(yyvsp[0].c_expresionesion).esReal;
       
       				 if((yyval.c_expresionesion).esReal){(yyval.c_expresionesion).valor=(yyvsp[-2].c_expresionesion).valor+(yyvsp[0].c_expresionesion).valor;} 
       				 else{(yyval.c_expresionesion).valor=int((yyvsp[-2].c_expresionesion).valor)+int((yyvsp[0].c_expresionesion).valor);}
       				 
			 	}
#line 1906 "expresiones.c" /* yacc.c:1646  */
    break;

  case 53:
#line 404 "expresiones.y" /* yacc.c:1646  */
    {(yyval.c_expresionesion).esReal=(yyvsp[-2].c_expresionesion).esReal||(yyvsp[0].c_expresionesion).esReal;
       
       				 if((yyval.c_expresionesion).esReal){(yyval.c_expresionesion).valor=(yyvsp[-2].c_expresionesion).valor-(yyvsp[0].c_expresionesion).valor;} 
       				 else{(yyval.c_expresionesion).valor=int((yyvsp[-2].c_expresionesion).valor)-int((yyvsp[0].c_expresionesion).valor);}
       				 
			 	}
#line 1917 "expresiones.c" /* yacc.c:1646  */
    break;

  case 54:
#line 412 "expresiones.y" /* yacc.c:1646  */
    {(yyval.c_expresionesion).esReal = (yyvsp[-2].c_expresionesion).esReal || (yyvsp[0].c_expresionesion).esReal;
       
       				 if ((yyval.c_expresionesion).esReal){(yyval.c_expresionesion).valor = (yyvsp[-2].c_expresionesion).valor * (yyvsp[0].c_expresionesion).valor;} 
       				 else{(yyval.c_expresionesion).valor = int((yyvsp[-2].c_expresionesion).valor) * int((yyvsp[0].c_expresionesion).valor);}
       				 
			 	}
#line 1928 "expresiones.c" /* yacc.c:1646  */
    break;

  case 55:
#line 419 "expresiones.y" /* yacc.c:1646  */
    {(yyval.c_expresionesion).esReal = true;
       
       				  if((yyvsp[0].c_expresionesion).valor == 0){errorSemantico = true;cout<<"Intento de división entre 0 - ";}
       				  
       				  else{{(yyval.c_expresionesion).valor = (yyvsp[-2].c_expresionesion).valor / (yyvsp[0].c_expresionesion).valor;} 
       				  
       				  }
       				 
			 	}
#line 1942 "expresiones.c" /* yacc.c:1646  */
    break;

  case 56:
#line 431 "expresiones.y" /* yacc.c:1646  */
    {(yyval.c_expresionesion).esReal = (yyvsp[-2].c_expresionesion).esReal || (yyvsp[0].c_expresionesion).esReal;
       
       				  if((yyval.c_expresionesion).esReal || (yyvsp[0].c_expresionesion).valor == 0){errorSemantico = true;}
       				  
       				  if((yyvsp[0].c_expresionesion).valor == 0){cout<<"Intento de division entre 0 - ";}
       				  
       				  	else{if((yyval.c_expresionesion).esReal){cout<<"Se usa el operando % con un operando real - ";}
       				  	
       				  	     else{(yyval.c_expresionesion).valor=int((yyvsp[-2].c_expresionesion).valor)%int((yyvsp[0].c_expresionesion).valor);}
       				  	}
       				  	
       				  	     
                                }
#line 1960 "expresiones.c" /* yacc.c:1646  */
    break;

  case 57:
#line 446 "expresiones.y" /* yacc.c:1646  */
    {(yyval.c_expresionesion).esReal=(yyvsp[0].c_expresionesion).esReal;(yyval.c_expresionesion).valor= -(yyvsp[0].c_expresionesion).valor;}
#line 1966 "expresiones.c" /* yacc.c:1646  */
    break;

  case 58:
#line 450 "expresiones.y" /* yacc.c:1646  */
    {(yyval.c_log)=false;
													}
#line 1973 "expresiones.c" /* yacc.c:1646  */
    break;

  case 59:
#line 453 "expresiones.y" /* yacc.c:1646  */
    {(yyval.c_log)=true;
       						}
#line 1980 "expresiones.c" /* yacc.c:1646  */
    break;

  case 60:
#line 457 "expresiones.y" /* yacc.c:1646  */
    {(yyval.c_log)=(yyvsp[-2].c_expresionesion).valor>(yyvsp[0].c_expresionesion).valor;
       						}
#line 1987 "expresiones.c" /* yacc.c:1646  */
    break;

  case 61:
#line 460 "expresiones.y" /* yacc.c:1646  */
    {(yyval.c_log)=(yyvsp[-2].c_expresionesion).valor<(yyvsp[0].c_expresionesion).valor;
	   						}
#line 1994 "expresiones.c" /* yacc.c:1646  */
    break;

  case 62:
#line 463 "expresiones.y" /* yacc.c:1646  */
    {(yyval.c_log)=(yyvsp[-2].c_expresionesion).valor>=(yyvsp[0].c_expresionesion).valor;
       						}
#line 2001 "expresiones.c" /* yacc.c:1646  */
    break;

  case 63:
#line 467 "expresiones.y" /* yacc.c:1646  */
    {(yyval.c_log)=(yyvsp[-2].c_expresionesion).valor<=(yyvsp[0].c_expresionesion).valor;
       						}
#line 2008 "expresiones.c" /* yacc.c:1646  */
    break;

  case 64:
#line 471 "expresiones.y" /* yacc.c:1646  */
    {(yyval.c_log)=(yyvsp[-2].c_expresionesion).valor==(yyvsp[0].c_expresionesion).valor;
       						}
#line 2015 "expresiones.c" /* yacc.c:1646  */
    break;

  case 65:
#line 475 "expresiones.y" /* yacc.c:1646  */
    {(yyval.c_log)=(yyvsp[-2].c_expresionesion).valor!=(yyvsp[0].c_expresionesion).valor;
       						}
#line 2022 "expresiones.c" /* yacc.c:1646  */
    break;

  case 66:
#line 479 "expresiones.y" /* yacc.c:1646  */
    {(yyval.c_log)=(yyvsp[-2].c_log)==(yyvsp[0].c_log);
       						}
#line 2029 "expresiones.c" /* yacc.c:1646  */
    break;

  case 67:
#line 483 "expresiones.y" /* yacc.c:1646  */
    {(yyval.c_log)=(yyvsp[-2].c_log)!=(yyvsp[0].c_log);
       						}
#line 2036 "expresiones.c" /* yacc.c:1646  */
    break;

  case 68:
#line 487 "expresiones.y" /* yacc.c:1646  */
    {if((yyvsp[-2].c_log)==false 
       							&& (yyvsp[0].c_log)==false){(yyval.c_log)=false;
       							}
       				           else{(yyval.c_log)=true;
       				           }
       				        }
#line 2047 "expresiones.c" /* yacc.c:1646  */
    break;

  case 69:
#line 495 "expresiones.y" /* yacc.c:1646  */
    {if((yyvsp[-2].c_log)==true && (yyvsp[0].c_log)==true){(yyval.c_log)=true;
       						}
       					  else{(yyval.c_log)=false;
       					  }
       					}
#line 2057 "expresiones.c" /* yacc.c:1646  */
    break;

  case 70:
#line 502 "expresiones.y" /* yacc.c:1646  */
    {if((yyvsp[0].c_log)==false){(yyval.c_log)=true;
       						}
       					  
       					     else{(yyval.c_log)=false;
       					     }
       					}
#line 2068 "expresiones.c" /* yacc.c:1646  */
    break;

  case 71:
#line 510 "expresiones.y" /* yacc.c:1646  */
    {(yyval.c_log) = (yyvsp[-1].c_log);
       						}
#line 2075 "expresiones.c" /* yacc.c:1646  */
    break;


#line 2079 "expresiones.c" /* yacc.c:1646  */
      default: break;
    }
  /* User semantic actions sometimes alter yychar, and that requires
     that yytoken be updated with the new translation.  We take the
     approach of translating immediately before every use of yytoken.
     One alternative is translating here after every semantic action,
     but that translation would be missed if the semantic action invokes
     YYABORT, YYACCEPT, or YYERROR immediately after altering yychar or
     if it invokes YYBACKUP.  In the case of YYABORT or YYACCEPT, an
     incorrect destructor might then be invoked immediately.  In the
     case of YYERROR or YYBACKUP, subsequent parser actions might lead
     to an incorrect destructor call or verbose syntax error message
     before the lookahead is translated.  */
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;

  /* Now 'shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

  goto yynewstate;


/*--------------------------------------.
| yyerrlab -- here on detecting error.  |
`--------------------------------------*/
yyerrlab:
  /* Make sure we have latest lookahead translation.  See comments at
     user semantic actions for why this is necessary.  */
  yytoken = yychar == YYEMPTY ? YYEMPTY : YYTRANSLATE (yychar);

  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (YY_("syntax error"));
#else
# define YYSYNTAX_ERROR yysyntax_error (&yymsg_alloc, &yymsg, \
                                        yyssp, yytoken)
      {
        char const *yymsgp = YY_("syntax error");
        int yysyntax_error_status;
        yysyntax_error_status = YYSYNTAX_ERROR;
        if (yysyntax_error_status == 0)
          yymsgp = yymsg;
        else if (yysyntax_error_status == 1)
          {
            if (yymsg != yymsgbuf)
              YYSTACK_FREE (yymsg);
            yymsg = (char *) YYSTACK_ALLOC (yymsg_alloc);
            if (!yymsg)
              {
                yymsg = yymsgbuf;
                yymsg_alloc = sizeof yymsgbuf;
                yysyntax_error_status = 2;
              }
            else
              {
                yysyntax_error_status = YYSYNTAX_ERROR;
                yymsgp = yymsg;
              }
          }
        yyerror (yymsgp);
        if (yysyntax_error_status == 2)
          goto yyexhaustedlab;
      }
# undef YYSYNTAX_ERROR
#endif
    }



  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse lookahead token after an
         error, discard it.  */

      if (yychar <= YYEOF)
        {
          /* Return failure if at end of input.  */
          if (yychar == YYEOF)
            YYABORT;
        }
      else
        {
          yydestruct ("Error: discarding",
                      yytoken, &yylval);
          yychar = YYEMPTY;
        }
    }

  /* Else will try to reuse lookahead token after shifting the error
     token.  */
  goto yyerrlab1;


/*---------------------------------------------------.
| yyerrorlab -- error raised explicitly by YYERROR.  |
`---------------------------------------------------*/
yyerrorlab:

  /* Pacify compilers like GCC when the user code never invokes
     YYERROR and the label yyerrorlab therefore never appears in user
     code.  */
  if (/*CONSTCOND*/ 0)
     goto yyerrorlab;

  /* Do not reclaim the symbols of the rule whose action triggered
     this YYERROR.  */
  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);
  yystate = *yyssp;
  goto yyerrlab1;


/*-------------------------------------------------------------.
| yyerrlab1 -- common code for both syntax error and YYERROR.  |
`-------------------------------------------------------------*/
yyerrlab1:
  yyerrstatus = 3;      /* Each real token shifted decrements this.  */

  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
        {
          yyn += YYTERROR;
          if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYTERROR)
            {
              yyn = yytable[yyn];
              if (0 < yyn)
                break;
            }
        }

      /* Pop the current state because it cannot handle the error token.  */
      if (yyssp == yyss)
        YYABORT;


      yydestruct ("Error: popping",
                  yystos[yystate], yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", yystos[yyn], yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturn;

/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturn;

#if !defined yyoverflow || YYERROR_VERBOSE
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif

yyreturn:
  if (yychar != YYEMPTY)
    {
      /* Make sure we have latest lookahead translation.  See comments at
         user semantic actions for why this is necessary.  */
      yytoken = YYTRANSLATE (yychar);
      yydestruct ("Cleanup: discarding lookahead",
                  yytoken, &yylval);
    }
  /* Do not reclaim the symbols of the rule whose action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
                  yystos[*yyssp], yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif
#if YYERROR_VERBOSE
  if (yymsg != yymsgbuf)
    YYSTACK_FREE (yymsg);
#endif
  return yyresult;
}
#line 515 "expresiones.y" /* yacc.c:1906  */


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
