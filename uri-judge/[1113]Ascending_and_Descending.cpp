//Author: Hérson Reis Rezende dos Santos
//Site: hrezend.github.io

#include <bits/stdc++.h>
using namespace std;

int main(){
    int A;
    int B;   
    
    for(;;){
        cin >> A;
        cin >> B;
        
        if(A == B){
            break;
        }
        else if(A < B){
            cout << "Crescente" << endl;
        }
        else{
            cout << "Decrescente" << endl;
        }
    }

}
