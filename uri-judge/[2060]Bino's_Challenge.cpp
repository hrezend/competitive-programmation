//Author: Hérson Reis Rezende dos Santos
//Site: hrezend.github.io

#include <bits/stdc++.h>
using namespace std;

int main(){
    int Entrada;
    cin >> Entrada;
    
    int M2 = 0, M3 = 0, M4 = 0, M5 = 0;

    for(int i = 1; i <= Entrada ; i++){
        int Numero;
        cin >> Numero;

        if(Numero%2 == 0){
           M2++;
        }
        if(Numero%3 == 0){
           M3++;
        }
        if(Numero%4 == 0){
           M4++;
        }
        if(Numero%5 == 0){
           M5++;
        }
    }

    cout << M2 << " Multiplo(s) de 2" << endl;
    cout << M3 << " Multiplo(s) de 3" << endl;
    cout << M4 << " Multiplo(s) de 4" << endl;
    cout << M5 << " Multiplo(s) de 5" << endl;
}
