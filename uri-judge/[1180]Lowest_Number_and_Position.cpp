//Author: Hérson Reis Rezende dos Santos
//Site: hrezend.github.io

#include <iostream>
 
using namespace std;
 
int main() {
 
    int N;
    int Menor = 0 , Posicao = 0;
    
    cin >> N;
    int Vetor[N];
    
    for(int i = 0; i < N; i++){
        cin >> Vetor[i];
        
        if(Vetor[i] < Menor){
            Menor = Vetor[i];
            Posicao = i;
        }
    }
    
    cout << "Menor valor: " << Menor << endl;
    cout << "Posicao: " << Posicao << endl;
    return 0;
}
