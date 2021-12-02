#include <bits/stdc++.h>
#define desync ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define endl '\n'
using namespace std;

void solve(){
    int tamanho;
    cin >> tamanho;

    int matriz[tamanho][tamanho], linha, coluna;
    int countHarry = 0, countRon = 0;

    for(int i = 0; i < tamanho; i++){
        for(int j = 0; j < tamanho; j++){
            cin >> matriz[i][j];
        }
    }

    cin >> linha >> coluna;

    for(int i = 0; i < tamanho; i++){
        countRon += matriz[i][coluna];
        matriz[i][coluna] = 0;

        countHarry += matriz[linha][i];
        matriz[linha][i] = 0;
    }

    cout << "Harry " << countHarry << endl;
    cout << "Ron " << countRon << endl;
}

int main() {
    desync;
    solve();
}