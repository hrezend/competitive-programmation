//Author: Hrz - 2ºSM de CC / Laboratório de Programação
#include <bits/stdc++.h>
#define desync ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define endl '\n'
using namespace std;

int main(){
    desync;
    int N;
    cin >> N;
    int U[N];
    int V;
    int UV[N];
    int Contador = 0;
    
    for(int i = 0; i < N; i++){
        cin >> U[i];    
    }
    for(int i = 0; i < N; i++){
        cin >> V;
        U[i] = U[i] + V;
    }
    for(int i = 0; i < N; i++){
        cin >> UV[i];    
    }

    for(int i = 0; i < N; i++){
        if(U[i] == UV[i]){
            Contador++;
        }
    }
        if(Contador == N){
            cout << "OK" << endl;
        }
        else{
            cout << "NOPE :(" << endl;
        } 
	
}
