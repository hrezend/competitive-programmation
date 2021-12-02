#include <bits/stdc++.h>
#define desync ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define endl '\n'
using namespace std;

void solve(){
    char inicialDoNome;
    int nivelDeSaturacao;

    for(;;){
        cin >> inicialDoNome >> nivelDeSaturacao;

        if(inicialDoNome == '#'){
            break;
        }
        else if(nivelDeSaturacao < 90){
            cout << inicialDoNome << " Internação" << endl;
        }
        else{
            cout << inicialDoNome << " Alta" << endl;
        }
    }
}

int main(){
    desync;
	solve();
}