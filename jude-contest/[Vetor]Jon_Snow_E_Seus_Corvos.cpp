//Autor: Hérson Reis Rezende dos Santos
//Disciplina: Introdução à Lógica de Programação
//Ano: 1º Semestre de Bacharelado em Ciências da Computação (2019.2)
//Linguagem: C++

#include <bits/stdc++.h>
using namespace std;

int main() {

	//Declaração de variáveis
    int NumCasas, NumTransmissoes;    
    cin >> NumCasas >> NumTransmissoes;
  
    int Indice = 1;    
    
	//Algoritmo de verificação
    do{
      int Casa [NumCasas], CasasReceptoras[NumCasas], CasaOrigem [NumTransmissoes], CasaDestino [NumTransmissoes];
      int CountUm = 0, CountDois = 0, CountFinal = 0;

        for(int i = 0; i < NumCasas; i++){
            CasasReceptoras[i] = 0;
        }
        for(int i = 0; i < NumCasas; i++){
            Casa[i] = i+1;
        }
        for(int i = 0; i < NumTransmissoes; i++){
            cin >> CasaOrigem[i];
            cin >> CasaDestino[i];
        }   
        
        for(int i = 0; i < NumCasas; i++){
            for(int j = 0; j < NumTransmissoes; j++){
                if(Casa[i] == CasaOrigem[j]){
                    CountUm = CountUm + 1;
                }
                if(Casa[i] == CasaDestino[j]){
                    CountUm = CountUm + 1;
                }
                if(CountUm > CountFinal){
                    CountFinal = CountUm;
                }
            }
        
        CountUm = 0;
        }                
        
        
        for(int i = 0; i < NumCasas; i++){
            for(int j = 0; j < NumTransmissoes; j++){
                if(Casa[i] == CasaOrigem[j]){
                    CountDois = CountDois+1;
                }
                if(Casa[i] == CasaDestino[j]){
                    CountDois = CountDois+1;
                }
                if(CountDois == CountFinal){
                    CasasReceptoras[i] = Casa[i];
                }
            }
        
        CountDois = 0;
        } 
        
        
        
        
        cout << "Teste " << Indice << endl;
        
        for(int i = 0; i < NumCasas; i++){
            if(CasasReceptoras[i] != 0){
                cout << CasasReceptoras[i] << " ";
            }
        }
        cout << endl;
        Indice++;

        cin >> NumCasas >> NumTransmissoes;  
    }
    while(NumCasas != 0 && NumTransmissoes != 0);
    
}
