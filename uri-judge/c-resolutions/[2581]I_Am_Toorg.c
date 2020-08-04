//Author: Hrz - 2ºSM de CC
//Site: hrezend.github.io

#include <stdio.h>
#include <string.h>

int main(){
	
	int N;
	int i;
	char Pergunta[100];

	scanf("%d", &N);
	
	for(i = 0; i < N; i++){
		scanf("%[^\n]", Pergunta);
		__fpurge(stdin);
		printf("I am Toorg!\n");
	}

	return 0;
}
