%{
#include <stdio.h>
#include "testeYacc.tab.h"  // Ensure this matches the generated header file
int c;
extern int yylval;
%}

%%

" "         ;  // Ignore whitespace
[a-z]       {
              c = yytext[0];
              yylval = c - 'a';
              return LETTER;
            }
[0-9]       {
              c = yytext[0];
              yylval = c - '0';
              return DIGIT;
            }
[^a-z0-9]   {
              c = yytext[0];
              return c;
            }

%%
