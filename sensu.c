#include <stdio.h>
#include <strings.h>
#include <string.h>
#include <stdlib.h>
#include <include/lib.h>


int main(int argv,char *argc[]){
	static const int STRLENSTRING=10;
	FILE *f ; 
	char *c;
	int cont = 0;
	char *str = (char *) malloc(STRLENSTRING*sizeof(char));

	if (argv==1){
		printf("Sem argumentos %s",getString());
	}else{
		
		printf("Com argumentos [%s]\n", argc[1]);
		f = fopen(argc[1],"r");
		if (f == NULL ) perror("Error to open file " );
		strcpy(str,"");

		while(fgets(c,STRLENSTRING,f)){
			realloc(str, (sizeof(char)*(STRLENSTRING)));
			strcat(str,c);
		}

		puts(str);
		fclose(f);
	}
	return (0);
}