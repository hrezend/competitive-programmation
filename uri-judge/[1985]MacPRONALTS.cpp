//Author: Hérson Reis Rezende dos Santos
//Site: hrezend.github.io

#include <bits/stdc++.h>
using namespace std;

int main(){
    int Loop;
    cin >> Loop;
    
    int Codigo;
    int Quantidade;
    double Total = 0;

    for(int i = 0; i < Loop; i++){
        cin >> Codigo >> Quantidade;
        if(Codigo == 1001){
          Total += 1.5*Quantidade;
        }
        if(Codigo == 1002){
          Total += 2.5*Quantidade;
        }
        if(Codigo == 1003){
          Total += 3.5*Quantidade;
        }
        if(Codigo == 1004){
          Total += 4.5*Quantidade;
        }
        if(Codigo == 1005){
          Total += 5.5*Quantidade;
        }
    }

    cout << fixed << setprecision(2) << Total << endl;
}
