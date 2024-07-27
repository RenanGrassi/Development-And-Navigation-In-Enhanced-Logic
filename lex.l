%{ 
    #include <stdio.h>
    #include <string.h>
    int line_number = 1; // Contador de linhas
%} 
/* Direciona o flex a ler apenas um arquivo de entrada */ 
%option noyywrap 

/* Definicoes Regulares */ 
ws          [ \t\n]+ 
digit       [0-9]
letter      [a-zA-Z]
id          ({letter}({letter}|{digit})*)
number      ({digit}+)

positive    [+]?{digit}+
negative    [-]{digit}+
decimal     [+]?[-]?{digit}+[.]{digit}+ 

/* Tipos primitivos de dados */
marioKart          "marioKart"
donkey             "donkey"
kong               "kong"
mario              "mario"
superMario         "superMario"
zelda              "zelda"

/* Comandos e palavras reservadas */
fezALista?         "fezALista?"
nao?               "nao?"
naoFez?            "naoFez?"
eAGreve?           "eAGreve?"
adiaarOTP          "adiaarOTP"
vamosLa!           "vamosLa!"
momentoOportuno    "momentoOportuno"  
muitoBem!          "muitoBem!"
temosUmImpasse!    "temosUmImpasse!"
chwazi             "chwazi"
marcos             "marcos"
veeeeja            "veeeeja"
vejaBem!           "vejaBem!"
diga!              "diga!"
masNaoEObvio?      "masNaoEObvio?"
masIssoEObvio!     "masIssoEObvio!"

eOVisto?           "eOVisto?"
penseBem           "penseBem"
struct_keyword     "8 8 8 6"
pqEuPosso          "pqEuPosso"
naoEMagico?        "naoEMagico?"
reuniao14h         "reuniao14h"

nintendo           "nintendo"
switch             "switch"
wii                "wii"

bom_dia            "bom dia!" //Void Main
boa_tarde          "boa tarde!" 
chamada            "chamada!" //Return ou fim do programa principal
daniboy            "daniboy" //Tipo de arquivo

%%
{ws}+             { /* Espaços em branco, tabulação e quebra de linha devem ser ignorados. */ }
{positive}        { printf("Foi encontrado um numero inteiro positivo. LEXEMA: %s na linha %d\n", yytext, line_number); }
{negative}        { printf("Foi encontrado um numero inteiro negativo. LEXEMA: %s na linha %d\n", yytext, line_number); }
{decimal}         { printf("Foi encontrado um numero com parte decimal. LEXEMA: %s na linha %d\n", yytext, line_number); }
{marioKart}       { printf("Tipo de dado encontrado: marioKart (Int). LEXEMA: %s na linha %d\n", yytext, line_number); }
{donkey}          { printf("Tipo de dado encontrado: donkey (Float). LEXEMA: %s na linha %d\n", yytext, line_number); }
{kong}            { printf("Tipo de dado encontrado: kong (Double). LEXEMA: %s na linha %d\n", yytext, line_number); }
{mario}           { printf("Tipo de dado encontrado: mario (Char). LEXEMA: %s na linha %d\n", yytext, line_number); }
{superMario}      { printf("Tipo de dado encontrado: superMario (String). LEXEMA: %s na linha %d\n", yytext, line_number); }
{zelda}           { printf("Tipo de dado encontrado: zelda (Boolean). LEXEMA: %s na linha %d\n", yytext, line_number); }
{fezALista?}      { printf("Comando encontrado: fezALista? (If). LEXEMA: %s na linha %d\n", yytext, line_number); }
{nao?}            { printf("Comando encontrado: nao? (Else). LEXEMA: %s na linha %d\n", yytext, line_number); }
{naoFez?}         { printf("Comando encontrado: naoFez? (Elif). LEXEMA: %s na linha %d\n", yytext, line_number); }
{eAGreve?}        { printf("Comando encontrado: eAGreve? (While). LEXEMA: %s na linha %d\n", yytext, line_number); }
{adiaarOTP}       { printf("Comando encontrado: adiaarOTP (For). LEXEMA: %s na linha %d\n", yytext, line_number); }
{vamosLa!}        { printf("Comando encontrado: vamosLa! (Go to). LEXEMA: %s na linha %d\n", yytext, line_number); }
{momentoOportuno} { printf("Comando encontrado: momentoOportuno (Break). LEXEMA: %s na linha %d\n", yytext, line_number); }
{muitoBem!}       { printf("Comando encontrado: muitoBem! (Continue). LEXEMA: %s na linha %d\n", yytext, line_number); }
{temosUmImpasse!} { printf("Comando encontrado: temosUmImpasse! (Switch). LEXEMA: %s na linha %d\n", yytext, line_number); }
{chwazi}          { printf("Comando encontrado: chwazi (Case). LEXEMA: %s na linha %d\n", yytext, line_number); }
{marcos}          { printf("Comando encontrado: marcos (Default). LEXEMA: %s na linha %d\n", yytext, line_number); }
{veeeeja}         { printf("Comando encontrado: veeeeja (print). LEXEMA: %s na linha %d\n", yytext, line_number); }
{vejaBem!}        { printf("Comando encontrado: vejaBem! (print diferente). LEXEMA: %s na linha %d\n", yytext, line_number); }
{diga!}           { printf("Comando encontrado: diga! (Ler da tela). LEXEMA: %s na linha %d\n", yytext, line_number); }
{masNaoEObvio?}   { printf("Comando encontrado: masNaoEObvio? (Criar Função). LEXEMA: %s na linha %d\n", yytext, line_number); }
{masIssoEObvio!}  { printf("Comando encontrado: masIssoEObvio! (Chamar função). LEXEMA: %s na linha %d\n", yytext, line_number); }
{nintendo}        { printf("Tipo encontrado: nintendo (TipoFile). LEXEMA: %s na linha %d\n", yytext, line_number); }
{switch}          { printf("Comando encontrado: switch (Abrir). LEXEMA: %s na linha %d\n", yytext, line_number); }
{wii}             { printf("Comando encontrado: wii (Fechar). LEXEMA: %s na linha %d\n", yytext, line_number); }
{eOVisto?}        { printf("Comando encontrado: eOVisto? (Enum). LEXEMA: %s na linha %d\n", yytext, line_number); }
{penseBem}        { printf("Comando encontrado: penseBem (Typedef). LEXEMA: %s na linha %d\n", yytext, line_number); }
{struct_keyword}  { printf("Comando encontrado: 8 8 8 6 (Struct). LEXEMA: %s na linha %d\n", yytext, line_number); }
{pqEuPosso}       { printf("Comando encontrado: pqEuPosso (Swap). LEXEMA: %s na linha %d\n", yytext, line_number); }
{naoEMagico?}     { printf("Comando encontrado: naoEMagico? (Malloc). LEXEMA: %s na linha %d\n", yytext, line_number); }
{reuniao14h}      { printf("Comando encontrado: reuniao14h (Free). LEXEMA: %s na linha %d\n", yytext, line_number); }
{bom_dia}         { printf("Comando encontrado: bom dia! (Void Main). LEXEMA: %s na linha %d\n", yytext, line_number); }
{boa_tarde}       { printf("Comando encontrado: boa tarde! (Int Main). LEXEMA: %s na linha %d\n", yytext, line_number); }
{chamada}         { printf("Comando encontrado: chamada! (Return). LEXEMA: %s na linha %d\n", yytext, line_number); }
{daniboy}         { printf("Tipo encontrado: daniboy (Tipo do arquivo??). LEXEMA: %s na linha %d\n", yytext, line_number); }
{id}              { printf("Identificador encontrado. LEXEMA: %s na linha %d\n", yytext, line_number); }
.                 { printf("Token não reconhecido. LEXEMA: %s na linha %d\n", yytext, line_number); }
%%

int main(void) 
{ 
    /* Call the lexer, then quit. */ 
    yylex(); 
    return 0; 
} 