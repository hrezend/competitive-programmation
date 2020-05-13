//Author: Hérson Reis Rezende dos Santos
//Site: hrezend.github.io

#include <bits/stdc++.h>
using namespace std;

int main(){
    int Entrada;
    cin >> Entrada;
    
    for(int i = 1; i <= Entrada*4; i++){
        if(i%4 != 0){
            cout << i << " ";
        }
        else{
            cout << "PUM" << endl;
        }
    }

}
