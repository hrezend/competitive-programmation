//Author: Hrz - 2ºSM/CC
//Linguagem: C++
#include <bits/stdc++.h>
#define desync ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define endl '\n'
using namespace std;

int main(){
    
	//Declaração de variáveis
    int N, M;
    cin >> N >> M;
    int Paises[N];
    int Medalhas[M][3];
    int Contador = 0;
    int Ranking[N];
    int aux, aux2;
    int menor_i;
    
	//Entrada de dados
    for(int i = 0; i < N; i++){
        Paises[i] = i+1;    
    }
    for(int i = 0; i < M; i++){
        for(int j = 0; j < 3; j++){
            cin >> Medalhas[i][j];
        }
    }

    for(int i = 0; i < N; i++){
        for(int j = 0; j < M; j++){
            for(int k = 0; k < 3; k++){
                if(Paises[i] == Medalhas[j][k]){
                    Contador++;
                }    
            }
        }
        
        Ranking[i] = Contador;
        Contador = 0;
    }

	//Algorítmo de ordenação
    for (int i = 0; i < N-1; i++){
        menor_i = i;
        for (int j = i+1 ; j < N; j++){
           if(Ranking[j] > Ranking[menor_i]){
                menor_i = j;
            }
        }
        aux = Ranking[i];
        Ranking[i] = Ranking[menor_i];
        Ranking[menor_i] = aux;
        
        aux2 = Paises[i];
        Paises[i] = Paises[menor_i];
        Paises[menor_i] = aux2;
    }
    for (int i = 0; i < N-1; i++){
        menor_i = i;
        for (int j = i+1 ; j < N; j++){
           if(Ranking[j] == Ranking[menor_i]){
                if(j < menor_i){
                    menor_i = j;
                }
            }
        }
        aux = Ranking[i];
        Ranking[i] = Ranking[menor_i];
        Ranking[menor_i] = aux;
        
        aux2 = Paises[i];
        Paises[i] = Paises[menor_i];
        Paises[menor_i] = aux2;
    }
    
    //Impressão da saída
    for(int i = 0; i < N; i++){
        cout << Paises[i] << " ";    
    }
	
}
