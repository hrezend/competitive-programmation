//Author: Hérson Reis Rezende dos Santos
//Site: hrezend.github.io

#include <bits/stdc++.h>
using namespace std;

int main(){
    int X;
    int Y;
    cin >> X;
    cin >> Y;
    
    int Soma = 0;
    int Auxiliar;
    
    if(Y < X){
        Auxiliar = Y;
        Y = X;
        X = Auxiliar;
    }
    
    for(int i = X; i <= Y; i++){
        if(i%13 != 0){
            Soma += i;
        }
    }

    cout << Soma << endl;
}
