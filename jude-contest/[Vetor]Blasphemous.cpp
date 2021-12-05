#include <bits/stdc++.h>
#define desync ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define endl '\n'
using namespace std;

void solve() {
    int qtdFases;
    cin >> qtdFases;

    int fases[qtdFases], vidaMaxima, vidaAtual, count = 0;

    for(int i = 0; i < qtdFases; i++) {
        cin >> fases[i];
    }

    cin >> vidaMaxima;
    vidaAtual = vidaMaxima;

    for(int i = 0; i < qtdFases; i++) {
        if(fases[i] == 1){
            vidaAtual = vidaMaxima;
        }
        else if(fases[i] > 1){
            vidaAtual = vidaAtual - fases[i];

            if(vidaAtual <= 0){
                count++;
            }
        }
    }
    
    if(count == 0) {
        cout << "Yes, you can" << endl;
    }
    else {
        cout << "You Died" << endl;
    }
}

int main() {
    desync;
    solve();
} 