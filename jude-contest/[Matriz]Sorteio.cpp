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
    int Resultado[Linhas][Colunas];
    int Soma = 0;
    
    for(int i = 0; i < Linhas; i++){
        for(int j = 0; j < Colunas; j++){
            cin >> Matriz[i][j];
        }    
    }
    
    for(int i = 0; i < Linhas; i++){
        for(int j = 0; j < Colunas; j++){
            Soma += Matriz[i][j];

            if(j-1 >= 0){
                Soma += Matriz[i][j-1];
            }
            if(j+1 < Colunas){
                Soma += Matriz[i][j+1];
            }
            if(i-1 >= 0){
                Soma += Matriz[i-1][j];
            }
            if(i+1 < Linhas){
                Soma += Matriz[i+1][j];
            }

            Resultado[i][j] = Soma;
            Soma = 0;
        }
    }
    
    for(int i = 0; i < Linhas; i++){
        for(int j = 0; j < Colunas; j++){
            cout << Resultado[i][j] << " ";
        }    
            cout << endl;        
    }



}

