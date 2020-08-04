//Author: Hrz - 2ºSM de CC
//Site: hrezend.github.io

#include <stdio.h>
int main(){

    int N;
    while(1){

        scanf("%d", &N);
        if(N==0){
          break;
        }
        else{
            int z, i, j, q, w;
            int Matriz[N][N];
            int Comeco = 0;
            int Limite = N;
            int Input = 1;
            int Repeticoes = 0;

            if(N%2 == 0){
                Repeticoes = (N/2);
            }
            else if(N%2 == 1){
                Repeticoes = (N/2)+1; 
            }
            for(z = 1; z <= Repeticoes; z++){
                for(i = Comeco; i < Limite; i++){
                    for(j = Comeco; j < Limite; j++){
                        Matriz[i][j]=Input;
                    }
                }
                Input++;
                Comeco++;
                Limite--;
            }
            for(q = 0; q < N; q++){
                for(w = 0; w < N; w++){
                    if(w==0){
                        printf("%3d",Matriz[q][w]);
                    }
                    else{
                      printf(" %3d",Matriz[q][w]);
                    }
                }
                printf("\n");
            }
            printf("\n");
        }
    }


    return 0;
}
