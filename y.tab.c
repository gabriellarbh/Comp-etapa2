/* original parser id follows */
/* yysccsid[] = "@(#)yaccpar	1.9 (Berkeley) 02/21/93" */
/* (use YYMAJOR/YYMINOR for ifdefs dependent on parser version) */

#define YYBYACC 1
#define YYMAJOR 1
#define YYMINOR 9
#define YYPATCH 20140715

#define YYEMPTY        (-1)
#define yyclearin      (yychar = YYEMPTY)
#define yyerrok        (yyerrflag = 0)
#define YYRECOVERING() (yyerrflag != 0)
#define YYENOMEM       (-2)
#define YYEOF          0
#define YYPREFIX "yy"

#define YYPURE 0

#line 2 "parser.y"
        #include <stdio.h>
        #include <stdlib.h>

        int getLineNumber();
        int yyerror();
        int yylex();
#line 28 "y.tab.c"

/* compatibility with bison */
#ifdef YYPARSE_PARAM
/* compatibility with FreeBSD */
# ifdef YYPARSE_PARAM_TYPE
#  define YYPARSE_DECL() yyparse(YYPARSE_PARAM_TYPE YYPARSE_PARAM)
# else
#  define YYPARSE_DECL() yyparse(void *YYPARSE_PARAM)
# endif
#else
# define YYPARSE_DECL() yyparse(void)
#endif

/* Parameters sent to lex. */
#ifdef YYLEX_PARAM
# define YYLEX_DECL() yylex(void *YYLEX_PARAM)
# define YYLEX yylex(YYLEX_PARAM)
#else
# define YYLEX_DECL() yylex(void)
# define YYLEX yylex()
#endif

/* Parameters sent to yyerror. */
#ifndef YYERROR_DECL
#define YYERROR_DECL() yyerror(const char *s)
#endif
#ifndef YYERROR_CALL
#define YYERROR_CALL(msg) yyerror(msg)
#endif

extern int YYPARSE_DECL();

#define KW_INT 257
#define KW_FLOAT 258
#define KW_BOOL 259
#define KW_CHAR 260
#define KW_IF 261
#define KW_THEN 262
#define KW_ELSE 263
#define KW_FOR 264
#define KW_READ 265
#define KW_RETURN 266
#define KW_PRINT 267
#define OPERATOR_LE 268
#define OPERATOR_GE 269
#define OPERATOR_EQ 270
#define OPERATOR_NE 271
#define OPERATOR_AND 272
#define OPERATOR_OR 273
#define TK_IDENTIFIER 274
#define LIT_INTEGER 275
#define LIT_FALSE 276
#define LIT_TRUE 277
#define LIT_CHAR 278
#define LIT_STRING 279
#define TOKEN_ERROR 280
#define TO 281
#define YYERRCODE 256
typedef short YYINT;
static const YYINT yylhs[] = {                           -1,
    0,    0,    0,    1,    1,    1,    2,    6,    6,    7,
    8,    8,    9,    9,    9,    9,    9,   10,   10,   10,
   10,   11,   11,   14,   14,   14,   14,   16,   16,   15,
   15,   15,   15,   15,   15,   15,   15,   15,   15,   15,
   15,   12,   12,   13,    9,    4,    4,    4,    4,    4,
    3,    3,    3,    3,    5,    5,
};
static const YYINT yylen[] = {                            2,
    3,    2,    0,    4,    7,    5,    6,    4,    2,    3,
    3,    2,    2,    2,    2,    1,    1,    2,    2,    1,
    1,    1,    3,    1,    1,    4,    4,    2,    0,    1,
    1,    1,    1,    1,    1,    1,    1,    1,    1,    1,
    1,    6,    8,    4,    9,    1,    1,    1,    1,    1,
    1,    1,    1,    1,    1,    2,
};
static const YYINT yydefred[] = {                         0,
   51,   52,   53,   54,    0,    0,    0,    0,    0,    2,
    0,    1,    0,    0,    0,   46,   47,   48,   49,   50,
    4,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    7,    0,    5,    8,    0,    0,    0,    0,    0,    0,
    0,   16,   17,   56,    0,    0,   14,    0,   24,   15,
    0,    0,   13,    0,   10,    0,    0,    0,    0,    0,
    0,   30,   31,   32,   33,   34,   35,   36,   37,   38,
   39,   40,   41,    0,   19,   18,   11,    0,    0,   44,
    0,    0,    0,   23,    0,    0,   26,   28,   27,    0,
    0,    0,    0,   43,    0,   45,
};
static const YYINT yydgoto[] = {                          5,
    6,    7,    8,   49,   33,   24,   31,   40,   41,   53,
   54,   42,   43,   51,   74,   83,
};
static const YYINT yysindex[] = {                      -190,
    0,    0,    0,    0,    0,  -51, -190, -263, -190,    0,
  -31,    0, -176, -247, -190,    0,    0,    0,    0,    0,
    0,  -63, -243,   -2,  -15,    4,  -73, -176, -190, -188,
    0, -176,    0,    0,   35,   46, -170, -194, -187,  -19,
   48,    0,    0,    0, -194, -181,    0,  -26,    0,    0,
   12, -187,    0, -187,    0, -188,   64,  -20,   67, -194,
 -194,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0, -194,    0,    0,    0, -153, -194,    0,
   17, -194,   70,    0, -188, -169,    0,    0,    0, -150,
 -194, -188,   73,    0, -188,    0,
};
static const YYINT yyrindex[] = {                       115,
    0,    0,    0,    0,    0,    0,  115,    0,  115,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,   57,   76,    0,    0,    0,    0,
    0,   59,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,  -41,    0,    0,
  -24,    2,    0,  -56,    0,   -4,    0,   -9,    0,    0,
   78,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,   78,    0,    0,    0,    0,    0,    0,    0,   61,
    0,    0,    0,    0,    0,    0,
};
static const YYINT yygindex[] = {                        16,
    0,    0,   -5,   -6,   90,   94,    0,   68,  -29,  -12,
  -33,    0,    0,  -45,    0,   43,
};
#define YYTABLESIZE 285
static const YYINT yytable[] = {                         25,
   25,   25,   20,   25,   50,   25,   21,    9,   15,   23,
   11,   57,   59,   61,   81,   82,   22,   25,   25,   61,
   25,   32,   10,   23,   12,   32,   13,   22,   84,   25,
   26,   25,   25,   25,   22,   25,   82,   25,   27,   75,
   79,   76,   28,   50,   50,   86,   50,   29,   50,   30,
   25,   25,   25,   68,   71,   90,   70,   93,   69,   14,
   21,   50,   94,   50,   60,   96,    1,    2,    3,    4,
   60,   72,   35,   73,   45,   36,   37,   38,   39,   48,
   16,   17,   18,   19,   20,   46,   48,   16,   17,   18,
   19,   52,   58,   16,   17,   18,   19,   20,   16,   17,
   18,   19,   20,   47,   78,   55,   56,   80,   85,   87,
   89,   91,   92,   95,    3,    6,    9,   55,   29,   42,
   12,   44,   34,   77,   88,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,   20,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,   25,    0,    0,    0,    0,   25,   25,   25,   25,
   25,   25,   25,   25,   25,   25,   25,   25,   22,   25,
    0,    0,    0,    0,    0,    0,    0,    0,    0,   22,
   22,   22,   22,   22,   22,    0,   22,    0,   25,   25,
   25,   25,   25,   25,   21,    0,    0,    0,    0,   50,
   50,   50,   50,   50,   50,    0,    0,    0,    0,   62,
   63,   64,   65,   66,   67,
};
static const YYINT yycheck[] = {                         41,
   42,   43,   59,   45,   38,   47,   13,   59,   40,   15,
  274,   45,   46,   40,   60,   61,   41,   59,   60,   40,
   62,   28,    7,   29,    9,   32,   58,  275,   74,   93,
  274,   41,   42,   43,   59,   45,   82,   47,   41,   52,
   61,   54,   58,   42,   43,   79,   45,   44,   47,  123,
   60,   93,   62,   42,   43,   85,   45,   91,   47,   91,
   59,   60,   92,   62,   91,   95,  257,  258,  259,  260,
   91,   60,  261,   62,   40,  264,  265,  266,  267,  274,
  275,  276,  277,  278,  279,   40,  274,  275,  276,  277,
  278,  279,  274,  275,  276,  277,  278,  279,  275,  276,
  277,  278,  279,  274,   41,  125,   59,   41,  262,   93,
   41,  281,  263,   41,    0,   59,   41,   59,   41,   59,
  125,   32,   29,   56,   82,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,  263,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,  263,   -1,   -1,   -1,   -1,  268,  269,  270,  271,
  272,  273,  274,  275,  276,  277,  278,  279,  263,  281,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,  274,
  275,  276,  277,  278,  279,   -1,  281,   -1,  268,  269,
  270,  271,  272,  273,  263,   -1,   -1,   -1,   -1,  268,
  269,  270,  271,  272,  273,   -1,   -1,   -1,   -1,  268,
  269,  270,  271,  272,  273,
};
#define YYFINAL 5
#ifndef YYDEBUG
#define YYDEBUG 0
#endif
#define YYMAXTOKEN 281
#define YYUNDFTOKEN 300
#define YYTRANSLATE(a) ((a) > YYMAXTOKEN ? YYUNDFTOKEN : (a))
#if YYDEBUG
static const char *const yyname[] = {

"end-of-file",0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,"'('","')'","'*'","'+'","','","'-'",0,"'/'",0,0,0,0,0,0,0,0,0,0,
"':'","';'","'<'","'='","'>'",0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,"'['",0,"']'",0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
"'{'",0,"'}'",0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,"KW_INT","KW_FLOAT","KW_BOOL","KW_CHAR",
"KW_IF","KW_THEN","KW_ELSE","KW_FOR","KW_READ","KW_RETURN","KW_PRINT",
"OPERATOR_LE","OPERATOR_GE","OPERATOR_EQ","OPERATOR_NE","OPERATOR_AND",
"OPERATOR_OR","TK_IDENTIFIER","LIT_INTEGER","LIT_FALSE","LIT_TRUE","LIT_CHAR",
"LIT_STRING","TOKEN_ERROR","\"TO\"",0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
"illegal-symbol",
};
static const char *const yyrule[] = {
"$accept : program",
"program : var_dec ';' program",
"program : function program",
"program :",
"var_dec : datatype TK_IDENTIFIER ':' literal",
"var_dec : datatype TK_IDENTIFIER '[' LIT_INTEGER ']' ':' literal_list",
"var_dec : datatype TK_IDENTIFIER '[' LIT_INTEGER ']'",
"function : datatype TK_IDENTIFIER '(' params ')' block",
"params : datatype TK_IDENTIFIER ',' params",
"params : datatype TK_IDENTIFIER",
"block : '{' commandlist '}'",
"commandlist : command ';' commandlist",
"commandlist : command ';'",
"command : KW_PRINT print_param_list",
"command : KW_READ TK_IDENTIFIER",
"command : KW_RETURN expr",
"command : ifelse",
"command : forloop",
"print_param_list : expr print_param_list",
"print_param_list : LIT_STRING print_param_list",
"print_param_list : expr",
"print_param_list : LIT_STRING",
"expr : value",
"expr : value operator value",
"value : literal",
"value : TK_IDENTIFIER",
"value : TK_IDENTIFIER '[' value ']'",
"value : TK_IDENTIFIER '(' value_list ')'",
"value_list : value value_list",
"value_list :",
"operator : OPERATOR_LE",
"operator : OPERATOR_GE",
"operator : OPERATOR_EQ",
"operator : OPERATOR_NE",
"operator : OPERATOR_AND",
"operator : OPERATOR_OR",
"operator : '*'",
"operator : '/'",
"operator : '-'",
"operator : '+'",
"operator : '<'",
"operator : '>'",
"ifelse : KW_IF '(' expr ')' KW_THEN command",
"ifelse : KW_IF '(' expr ')' KW_THEN command KW_ELSE command",
"forloop : KW_FOR '(' expr ')'",
"command : KW_FOR '(' TK_IDENTIFIER '=' expr \"TO\" expr ')' command",
"literal : LIT_INTEGER",
"literal : LIT_FALSE",
"literal : LIT_TRUE",
"literal : LIT_CHAR",
"literal : LIT_STRING",
"datatype : KW_INT",
"datatype : KW_FLOAT",
"datatype : KW_BOOL",
"datatype : KW_CHAR",
"literal_list : literal",
"literal_list : literal literal_list",

};
#endif

int      yydebug;
int      yynerrs;

int      yyerrflag;
int      yychar;
YYSTYPE  yyval;
YYSTYPE  yylval;

/* define the initial stack-sizes */
#ifdef YYSTACKSIZE
#undef YYMAXDEPTH
#define YYMAXDEPTH  YYSTACKSIZE
#else
#ifdef YYMAXDEPTH
#define YYSTACKSIZE YYMAXDEPTH
#else
#define YYSTACKSIZE 10000
#define YYMAXDEPTH  10000
#endif
#endif

#define YYINITSTACKSIZE 200

typedef struct {
    unsigned stacksize;
    YYINT    *s_base;
    YYINT    *s_mark;
    YYINT    *s_last;
    YYSTYPE  *l_base;
    YYSTYPE  *l_mark;
} YYSTACKDATA;
/* variables for the parser stack */
static YYSTACKDATA yystack;
#line 138 "parser.y"
int yyerror (char const *s) {
    fflush(stderr);
    fprintf(stderr,"ERROR: %s ---> Line: %d\n", s, getLineNumber());
    exit(3);

}
#line 337 "y.tab.c"

#if YYDEBUG
#include <stdio.h>		/* needed for printf */
#endif

#include <stdlib.h>	/* needed for malloc, etc */
#include <string.h>	/* needed for memset */

/* allocate initial stack or double stack size, up to YYMAXDEPTH */
static int yygrowstack(YYSTACKDATA *data)
{
    int i;
    unsigned newsize;
    YYINT *newss;
    YYSTYPE *newvs;

    if ((newsize = data->stacksize) == 0)
        newsize = YYINITSTACKSIZE;
    else if (newsize >= YYMAXDEPTH)
        return YYENOMEM;
    else if ((newsize *= 2) > YYMAXDEPTH)
        newsize = YYMAXDEPTH;

    i = (int) (data->s_mark - data->s_base);
    newss = (YYINT *)realloc(data->s_base, newsize * sizeof(*newss));
    if (newss == 0)
        return YYENOMEM;

    data->s_base = newss;
    data->s_mark = newss + i;

    newvs = (YYSTYPE *)realloc(data->l_base, newsize * sizeof(*newvs));
    if (newvs == 0)
        return YYENOMEM;

    data->l_base = newvs;
    data->l_mark = newvs + i;

    data->stacksize = newsize;
    data->s_last = data->s_base + newsize - 1;
    return 0;
}

#if YYPURE || defined(YY_NO_LEAKS)
static void yyfreestack(YYSTACKDATA *data)
{
    free(data->s_base);
    free(data->l_base);
    memset(data, 0, sizeof(*data));
}
#else
#define yyfreestack(data) /* nothing */
#endif

#define YYABORT  goto yyabort
#define YYREJECT goto yyabort
#define YYACCEPT goto yyaccept
#define YYERROR  goto yyerrlab

int
YYPARSE_DECL()
{
    int yym, yyn, yystate;
#if YYDEBUG
    const char *yys;

    if ((yys = getenv("YYDEBUG")) != 0)
    {
        yyn = *yys;
        if (yyn >= '0' && yyn <= '9')
            yydebug = yyn - '0';
    }
#endif

    yynerrs = 0;
    yyerrflag = 0;
    yychar = YYEMPTY;
    yystate = 0;

#if YYPURE
    memset(&yystack, 0, sizeof(yystack));
#endif

    if (yystack.s_base == NULL && yygrowstack(&yystack) == YYENOMEM) goto yyoverflow;
    yystack.s_mark = yystack.s_base;
    yystack.l_mark = yystack.l_base;
    yystate = 0;
    *yystack.s_mark = 0;

yyloop:
    if ((yyn = yydefred[yystate]) != 0) goto yyreduce;
    if (yychar < 0)
    {
        if ((yychar = YYLEX) < 0) yychar = YYEOF;
#if YYDEBUG
        if (yydebug)
        {
            yys = yyname[YYTRANSLATE(yychar)];
            printf("%sdebug: state %d, reading %d (%s)\n",
                    YYPREFIX, yystate, yychar, yys);
        }
#endif
    }
    if ((yyn = yysindex[yystate]) && (yyn += yychar) >= 0 &&
            yyn <= YYTABLESIZE && yycheck[yyn] == yychar)
    {
#if YYDEBUG
        if (yydebug)
            printf("%sdebug: state %d, shifting to state %d\n",
                    YYPREFIX, yystate, yytable[yyn]);
#endif
        if (yystack.s_mark >= yystack.s_last && yygrowstack(&yystack) == YYENOMEM)
        {
            goto yyoverflow;
        }
        yystate = yytable[yyn];
        *++yystack.s_mark = yytable[yyn];
        *++yystack.l_mark = yylval;
        yychar = YYEMPTY;
        if (yyerrflag > 0)  --yyerrflag;
        goto yyloop;
    }
    if ((yyn = yyrindex[yystate]) && (yyn += yychar) >= 0 &&
            yyn <= YYTABLESIZE && yycheck[yyn] == yychar)
    {
        yyn = yytable[yyn];
        goto yyreduce;
    }
    if (yyerrflag) goto yyinrecovery;

    YYERROR_CALL("syntax error");

    goto yyerrlab;

yyerrlab:
    ++yynerrs;

yyinrecovery:
    if (yyerrflag < 3)
    {
        yyerrflag = 3;
        for (;;)
        {
            if ((yyn = yysindex[*yystack.s_mark]) && (yyn += YYERRCODE) >= 0 &&
                    yyn <= YYTABLESIZE && yycheck[yyn] == YYERRCODE)
            {
#if YYDEBUG
                if (yydebug)
                    printf("%sdebug: state %d, error recovery shifting\
 to state %d\n", YYPREFIX, *yystack.s_mark, yytable[yyn]);
#endif
                if (yystack.s_mark >= yystack.s_last && yygrowstack(&yystack) == YYENOMEM)
                {
                    goto yyoverflow;
                }
                yystate = yytable[yyn];
                *++yystack.s_mark = yytable[yyn];
                *++yystack.l_mark = yylval;
                goto yyloop;
            }
            else
            {
#if YYDEBUG
                if (yydebug)
                    printf("%sdebug: error recovery discarding state %d\n",
                            YYPREFIX, *yystack.s_mark);
#endif
                if (yystack.s_mark <= yystack.s_base) goto yyabort;
                --yystack.s_mark;
                --yystack.l_mark;
            }
        }
    }
    else
    {
        if (yychar == YYEOF) goto yyabort;
#if YYDEBUG
        if (yydebug)
        {
            yys = yyname[YYTRANSLATE(yychar)];
            printf("%sdebug: state %d, error recovery discards token %d (%s)\n",
                    YYPREFIX, yystate, yychar, yys);
        }
#endif
        yychar = YYEMPTY;
        goto yyloop;
    }

yyreduce:
#if YYDEBUG
    if (yydebug)
        printf("%sdebug: state %d, reducing by rule %d (%s)\n",
                YYPREFIX, yystate, yyn, yyrule[yyn]);
#endif
    yym = yylen[yyn];
    if (yym)
        yyval = yystack.l_mark[1-yym];
    else
        memset(&yyval, 0, sizeof yyval);
    switch (yyn)
    {
    }
    yystack.s_mark -= yym;
    yystate = *yystack.s_mark;
    yystack.l_mark -= yym;
    yym = yylhs[yyn];
    if (yystate == 0 && yym == 0)
    {
#if YYDEBUG
        if (yydebug)
            printf("%sdebug: after reduction, shifting from state 0 to\
 state %d\n", YYPREFIX, YYFINAL);
#endif
        yystate = YYFINAL;
        *++yystack.s_mark = YYFINAL;
        *++yystack.l_mark = yyval;
        if (yychar < 0)
        {
            if ((yychar = YYLEX) < 0) yychar = YYEOF;
#if YYDEBUG
            if (yydebug)
            {
                yys = yyname[YYTRANSLATE(yychar)];
                printf("%sdebug: state %d, reading %d (%s)\n",
                        YYPREFIX, YYFINAL, yychar, yys);
            }
#endif
        }
        if (yychar == YYEOF) goto yyaccept;
        goto yyloop;
    }
    if ((yyn = yygindex[yym]) && (yyn += yystate) >= 0 &&
            yyn <= YYTABLESIZE && yycheck[yyn] == yystate)
        yystate = yytable[yyn];
    else
        yystate = yydgoto[yym];
#if YYDEBUG
    if (yydebug)
        printf("%sdebug: after reduction, shifting from state %d \
to state %d\n", YYPREFIX, *yystack.s_mark, yystate);
#endif
    if (yystack.s_mark >= yystack.s_last && yygrowstack(&yystack) == YYENOMEM)
    {
        goto yyoverflow;
    }
    *++yystack.s_mark = (YYINT) yystate;
    *++yystack.l_mark = yyval;
    goto yyloop;

yyoverflow:
    YYERROR_CALL("yacc stack overflow");

yyabort:
    yyfreestack(&yystack);
    return (1);

yyaccept:
    yyfreestack(&yystack);
    return (0);
}
