#include <stdio.h>
#include "globals.h"

extern int yylex();

extern int yylineno;
extern char* yytext;
char *tokkens[]={"ENDFILE","ERROR",
    
    "IF","THEN","ELSE","END","REPEAT","UNTIL","READ","WRITE",
    
    "ID","NUM",
   
    "ASSIGN","EQ","LT","PLUS","MINUS","TIMES","OVER","LPAREN","RPAREN","SEMI","STRING","COMENTARIO","STR","TAB","NOVALINHA","ASPA"};
//extern int TraceScan;
//extern TokenType getToken();
//extern void printToken( TokenType, const char* );
int main(void)
{
  int ntoken,vtoken;
  ntoken=yylex();

  while (ntoken){

     printf(" Tokken %s ",tokkens[ntoken]);
    // printToken(token,yytext);
     ntoken=yylex();

  }
  return 0;
}
