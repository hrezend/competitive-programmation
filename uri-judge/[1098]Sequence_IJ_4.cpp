//Author: Hérson Reis Rezende dos Santos
//Site: hrezend.github.io

#include <bits/stdc++.h>
using namespace std;

int main(){
    
    double J = 1;
    
    for(double I = 0; I <= 2; I+=0.2){
        cout << "I=" << I<< " J=" << J << endl;
        cout << "I=" << I<< " J=" << J+1 << endl;
        cout << "I=" << I<< " J=" << J+2 << endl;
        J+=0.2;
    }
}
