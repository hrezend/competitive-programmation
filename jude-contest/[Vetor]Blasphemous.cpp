#include <bits/stdc++.h>
#define desync ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define endl '\n'
using namespace std;

void solve(){
    bool flag = true;
    vector <int> fases;
    int quantidadeDeFases, input, lifeTotal, lifeAtual;

    cin >> quantidadeDeFases;

    for(int i = 0; i < quantidadeDeFases; i++){
        cin >> input;
        fases.push_back(input);
    }

    cin >> lifeTotal;
    lifeAtual = lifeTotal;

    for(int i = 0; i < quantidadeDeFases; i++){
        if(fases[i] > 1){
            lifeAtual = lifeAtual - fases[i];
        }
        if(fases[i] == 1){
            lifeAtual = lifeTotal;
        }
        if(lifeAtual <= 0){
            flag = false;
        }
    }

    if(flag){
        cout << "Yes, you can" << endl;
    }
    else{
        cout << "You Died" << endl;
    }

}

int main(){
    desync;
	solve();
}