//Autor: Hérson Reis Rezende dos Santos
//Disciplina: Introdução à Lógica de Programação
//Ano: 1º Semestre de Bacharelado em Ciências da Computação (2019.2)
//Linguagem: C++

#include <iostream>
using namespace std;

int main() {

int N;
cin >> N;
int Ruas[N];

for(int i = 0; i < N ; i++){
  cin >> Ruas[i];
}
for(int i = N-1; i >= 0; i--){
  cout << Ruas[i] << " ";
}

return 0;
}
