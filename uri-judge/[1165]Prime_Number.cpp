//Author: Hérson Reis Rezende dos Santos
//Site: hrezend.github.io

#include <bits/stdc++.h>
#define desync ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
using namespace std;

int main(){
    desync;
    int T;
    cin >> T;

    for(int i = 0; i < T; i++){
        int Contador = 0;
        int Number;
        cin >> Number;

        for(int i = Number; i > 0; i--){
            if(Number%i == 0){
                Contador++;
            }
        }
        if(Contador < 3){
            cout << Number << " eh primo" << endl;
        }
        else{
            cout << Number << " nao eh primo" << endl;            
        }
    }
}
