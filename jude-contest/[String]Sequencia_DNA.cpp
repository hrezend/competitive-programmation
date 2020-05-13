//Autor: Hérson Reis Rezende dos Santos
//Disciplina: Introdução à Lógica de Programação
//Ano: 1º Semestre de Bacharelado em Ciências da Computação (2019.2)
//Linguagem: C++

#include <iostream>
#include <string>

using namespace std;

int main(){
  
    string SeqDoenca;
    cin >> SeqDoenca;
    cin.ignore();
    
    string SeqDNA;
    cin >> SeqDNA;
    cin.ignore();
    
    int Condicao = 0;
    int Tamanho = SeqDNA.size();
    int Aux1 = 0, Aux2 = 0;
    
    for(int i = 0; i < Tamanho; i++){
        if(SeqDoenca[0] == SeqDNA[i]){
            Aux1 = i;
            Aux2 = 0;
            for(int j = 0; j < 3; j++){
                if(SeqDoenca[j] == SeqDNA[Aux1]){
                    Aux2++;    
                }
                Aux1++;
            }
            if(Aux2 == 3){
                Condicao = 1;
            }
        
        }
    }
    
    
    if(Condicao == 1){
        cout << "Possui sequencia" << endl;    
    }
    else{
        cout << "Nao possui sequencia" << endl;
    }
      
  return 0;
}

