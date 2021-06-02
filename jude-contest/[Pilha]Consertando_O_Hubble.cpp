#include <bits/stdc++.h>
#define desync ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define endl '\n'
#define out(x) cout << x << endl
using namespace std;

void solve(){

    stack <int> componentes;
    int quantidadeDeComponentes, input, answer = 0;
    cin >> quantidadeDeComponentes;

    for(int i = 0; i < quantidadeDeComponentes; i++){
        cin >> input;

        if(!componentes.empty() && input == (-1)){
            componentes.pop();
        }
        else if(input != (-1)){
            componentes.push(input);
        }
    }

    while(!componentes.empty()){
        answer += componentes.top();
        componentes.pop();
    }

    out(answer);
}

int main(){
    desync;
    solve();
}