#
# UFRGS - Compiladores B - Marcelo Johann - 2009/2 - Etapa 1
#
# Makefile for single compiler call
# All source files must be included from code embedded in scanner.l
# In our case, you probably need #include "hash.c" at the beginning
# and #include "main.c" in the last part of the scanner.l
#

etapa2: lex.yy.c y.tab.o
	gcc -o etapa2 lex.yy.c y.tab.o

lex.yy.c: scanner.l hash.c hash.h
	lex scanner.l 

y.tab.o: y.tab.c
	gcc -c y.tab.c $(CFLAGS)
y.tab.c: parser.y
	yacc -v -d parser.y

clean:
	rm *.yy.c etapa2 y.*