//Author: Hérson Reis Rezende dos Santos
//Site: hrezend.github.io

#include <bits/stdc++.h>
#define desync ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
using namespace std;

int main(){
    desync;
	int C, B, P;
    cin >> C >> B >> P;
    
    int C1, B1, P1;
    cin >> C1 >> B1 >> P1;
    
    int Somatorio = 0;
    
    if(C1 > C){
        Somatorio = Somatorio + (C1-C);    
    }
    if(B1 > B){
        Somatorio = Somatorio + (B1-B);    
    }
    if(P1 > P){
        Somatorio = Somatorio + (P1-P);    
    }
    
    cout << Somatorio << endl;
}
