//Author: Hérson Reis Rezende dos Santos
//Site: hrezend.github.io

#include <bits/stdc++.h>
using namespace std;

int main(){
    int Repeticoes;
    cin >> Repeticoes;
    
    for(int i = 0; i < Repeticoes; i++){
        string Jogo[2];
        string Nome[2];
        int Numero;
        int Soma = 0;
        int Posicao = 0;
        for(int k = 0; k < 2; k++){
            cin >> Nome[k];
            cin >> Jogo[k];
        }
        for(int k = 0; k < 2; k++){
            cin >> Numero;
            Soma += Numero;
        }
        if(Soma%2 == 0){
            for(int j = 0; j < 2; j++){
                if(Jogo[j] == "PAR"){
                    Posicao = j;
                }
            }
        }
        else if(Soma%2 != 0){
            for(int j = 0; j < 2; j++){
                if(Jogo[j] == "IMPAR"){
                    Posicao = j;
                }
            }
        }
        cout << Nome[Posicao] << endl;
    }
    
    
}
