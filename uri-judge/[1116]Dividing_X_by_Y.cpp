//Author: Hérson Reis Rezende dos Santos
//Site: hrezend.github.io

#include <bits/stdc++.h>
using namespace std;

int main(){
 
 int Casos;
 cin >> Casos;
 
    for(int i = 0; i < Casos; i++){
        int X, Y;
        cin >> X >> Y;
        
        if(Y != 0){
            double DIV = X/(Y*1.00);
            cout << fixed << setprecision(1) << DIV << endl;
        }
        else{
            cout << "divisao impossivel" << endl;    
        }
    }

}
