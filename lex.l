%{ 
    #include <stdio.h>
    #include <string.h>
    #include "translate.tab.h"
    int line_number = 1; // Contador de linhas
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


and                &&
or                 ||
logic_operator     ({and}|{or})
eq                 \=\=
ne                 \!\=
gt                 \>
ge                 \>\=
lt                 \<
le                 \<\=
relacional_op      ({eq}|{ne}|{gt}|{ge}|{lt}|{le})

digit       [0-9]
digits      {digit}+
letter      [a-zA-Z_]
id          ({letter}({letter}|{digit})*)
number      ({digit}+)
pointer     [\*]
string      \"([^\"]|\\\")*\" 
identifier         (_|{letter})(_|{letter}|{digit})*


decimal     [-]?{digit}+[.]{digit}+ 

/* Comentários */
single_line_comment  "//[^\n]*"
multi_line_comment   "/\([^]|\+[^/])\+/"


/*ver oq foi alterado do int main no git para voltar*/
%%


{type}                { return TYPE; }
{fezALista}           { return IF; }
{nao}                 { return ELSE; }
{naoFez}              { return ELIF; }
{eAGreve}             { return WHILE; }
{adiaarOTP}           { return FOR; }
{vamosLa}             { return GOTO; }
{momentoOportuno}     { return BREAK; }
{muitoBem}            { return CONTINUE; }
{temosUmImpasse}      { return SWITCH; }
{chwazi}              { return CASE; }
{marcos}              { return DEFAULT; }
{veeeeja}             { return PRINT; }
{vejaBem}             { return PRINTLN; }
{diga}                { return SCANF; }
{masNaoEObvio}        { return FUNCTION; }
{masIssoEObvio}       { return FUNCTION_CALL; }
{nintendo}            { return ARQUIVO; }
{boa_tarde}           { return INT_MAIN; }
{switch}           { return READ_FILE;}
{wii}                 { return CLOSE_FILE; }
{eOVisto}             { return ENUM; }
{penseBem}            { return TYPEDEF; }
{struct_keyword}      { return STRUCT_KEYWORD; }
{pqEuPosso}           { return SWAP; }  
{naoEMagico}          { return MALLOC; }
{reuniao14h}          { return FREE; }

{chamada}             { return RETURN; }
{daniboy}             { return DANIBOY; }
{digits}              { yylval.iValue = atoi(yytext); return DIGITS; }
{ws}+                 { /* Espaços em branco, tabulação e quebra de linha devem ser ignorados. */ }

{decimal}             { yylval.real = atof(yytext); return DECIMAL; }
{string}              { yylval.str = strdup(yytext); return STRING; }
{identifier}          { yylval.str = strdup(yytext); return IDENTIFIER; }


{single_line_comment}    { /* Ignorar comentários de uma linha */ }
{multi_line_comment}     { /* Ignorar comentários de múltiplas linhas */ }


"<"                  { return LT; }
">"                  { return GT; }
"<="                 { return LE; }
">="                 { return GE; }
"=="                 { return EQ; }
"!="                 { return NE; }
"&&"                 { return AND; }
"||"                 { return OR; }
"!"                  { return NEGA; }
"+"                  { return ADD; }
"-"                  { return SUB; }
"*"                  { return MUL; }
"/"                  { return DIV; }
"%"                  { return MOD; }
"++"                 { return INCREMENT; }
"--"                 { return DECREMENT; }
"="                  { return ASSIGN; }
"+="                 { return ADD_ASSIGN; }
"-="                 { return SUB_ASSIGN; }
"*="                 { return MUL_ASSIGN; }
"/="                 { return DIV_ASSIGN; }
"%="                 { return MOD_ASSIGN; }
"^"                  { return XOR; }
"<<"                 { return LEFT_SHIFT; }
">>"                 { return RIGHT_SHIFT; }
"?"                  { return QUEST; }
":"                  { return COLON; }
","                  { return COMMA; }
";"                  { return SEMICOLON; }
")"                  { return CLOSE_PARENTHESES; }
"("                  { return OPEN_PARENTHESES; }
"]"                  { return CLOSE_BRACKET; }
"["                  { return OPEN_BRACKET; }
"}"                  { return BLOCK_CLOSE; }
"{"                  { return BLOCK_OPEN; }
"."                  { return DOT; }
"->"                 { return ARROW; }
"#"                  { return SUSTENIDO; }
.                     { printf("Token não reconhecido. LEXEMA: %s\n", yytext); return INVALID; }

%%

int main(void) 
{ 
    /* Call the lexer, then quit. */ 
    yylex(); 
    return 0; 
}