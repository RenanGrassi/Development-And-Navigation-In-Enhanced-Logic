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
{tipo}            {return TYPE;}
{fezALista}       {return FEZALISTA;}
{nao}             {return NAO;}
{naoFez}          {return NAOFEZ;}
{eAGreve}         {return EAGREVE;}
{adiaarOTP}       {return ADIAAROTP;}
{vamosLa}         {return VAMOSLA;}
{momentoOportuno} {return MOMENTOOportuno;}
{muitoBem}        {return MUITOBEM;}
{temosUmImpasse}  {return TEMOSUMIMPASSE;}
{chwazi}          {return CHWAZI;}
{marcos}          {return MARCOS;}
{veeeeja}         {return VEEEEJA;}
{vejaBem}         {return VEJABEM;}
{diga}            {return DIGA;}
{masNaoEObvio}    {return MASNAOEEOBVIO;}
{masIssoEObvio}   {return MASISSOEOBVIO;}
{nintendo}        {return NINTENDO;}
{switch}          {return SWITCH;}
{wii}             {return WII;}
{eOVisto}         {return EOVISTO;}
{penseBem}        {return PENSEBEM;}
{struct_keyword}  {return STRUCT_KEYWORD;}
{pqEuPosso}       {return PQEUPOSSO;}
{naoEMagico}      {return NAOEMAGICO;}
{reuniao14h}      {return REUNIAO14H;}
{bom_dia}         {return BOM_DIA;}
{boa_tarde}       {return BOA_TARDE;}
{chamada}         {return CHAMADA;}
{daniboy}         {return DANIBOY;}
{id}              {return ID;}
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