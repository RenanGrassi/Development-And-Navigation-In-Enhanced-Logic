%{
#include <stdio.h>

int yylex(void);
void yyerror(const char *s);
int yywrap(void);

int regs[26];  // Array to store values of variables a-z
int base;      // Base for number conversion (8 for octal, 10 for decimal)

%}

%start list

%token DIGIT LETTER

%left '|'
%left '&'
%left '+' '-'
%left '*' '/' '%'
%left UMINUS  /* Precedence for unary minus */

%%

list:    /* empty */
    |
    list stat '\n'
    |
    list error '\n' { yyerrok; }
    ;

stat:
    expr { printf("%d\n", $1); }
    |
    LETTER '=' expr { regs[$1] = $3; }
    ;

expr:
    '(' expr ')' { $$ = $2; }
    |
    expr '*' expr { $$ = $1 * $3; }
    |
    expr '/' expr { $$ = $1 / $3; }
    |
    expr '%' expr { $$ = $1 % $3; }
    |
    expr '+' expr { $$ = $1 + $3; }
    |
    expr '-' expr { $$ = $1 - $3; }
    |
    expr '&' expr { $$ = $1 & $3; }
    |
    expr '|' expr { $$ = $1 | $3; }
    |
    '-' expr %prec UMINUS { $$ = -$2; }
    |
    LETTER { $$ = regs[$1]; }
    |
    number
    ;

number:
    DIGIT { $$ = $1; base = ($1 == 0) ? 8 : 10; }
    |
    number DIGIT { $$ = base * $1 + $2; }
    ;

%%

int main()
{
    return yyparse();
}

void yyerror(const char *s)
{
    fprintf(stderr, "Error: %s\n", s);
}

int yywrap()
{
    return 1;
}
