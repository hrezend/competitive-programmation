#include <bits/stdc++.h>
#define desync ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define endl '\n'
using namespace std;

void solve(){
    int tamanho;
    cin >> tamanho;

    int vetor[tamanho], count = 0, aux = 0;

    for(int i = 0; i < tamanho; i++){
        cin >> vetor[i];
        count += vetor[i];
    }

    for(int i = 0; i < tamanho; i++){
        aux += vetor[i];
        if(aux == count/2){
            cout << i+1;
            break;
        }
    }
}

int main() {
    desync;
    solve();
} 