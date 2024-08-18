%{ 
    #include <stdio.h>
    #include <string.h>
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
/*Void Main*/
bom_dia            "bom dia!" 
boa_tarde          "boa tarde!" 

/*Return ou fim do programa principal*/
chamada            "chamada!"

/*Tipo de arquivo*/
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
multi_line_comment   "/\*([^*]|\*+[^*/])*\*+/"

%%
{ws}+                 { /* Espaços em branco, tabulação e quebra de linha devem ser ignorados. */ }
{positive}            { yylval.number = atoi(yytext); return INTEGER; }
{negative}            { yylval.number = atoi(yytext); return INTEGER; }
{decimal}             { yylval.decimal = atof(yytext); return DECIMAL; }
{string}              { yylval.string = strdup(yytext); return STRING; }
{id}                  { yylval.string = strdup(yytext); return IDENTIFIER; }

{tipo}                { return TYPE; }
{fezALista}           { return FEZALISTA; }
{nao}                 { return NAO; }
{naoFez}              { return NAOFEZ; }
{eAGreve}             { return EAGREVE; }
{adiaarOTP}           { return ADIAAROTP; }
{vamosLa}             { return VAMOSLA; }
{momentoOportuno}     { return MOMENTOOportuno; }
{muitoBem}            { return MUITOBEM; }
{temosUmImpasse}      { return TEMOSUMIMPASSE; }
{chwazi}              { return CHWAZI; }
{marcos}              { return MARCOS; }
{veeeeja}             { return VEEEEJA; }
{vejaBem}             { return VEJABEM; }
{diga}                { return DIGA; }
{masNaoEObvio}        { return MASNAOEEOBVIO; }
{masIssoEObvio}       { return MASISSOEOBVIO; }
{nintendo}            { return NINTENDO; }
{switch}              { return SWITCH; }
{wii}                 { return WII; }
{eOVisto}             { return EOVISTO; }
{penseBem}            { return PENSEBEM; }
{struct_keyword}      { return STRUCT_KEYWORD; }
{pqEuPosso}           { return PQEUPOSSO; }
{naoEMagico}          { return NAOEMAGICO; }
{reuniao14h}          { return REUNIAO14H; }
{bom_dia}             { return BOM_DIA; }
{boa_tarde}           { return BOA_TARDE; }
{chamada}             { return CHAMADA; }
{daniboy}             { return DANIBOY; }

/* Comentários */
{single_line_comment}    { /* Ignorar comentários de uma linha */ }
{multi_line_comment}     { /* Ignorar comentários de múltiplas linhas */ }

/* Operadores */
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
")"                  { return CLOSE_PAREN; }
"("                  { return OPEN_PAREN; }
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