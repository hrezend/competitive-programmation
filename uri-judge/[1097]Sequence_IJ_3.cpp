//Author: Hérson Reis Rezende dos Santos
//Site: hrezend.github.io

#include <bits/stdc++.h>
using namespace std;

int main(){
    
    int Comeco = 7;
    
    for(int I = 1; I <= 9; I+=2){
        for(int J = Comeco; J >= Comeco-2; J--){
            cout << "I=" << I<< " J=" << J << endl;
        }
        Comeco+=2;
    }
}
