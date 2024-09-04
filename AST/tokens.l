%{
#include <stdio.h>
#include <string.h>
#include "AST.h"
#include "yacc.tab.h"
int line_number = 1; // Contador de linhas

extern int yylineno;
void yyerror(const char *);
%}

/* Direciona o flex a ler apenas um arquivo de entrada */
%option noyywrap 

/* Definicoes Regulares */
ws          [ \t\n]+ 

/* Tipos primitivos de dados */
marioKart          marioKart
donkey             donkey
kong               kong
mario              mario
superMario         superMario
zelda              zelda
type               {marioKart}|{donkey}|{kong}|{mario}|{superMario}|{zelda}

/* Comandos e palavras reservadas */
fezALista         fezALista 
nao               nao
naoFez            naoFez
eAGreve           eAGreve
adiaarOTP         adiaarOTP
vamosLa           vamosLa
momentoOportuno   momentoOportuno  
muitoBem          muitoBem
temosUmImpasse    temosUmImpasse
chwazi            chwazi
marcos            marcos
veeeeja           veeeeja
vejaBem           vejaBem
diga              diga
masNaoEObvio      masNaoEObvio
masIssoEObvio     masIssoEObvio

eOVisto           eOVisto
penseBem          penseBem
struct_keyword     8886
pqEuPosso          pqEuPosso
naoEMagico        naoEMagico
reuniao14h         reuniao14h

nintendo           nintendo
switch             switch
wii                wii
bom_dia            bomdia
boa_tarde          boatarde

chamada            chamada
daniboy            daniboy


and                \&\&
or                 \|\|
logic_operator     ({and}|{or})
eq                 \=\=
ne                 \!\=
gt                 \>
ge                 \>\=
lt                 \<
le                 \<\=
relacional_op      ({eq}|{ne}|{gt}|{ge}|{lt}|{le})
sum                 \+
sub                 \-
mult                \*
div                 \/
mod                 \%
operation           {sum}|{sub}|{mult}|{div}|{mod}


digit       [0-9]
digits      {digit}+
letter      [a-zA-Z]
id          ({letter}({letter}|{digit})*)
number      ({digit}+)
pointer     [\*]
string      \"([^\"]|\\\")*\" 
identifier  (_|{letter})(_|{letter}|{digit})*


assign      \=
semicolon   \;

decimal     [-]?{digit}+[.]{digit}+ 

/* Comentários */
single_line_comment  "//[^\n]*"
multi_line_comment   "/\([^]|\+[^/])\+/"

quot            \"
single_quot     \'
literal_string   ({quot}.*{quot})
literal_char     {single_quot}.{single_quot}



/*ver oq foi alterado do int main no git para voltar*/
%%


{type}                { yylval.str = strdup(yytext); return TYPE; }

{fezALista}           { return IF; }
{nao}                 { return ELSE; }
{naoFez}              { return ELIF; }
{eAGreve}             { return WHILE; }
{adiaarOTP}           { return FOR; }
{momentoOportuno}     { return BREAK; }
{muitoBem}            { return CONTINUE; }
{temosUmImpasse}      { return SWITCH; }
{chwazi}              { return CASE; }
{marcos}              { return DEFAULT; }
{veeeeja}             { return PRINT; }
{vejaBem}             { return PRINTLN; }
{diga}                { return INPUT; }
{masNaoEObvio}        { return FUNCT; }
{masIssoEObvio}       { return FUNCTION_CALL; }
{boa_tarde}           { return INT_MAIN; }

{chamada}             { return RETURN; }
{digits}              { yylval.iValue = atoi(yytext); return DIGITS; }
{ws}                  { line_number += (*yytext == '\n'); }

{decimal}             { yylval.real = atof(yytext); return DECIMAL; }
{identifier}          { yylval.str = strdup(yytext); return IDENTIFIER; }
{literal_string}      { yylval.str = strdup(yytext); return LITERAL_STRING; }
{literal_char}        { yylval.caractere =  yytext[0]; return LITERAL_CHAR; }
{assign}              { return ASSIGN; }
{semicolon}           { return SEMICOLON; }
{operation}           { yylval.str = strdup(yytext); return OPERATION; }
{relacional_op}       { yylval.str = strdup(yytext); return RELACIONAL_OPERATORS; }
{logic_operator}      { yylval.str = strdup(yytext); return LOGIC_OPERATORS; }


{single_line_comment}    { /* Ignorar comentários de uma linha */ }
{multi_line_comment}     { /* Ignorar comentários de múltiplas linhas */ }



":"                  { return COLON; }
","                  { return COMMA; }
")"                  { return CLOSE_PARENTHESES; }
"("                  { return OPEN_PARENTHESES; }
"]"                  { return CLOSE_BRACKET; }
"["                  { return OPEN_BRACKET; }
"}"                  { return BLOCK_CLOSE; }
"{"                  { return BLOCK_OPEN; }

%%
