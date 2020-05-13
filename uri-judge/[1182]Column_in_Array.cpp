//Author: Hérson Reis Rezende dos Santos
//Site: hrezend.github.io

#include <bits/stdc++.h>
using namespace std;

int main(){
 double Matriz[12][12];
 double Auxiliar = 0;
 int Coluna;
 string Operacao;
 
    cin >> Coluna;
    cin >> Operacao;
    
    for(int i = 0; i < 12; i++){
        for(int j = 0; j < 12; j++){    
            cin >> Matriz[i][j];
        }
    }
    
    if(Operacao == "S"){
        for(int k = 0; k < 12; k++){
            Auxiliar += Matriz[k][Coluna];
        }
        cout << fixed << setprecision(1) << Auxiliar << endl;
    }
    
    if(Operacao == "M"){
        for(int k = 0; k < 12; k++){
            Auxiliar += Matriz[k][Coluna];
        }
        cout << fixed << setprecision(1) << Auxiliar/12 << endl;
    } 
 return 0;
}

