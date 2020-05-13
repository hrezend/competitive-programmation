//Author: Hérson Reis Rezende dos Santos
//Site: hrezend.github.io

#include <bits/stdc++.h>
#define desync ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
using namespace std;

int main(){
    desync;
    int T; 
    int Velocidade;
    int Nivel = 0;

    while(cin >> T){
        for(int i = 0; i < T; i++){
            cin >> Velocidade;
            if(Velocidade < 10 && Nivel < 2){
            	Nivel = 1;
            }
            if(Velocidade < 20 && Velocidade > 9 && Nivel < 3){
            	Nivel = 2;
            }
            if(Velocidade >= 20){
            	Nivel = 3;
           	}
        }
        cout << Nivel << endl;
        Nivel = 0;
    }
}

