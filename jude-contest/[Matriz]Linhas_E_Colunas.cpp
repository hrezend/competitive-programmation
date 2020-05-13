//Autor: Hérson Reis Rezende dos Santos
//Disciplina: Introdução à Lógica de Programação
//Ano: 1º Semestre de Bacharelado em Ciências da Computação (2019.2)
//Linguagem: C++

#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

int main(){
    int NLinhas, NColunas;
    cin >> NLinhas >> NColunas;
    
    int Matriz[NLinhas][NColunas];
    
    int SomaLinha = 0;
    int SomaColuna = 0;
    
    
    for(int i = 0; i < NLinhas; i++){
        for(int k = 0; k < NColunas; k++){
            cin >> Matriz[i][k];
        }
    }
    
    for(int i = 0; i < NLinhas; i++){
        for(int k = 0; k < NColunas; k++){
            SomaLinha += Matriz[i][k];
        }
        cout << SomaLinha << " ";
        SomaLinha = 0;
    }
    
    cout << endl;
    
    for(int k = 0; k < NColunas; k++){
        for(int i = 0; i < NLinhas; i++){
            SomaColuna += Matriz[i][k];
        }
        cout << SomaColuna << " ";
        SomaColuna = 0;
    }
    
}

