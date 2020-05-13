//Author: Hrz - 2ºSM de CC
//Site: hrezend.github.io

#include <stdio.h>

int main(){
	int N[4];
	int Posicao = 0;
	int i;
	
	for(i = 1; i <= 4; i++){
		scanf("%d", &N[i]);
		if(N[i] == 1){
			Posicao = i;
		}
	}

	printf("%d\n", Posicao);

	return 0;
}
