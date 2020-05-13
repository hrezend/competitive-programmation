//Autor: Hérson Reis Rezende dos Santos
//Disciplina: Introdução à Lógica de Programação
//Ano: 1º Semestre de Bacharelado em Ciências da Computação (2019.2)
//Linguagem: C++

#include <iostream>
using namespace std;

int main() {

int N, AUX;
cin >> N;
int Numeros[N];

for(int i = 0; i < N; i++){
    cin >> Numeros[i];
}

for(int i = N-1; i > 0; i--){
    if(Numeros[i] >= Numeros[i-1]){
        AUX = Numeros[i];
        Numeros[i-1] = AUX+1;    
    }    
}

for(int i = 0; i < N; i++){
    cout << Numeros[i] << " ";
} 

return 0;
}
