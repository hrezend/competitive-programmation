#include <bits/stdc++.h>
#define desync ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define endl '\n'
using namespace std;

void solve(){
    int NumSapos, NumPedras;
    cin >> NumSapos >> NumPedras;
    
    int TamPulo[NumSapos];
    int Pedras[NumPedras] = {1};

    for(int i = 0; i < NumSapos; i++){
        cin >> TamPulo[i];
    }

    for(int j = 0; j < NumSapos; j++){
        for(int i = 0; i < NumPedras; i+=TamPulo[j]){
            Pedras[i] = 1;
        }
    }

    for(int i = 0; i < NumPedras; i++){
        cout << Pedras[i] << " ";
    }
}


int main() {
    desync;
    solve();
}