void yyparse();

int main(int argc, char** argv){
        initMe();
	FILE *file;
	if(argc==2 && (file = fopen(argv[1], "r"))){
		yyin = file;
		
	printf("Numero de linhas: %d \n",getLineNumber());
		yyparse();
	}
	else
		printf("ERRO NO ABRIMENTO DO ARQUIVO!");
}