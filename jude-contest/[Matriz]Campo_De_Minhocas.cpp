//Autor: Hérson Reis Rezende dos Santos
//Disciplina: Introdução à Lógica de Programação
//Ano: 1º Semestre de Bacharelado em Ciências da Computação (2019.2)
//Linguagem: C++

#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

int main(){
    
    int Linhas, Colunas;
    cin >> Linhas;
    cin >> Colunas;
    int Matriz[Linhas][Colunas];
    int Maior = 0, SomaLinha = 0, SomaColuna = 0;
    
    for(int i = 0; i < Linhas; i++){
        for(int j = 0; j < Colunas; j++){
            cin >> Matriz[i][j];
        }    
    }
    
    for(int i = 0; i < Linhas; i++){
        for(int j = 0; j < Colunas; j++){
            SomaLinha += Matriz[i][j];
        }
        if(SomaLinha > Maior){
            Maior = SomaLinha;
        }
        SomaLinha = 0;
    }
    for(int i = 0; i < Colunas; i++){
        for(int j = 0; j < Linhas; j++){
            SomaColuna += Matriz[j][i];
        }
        if(SomaColuna > Maior){
            Maior = SomaColuna;
        }
        SomaColuna = 0;
    }
    
    cout << Maior << endl;
}

