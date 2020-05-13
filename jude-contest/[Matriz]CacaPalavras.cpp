//Autor: Hérson Reis Rezende dos Santos
//Disciplina: Introdução à Lógica de Programação
//Ano: 1º Semestre de Bacharelado em Ciências da Computação (2019.2)
//Linguagem: C++

#include <bits/stdc++.h>
using namespace std;	

int main(){
    
	//Declaração de variáveis
    int Linhas, Colunas;
    cin >> Linhas;
    cin >> Colunas;
    char Matriz[Linhas][Colunas];
    int Condicao = 0, Count = 0;
    int k = 0;
    
	//Entrada de dados
    for(int i = 0; i < Linhas; i++){
        for(int j = 0; j < Colunas; j++){
            cin >> Matriz[i][j];
        }    
    }

    string Palavra;
    cin >> Palavra;
    int TamPalavra = Palavra.size();
    
        for(int i = 0; i < Linhas; i++){
            for(int j = 0; j < Colunas; j++){
                if(Palavra[k] == Matriz[i][j]){
                    Count++;
                    k++;
                }
                else{
                    Count = 0;
                    k = 0;
                }
                if(Count == TamPalavra){
                    Condicao = 1;
                }
                if(j == Colunas - 1){
                    Count = 0;
                    k = 0;
                }
            }
        }

    Count = 0;
    k = 0;
    
        for(int i = 0; i < Colunas; i++){
            for(int j = 0; j < Linhas; j++){
                if(Palavra[k] == Matriz[j][i]){
                    Count++;
                    k++;
                }
                else{
                    Count = 0;
                    k = 0;
                }
                if(Count == TamPalavra){
                    Condicao = 1;
                }
                if(j == Linhas - 1){
                    Count = 0;
                    k = 0;
                }
            }
        }

    
    //Impressão de saída
    if(Condicao == 1){
        cout << "Sim" << endl;
    }
    else{
        cout << "Nao" << endl;
    }

}