
#ifndef _GLOBALS_H_
#define _GLOBALS_H_

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

#ifndef FALSE
#define FALSE 0
#endif

#ifndef TRUE
#define TRUE 1
#endif


#define MAXRESERVED 8

typedef enum 
    
   {ENDFILE,ERROR,
    
    IF,THEN,ELSE,END,REPEAT,UNTIL,READ,WRITE,
    
    ID,NUM,
    
    ASSIGN,EQ,LT,PLUS,MINUS,TIMES,OVER,LPAREN,RPAREN,SEMI,STRING,COMENTARIO,STR,TAB,NL,ASPA
   } TokenType;

FILE* source; 
FILE* listing; 
extern FILE* code; 

extern int yylineno; 
#endif
