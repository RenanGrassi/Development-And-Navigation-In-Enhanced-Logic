# Development-And-Navigation-In-Enhanced-Logic

(Development And Navigation In Enhanced Logic) Compilador da linguagem de programação DANIEL! :D

## Caso não tenha instalado o bison para rodar o yacc 
$ sudo apt-get install bison
$

## Como rodar o codigo do yacc e do lex:
Rodar os seguintes comandos no terminal

### Primeiro passo:
"Compilar o yacc"

$ bison -d testeYacc.y
$

### Segundo passo:
"Compilar o lex"

$ flex testeYacc.l
$

### Terceiro passo:
Comando para executar o yacc junto com o lex

$ gcc -o teste testeYacc.tab.c lex.yy.c -lfl
$

### Quarto passo:
Para rodar o executavel igual acontece em C

$ ./teste
$