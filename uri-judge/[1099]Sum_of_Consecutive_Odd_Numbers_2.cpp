//Author: Hérson Reis Rezende dos Santos
//Site: hrezend.github.io

#include <bits/stdc++.h>
using namespace std;

int main(){
    int Entrada;
    cin >> Entrada;
  
    for(int i = 0; i < Entrada; i++){
        int Soma = 0;
        int A, B;
        cin >> A >> B;
        
        if(A > B){
            int Auxiliar;
            Auxiliar = A;
            A = B;
            B = Auxiliar;
        }
        
        for(int j = A+1; j < B;  j++){
            if(j%2 != 0){
                Soma += j;
            }
        }
        cout << Soma << endl;
        
    }
}
