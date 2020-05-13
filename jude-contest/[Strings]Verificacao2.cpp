//Autor: Hérson Reis Rezende dos Santos
//Disciplina: Introdução à Lógica de Programação
//Ano: 1º Semestre de Bacharelado em Ciências da Computação (2019.2)
//Linguagem: C++

#include <bits/stdc++.h>
using namespace std;

int main(){
    
	//Declaração de variáveis e entrada de dados
    int condicao = 0, contador = 0;
  
    string LetrasDisponiveis;
    cin >> LetrasDisponiveis;
    
    string Palavra;
    cin >> Palavra;
    
    int TamanhoPalavra = Palavra.size();
    int TamanhoLetrasDisponiveis = LetrasDisponiveis.size();
    
	//Algorítmo de verificação (dado conjunto de letras podem ou não formar uma dada palavra)
    for(int i = 0; i < TamanhoPalavra; i++){
        for(int j = 0; j < TamanhoLetrasDisponiveis; j++){
            if(Palavra.at(i) == LetrasDisponiveis.at(j)){
                LetrasDisponiveis.at(j) = '-';
                contador++;
                break;
            }
        }
        if(contador >= TamanhoPalavra){
            condicao = 1;
        }
    }
    
	//Impressão de saída
    if(condicao == 1){
        cout << "Eh possivel" << endl;
    }
    else{
        cout << "Impossivel" << endl;
    }
      
  return 0;
}
