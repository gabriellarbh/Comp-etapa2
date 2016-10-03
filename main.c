#include <stdio.h>

int main(int argc, char** argv){
        initMe();
	FILE *file;
	if(argc==2 && (file = fopen(argv[1], "r"))){
		yyin = file;
	
		yyparse();
		printf("Numero de linhas: %d \n",getLineNumber());	
	}
	else
		printf("ERRO AO ABRIR ARQUIVO");

	exit(0);
}
