//Autor: Hérson Reis Rezende dos Santos
//Disciplina: Introdução à Lógica de Programação
//Ano: 1º Semestre de Bacharelado em Ciências da Computação (2019.2)
//Linguagem: C++

#include <bits/stdc++.h>
using namespace std;	

int main(){
    
	//Declaração de variáveis
    int Fileiras, Cadeiras;
    cin >> Fileiras;
    cin >> Cadeiras;
    int Matriz[Fileiras][Cadeiras];
    int Fileira, Assento1, Assento2;
    
	//Entrada de dados
    for(int i = 0; i < Fileiras; i++){
        for(int j = 0; j < Cadeiras; j++){
            cin >> Matriz[i][j];
        }    
    }
    
	//Algorítmo para ordenar a matriz com impressão para cada caso
    for(int i = 0; i < Fileiras; i++){
        for(int j = 0; j < Cadeiras; j++){
          if(j+1 < Cadeiras){
            if(Matriz[i][j] == 0 && Matriz[i][j+1] == 0){
                Fileira = i+1;
                Assento1 = j+1;
                Assento2 = j+2;
                
                cout << "Fileira: " << Fileira << endl;
                cout << "Assentos: " << Assento1 << " e " << Assento2 << endl;
            }
          }
        }
    }
    
}
