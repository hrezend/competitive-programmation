#include <bits/stdc++.h>
#define desync ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define endl '\n'
using namespace std;

void solve() {
    int dimensoes, quantidadeDeTeleportes, X, Y, count=0;
    
    cin >> dimensoes >> quantidadeDeTeleportes;
    int matriz[dimensoes][dimensoes];

    for(int i = 0; i < dimensoes; i++){
        for(int j = 0; j < dimensoes; j++){
            cin >> matriz[i][j];
        }
    }
    
    for(int i = 0; i < quantidadeDeTeleportes; i++){
        cin >> X >> Y;
        
        for(int j = X-1; j >= 0; j--){
            if(matriz[j][Y] == 1){
                count++;
                matriz[j][Y] = 0; 
                break;
            }
        }
    }

    cout << count << endl;
}

int main() {
    desync;
    solve();
} 