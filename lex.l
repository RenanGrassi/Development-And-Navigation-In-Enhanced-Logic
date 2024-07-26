%{ 
    #include <stdio.h>
%} 

/* This tells flex to read only one input file */ 
%option noyywrap 

/* definicoes regulares */ 

/*\n => quebra de linha; */
/* \t => tabulacao; */
ws	[ \t\n] 

digit [0-9]
positive [+]?{digit}+
negative [-]{digit}+
decimal [+]?[-]?{digit}+[.]{digit}+ 

low [a-z]
upper [A-Z]
word ({low}|{upper})+

license-plate {upper}{3}[-]{digit}{4}
phone {digit}{4}[-]{digit}{4}
name {word}[ ]{word}[ ]{word}([ ]{word})?


%%
{ws}+ { /*Espacos em branco, tabulacao e quebra de linha devem ser ignorados.*/ }
{positive} { printf("Foi encontrado um numero inteiro positivo. LEXEMA: %s\n", yytext); }
{negative} {printf("Foi encontrado um numero inteiro negativo. LEXEMA: %s\n", yytext); }
{decimal} {printf("Foi encontrado um numero numero com parte decimal. LEXEMA: %s\n", yytext); }
{license-plate} {printf("Foi encontrado uma placa. LEXEMA: %s\n", yytext); }
{word} {printf("Foi encontrado uma palavra. LEXEMA: %s\n", yytext); }
{phone} {printf("Foi encontrado um telefone. LEXEMA: %s\n", yytext); }
{name} {printf("Foi encontrado um nome proprio. LEXEMA: %s\n", yytext); }
. { printf("Token nao reconhecido. LEXEMA: %s\n", yytext); }
%%

/*codigo em C. Foi criado o main, mas podem ser criadas outras funcoes aqui.*/ 

int main(void) 
{ 
    /* Call the lexer, then quit. */ 
    yylex(); 
    return 0; 
}
