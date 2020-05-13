//Autor: Hérson Reis Rezende dos Santos
//Disciplina: Introdução à Lógica de Programação
//Ano: 1º Semestre de Bacharelado em Ciências da Computação (2019.2)
//Linguagem: C++

#include <bits/stdc++.h>
using namespace std;

int main() {

	//Declaração de variáveis
    int NumRifas;
    cin >> NumRifas;
    int Identificadores[NumRifas];
    
    int valor1, contador1 = 0, contador2 = 0;
       
	//Entrada de dados
    for(int i = 0; i < NumRifas; i++){
        cin >> Identificadores[i];
    }
    
	//Algoritmo de verificação
    for(int i = 0; i < NumRifas; i++){
        for(int j = i; j < NumRifas; j++){
            if(Identificadores[i] == Identificadores[j]){
                contador1++;
            }
            if(contador1>contador2){
                valor1 = Identificadores[i];
                contador2=contador1;
            }
            if(contador1==contador2){
                if(Identificadores[i]>valor1){
                    contador2 = contador1;
                    valor1 = Identificadores[i];
                }
            }
            
        }
        contador1=0;
    }
    
    cout << valor1 << endl;
    
}