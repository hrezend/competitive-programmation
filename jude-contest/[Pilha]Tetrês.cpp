#include <bits/stdc++.h>
#define desync ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define endl '\n'
#define out(x) cout << x << endl
using namespace std;

bool verificarPerfeicao(string a, string b){
    int contadorDeDiferencas = 0;

    for(int i = 0; i < 3; i++){
        if(a[i] != b[i]){
            contadorDeDiferencas++;
        }
    }
    
    if(contadorDeDiferencas == 3){
        return true;
    }
    return false;
}


void solve(){
    //variables
    int quantidadeDeBlocos, alturaMaximaDaTorre, scoreDoJogador = 0;
    string input;
    stack <string> blocos;

    //input
    cin >> quantidadeDeBlocos >> alturaMaximaDaTorre;

    for(int i = 0; i < quantidadeDeBlocos; i++){ //faco uma insercao fora do laço pra já começar o laço com comparacao e decisao com os restos dos dados
        cin >> input;

        if(!blocos.empty()){
            if(verificarPerfeicao(blocos.top(), input)){
                scoreDoJogador += 10;
                blocos.pop();
            }
            else{
                blocos.push(input);
            }
        }
        else{
            blocos.push(input);
        }

        if(blocos.size() == alturaMaximaDaTorre){
            break;
        }
    }

    //output
    if(blocos.size() == alturaMaximaDaTorre){
        out("game over");
    }
    else{
        out(scoreDoJogador);
    }
}

int main(){
    desync;
    solve();
}