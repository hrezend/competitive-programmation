#include <bits/stdc++.h>
#define desync ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define endl '\n'
using namespace std;

void solve(){
    int tamanho, quantidadeCampos, coordX, coordY, answer = 0;
    cin >> tamanho;

    int matriz[tamanho][tamanho];

    for(int i = 0; i < tamanho; i++){
        for(int j = 0; j < tamanho; j++){
            cin >> matriz[i][j];
        }
    }

    cin >> quantidadeCampos;

    for(int i = 0; i < quantidadeCampos; i++){
        cin >> coordX >> coordY;

        answer += matriz[coordX][coordY];
    }

    cout << answer << endl;
}

int main() {
    desync;
    solve();
}