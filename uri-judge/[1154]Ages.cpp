//Author: Hérson Reis Rezende dos Santos
//Site: hrezend.github.io

#include <bits/stdc++.h>
using namespace  std;

int main(){
    int Entrada;
    cin >> Entrada;
    int Somatoria = 0;
    int Contador = 0;
    
    while (Entrada > 0){
        Somatoria += Entrada;
        Contador++;
        cin >> Entrada;
    }
    
    float Media = ((Somatoria*1.00)/Contador)*1.00;
    
    cout << fixed << setprecision(2) << Media << endl;

}
