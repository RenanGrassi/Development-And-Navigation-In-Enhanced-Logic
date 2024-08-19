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
marioKart          "marioKart"
donkey             "donkey"
kong               "kong"
mario              "mario"
superMario         "superMario"
zelda              "zelda"
tipo                {marioKart}{donkey}{kong}{mario}{superMario}{zelda}

/* Comandos e palavras reservadas */
fezALista         "fezALista?" 
nao               "nao?"
naoFez            "naoFez?"
eAGreve           "eAGreve?"
adiaarOTP          "adiaarOTP"
vamosLa           "vamosLa!"
momentoOportuno    "momentoOportuno"  
muitoBem          "muitoBem!"
temosUmImpasse    "temosUmImpasse!"
chwazi             "chwazi"
marcos             "marcos"
veeeeja            "veeeeja"
vejaBem           "vejaBem!"
diga              "diga!"
masNaoEObvio      "masNaoEObvio?"
masIssoEObvio     "masIssoEObvio!"

eOVisto           "eOVisto?"
penseBem           "penseBem"
struct_keyword     "8 8 8 6"
pqEuPosso          "pqEuPosso"
naoEMagico        "naoEMagico?"
reuniao14h         "reuniao14h"

nintendo           "nintendo"
switch             "switch"
wii                "wii"
bom_dia            "bom dia!" 
boa_tarde          "boa tarde!" 


chamada            "chamada!"


daniboy            "daniboy" 


digit       [0-9]
letter      [a-zA-Z_]
id          ({letter}({letter}|{digit})*)
number      ({digit}+)
pointer     [\*]
string      \"([^\"]|\\\")*\" 

positive    [+]?{digit}+
negative    [-]{digit}+
decimal     [-]?{digit}+[.]{digit}+ 

/* Comentários */
single_line_comment  "//[^\n]*"
multi_line_comment   "/\([^]|\+[^/])\+/"

%%
{ws}+                 { /* Espaços em branco, tabulação e quebra de linha devem ser ignorados. */ }
{positive}            { yylval.number = atoi(yytext); return INTEGER; }
{negative}            { yylval.number = atoi(yytext); return INTEGER; }
{decimal}             { yylval.decimal = atof(yytext); return DECIMAL; }
{string}              { yylval.string = strdup(yytext); return STRING; }
{id}                  { yylval.string = strdup(yytext); return IDENTIFIER; }

{tipo}                { return TIPO; }
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
{masIssoEObvio}       { return CALL; }
{nintendo}            { return ARQUIVO; }
{wii}                 { return CLOSE_FILE; }
{eOVisto}             { return ENUM; }
{penseBem}            { return TYPEDEF; }
{struct_keyword}      { return STRUCT_KEYWORD; }
{pqEuPosso}           { return SWAP; }
{naoEMagico}          { return MALLOC; }
{reuniao14h}          { return FREE; }
{bom_dia}             { return VOID_MAIN; }
{boa_tarde}           { return INT_MAIN; }
{chamada}             { return RETURN; }
{daniboy}             { return DANIBOY; }


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
";"                  { return SEMI_COLON; }
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