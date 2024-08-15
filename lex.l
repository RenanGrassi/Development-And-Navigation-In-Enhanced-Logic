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
letter      [a-zA-Z]
id          ({letter}({letter}|{digit})*)
number      ({digit}+)
pointer     [\*]
string      \"([^\"]|\\\")*\" 
 

positive    [+]?{digit}+
negative    [-]{digit}+
decimal     [+]?[-]?{digit}+[.]{digit}+ 

%%
{ws}+             { /* Espaços em branco, tabulação e quebra de linha devem ser ignorados. */ }
{positive}        { printf("Foi encontrado um numero inteiro positivo. LEXEMA: %s\n", yytext); }
{negative}        { printf("Foi encontrado um numero inteiro negativo. LEXEMA: %s\n", yytext); }
{decimal}         { printf("Foi encontrado um numero com parte decimal. LEXEMA: %s\n", yytext); }
{marioKart}       { printf("Tipo de dado encontrado: marioKart (Int). LEXEMA: %s\n", yytext); }
{donkey}          { printf("Tipo de dado encontrado: donkey (Float). LEXEMA: %s\n", yytext); }
{kong}            { printf("Tipo de dado encontrado: kong (Double). LEXEMA: %s\n", yytext); }
{mario}           { printf("Tipo de dado encontrado: mario (Char). LEXEMA: %s\n", yytext); }
{superMario}      { printf("Tipo de dado encontrado: superMario (String). LEXEMA: %s\n", yytext); }
{zelda}           { printf("Tipo de dado encontrado: zelda (Boolean). LEXEMA: %s\n", yytext); }
{fezALista}      { printf("Comando encontrado: fezALista? (If). LEXEMA: %s\n", yytext); }
{nao}            { printf("Comando encontrado: nao? (Else). LEXEMA: %s\n", yytext); }
{naoFez}         { printf("Comando encontrado: naoFez? (Elif). LEXEMA: %s\n", yytext); }
{eAGreve}        { printf("Comando encontrado: eAGreve? (While). LEXEMA: %s\n", yytext); }
{adiaarOTP}       { printf("Comando encontrado: adiaarOTP (For). LEXEMA: %s\n", yytext); }
{vamosLa}        { printf("Comando encontrado: vamosLa! (Go to). LEXEMA: %s\n", yytext); }
{momentoOportuno} { printf("Comando encontrado: momentoOportuno (Break). LEXEMA: %s\n", yytext); }
{muitoBem}       { printf("Comando encontrado: muitoBem! (Continue). LEXEMA: %s\n", yytext); }
{temosUmImpasse} { printf("Comando encontrado: temosUmImpasse! (Switch). LEXEMA: %s\n", yytext); }
{chwazi}          { printf("Comando encontrado: chwazi (Case). LEXEMA: %s\n", yytext); }
{marcos}          { printf("Comando encontrado: marcos (Default). LEXEMA: %s\n", yytext); }
{veeeeja}         { printf("Comando encontrado: veeeeja (print). LEXEMA: %s\n", yytext); }
{vejaBem}        { printf("Comando encontrado: vejaBem! (print diferente). LEXEMA: %s\n", yytext); }
{diga}           { printf("Comando encontrado: diga! (Ler da tela). LEXEMA: %s\n", yytext); }
{masNaoEObvio}   { printf("Comando encontrado: masNaoEObvio? (Criar Função). LEXEMA: %s\n", yytext); }
{masIssoEObvio}  { printf("Comando encontrado: masIssoEObvio! (Chamar função). LEXEMA: %s\n", yytext); }
{nintendo}        { printf("Tipo encontrado: nintendo (TipoFile). LEXEMA: %s\n", yytext); }
{switch}          { printf("Comando encontrado: switch (Abrir). LEXEMA: %s\n", yytext); }
{wii}             { printf("Comando encontrado: wii (Fechar). LEXEMA: %s\n", yytext); }
{eOVisto}        { printf("Comando encontrado: eOVisto? (Enum). LEXEMA: %s\n", yytext); }
{penseBem}        { printf("Comando encontrado: penseBem (Typedef). LEXEMA: %s\n", yytext); }
{struct_keyword}  { printf("Comando encontrado: 8 8 8 6 (Struct). LEXEMA: %s\n", yytext); }
{pqEuPosso}       { printf("Comando encontrado: pqEuPosso (Swap). LEXEMA: %s\n", yytext); }
{naoEMagico}     { printf("Comando encontrado: naoEMagico? (Malloc). LEXEMA: %s\n", yytext); }
{reuniao14h}      { printf("Comando encontrado: reuniao14h (Free). LEXEMA: %s\n", yytext); }
{bom_dia}         { printf("Comando encontrado: bom dia! (Void Main). LEXEMA: %s\n", yytext); }
{boa_tarde}       { printf("Comando encontrado: boa tarde! (Int Main). LEXEMA: %s\n", yytext); }
{chamada}         { printf("Comando encontrado: chamada! (Return). LEXEMA: %s\n", yytext); }
{daniboy}         { printf("Tipo encontrado: daniboy (Tipo do arquivo??). LEXEMA: %s\n", yytext); }
{id}              { printf("Identificador encontrado. LEXEMA: %s\n", yytext); }
{string}          { printf("String encontrada: %s\n", yytext); }

"<"                { printf("Operador menor reconhecido: %s \n", yytext); }
">"                { printf("Operador maior reconhecido: %s \n", yytext); }
"<="               { printf("Operador menor ou igual reconhecido: %s \n", yytext); }
">="               { printf("Operador maior ou igual reconhecido: %s \n", yytext); }
"=="               { printf("Operador de igualdade reconhecido: %s \n", yytext); }
"!="               { printf("Operador de diferença reconhecido: %s \n", yytext); }
"&&"               { printf("Operador lógico E reconhecido: %s \n", yytext); }
"||"               { printf("Operador lógico OU reconhecido: %s \n", yytext); }
"!"                { printf("Operador lógico NÃO reconhecido: %s \n", yytext); }
"+"                { printf("Operador de adição reconhecido: %s \n", yytext); }
"-"                { printf("Operador de subtração reconhecido: %s \n", yytext); }
"*"                { printf("Operador de multiplicação reconhecido: %s \n", yytext); }
"/"                { printf("Operador de divisão reconhecido: %s \n", yytext); }
"%"                { printf("Operador de módulo reconhecido: %s \n", yytext); }
"++"               { printf("Operador de incremento reconhecido: %s \n", yytext); }
"--"               { printf("Operador de decremento reconhecido: %s \n", yytext); }
"="                { printf("Operador de atribuição reconhecido: %s \n", yytext); }
"+="               { printf("Operador de adição e atribuição reconhecido: %s \n", yytext); }
"-="               { printf("Operador de subtração e atribuição reconhecido: %s \n", yytext); }
"*="               { printf("Operador de multiplicação e atribuição reconhecido: %s \n", yytext); }
"/="               { printf("Operador de divisão e atribuição reconhecido: %s \n", yytext); }
"&"                { printf("Operador bitwise E reconhecido: %s \n", yytext); }
"|"                { printf("Operador bitwise OU reconhecido: %s \n", yytext); }
"^"                { printf("Operador bitwise XOR reconhecido: %s \n", yytext); }
"~"                { printf("Operador bitwise NÃO reconhecido: %s \n", yytext); }
"<<"               { printf("Operador de deslocamento à esquerda reconhecido: %s \n", yytext); }
">>"               { printf("Operador de deslocamento à direita reconhecido: %s \n", yytext); }
"?"                { printf("Operador ternário (condicional) reconhecido: %s \n", yytext); }
":"                { printf("Símbolo de dois pontos reconhecido: %s \n", yytext); }
","                { printf("Símbolo de vírgula reconhecido: %s \n", yytext); }
";"                { printf("Símbolo de ponto e vírgula reconhecido: %s \n", yytext); }
"("                { printf("Símbolo de parêntese esquerdo reconhecido: %s \n", yytext); }
")"                { printf("Símbolo de parêntese direito reconhecido: %s \n", yytext); }
"["                { printf("Símbolo de colchete esquerdo reconhecido: %s \n", yytext); }
"]"                { printf("Símbolo de colchete direito reconhecido: %s \n", yytext); }
"{"                { printf("Símbolo de chave esquerda reconhecido: %s \n", yytext); }
"}"                { printf("Símbolo de chave direita reconhecido: %s \n", yytext); }
"."                { printf("Símbolo de ponto reconhecido: %s \n", yytext); }
"->"               { printf("Operador de acesso via ponteiro reconhecido: %s \n", yytext); }
"#"                { printf("Símbolo de cerquilha reconhecido: %s \n", yytext); }


.                 { printf("Token não reconhecido. LEXEMA: %s\n", yytext); }
%%

int main(void) 
{ 
    /* Call the lexer, then quit. */ 
    yylex(); 
    return 0; 
} 