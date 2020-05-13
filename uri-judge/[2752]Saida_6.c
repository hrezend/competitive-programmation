//Author: Hrz - 2ºSM de CC
//Site: hrezend.github.io

#include <stdio.h>

int main(){
	
	char Frase[50] = "AMO FAZER EXERCICIO NO URI";

	printf("<%s>\n", Frase);
	printf("<%30s>\n", Frase);
	printf("<%.20s>\n", Frase);
	printf("<%-20s>\n", Frase);
	printf("<%-30s>\n", Frase);
	printf("<%.30s>\n", Frase);
	printf("<%30.20s>\n", Frase);
	printf("<%-30.20s>\n", Frase);


	return 0;
}
