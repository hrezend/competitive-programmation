#include <bits/stdc++.h>
#define desync ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define endl '\n'
#define out(x) cout << x << endl
using namespace std;

void solve(){
    //variables
    queue <int> processos;
    int input, processoTratado, quantidadeDeProcessos, tempoDeParadaDaAplicacao;

    //input
    cin >> quantidadeDeProcessos >> tempoDeParadaDaAplicacao;
    for(int i = 0; i < quantidadeDeProcessos; i++){
        cin >> input;
        processos.push(input);
    }

    //processing
    for(int i = 0; i < tempoDeParadaDaAplicacao; i++){
        if(processos.empty()){
            break;
        }

        processoTratado = processos.front() - 1;

        if(processoTratado > 0){
            processos.push(processoTratado);
            processos.pop();
        }
        else{
            processos.pop();
        }
    }

    //output
    if(processos.empty()){
        out("pronto");
    }
    else{
        out(processos.size());
        while(!processos.empty()){
            cout << processos.front() << " ";
            processos.pop();
        }
        cout << endl;
    }
}

int main(){
    desync;
    solve();
}