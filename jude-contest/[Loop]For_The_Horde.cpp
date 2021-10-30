#include <bits/stdc++.h>
using namespace std;

void solve(){
    int quantidadeDeGolpes, potenciaDoGolpe;
    float espoliosMagicos = 0;
    
    cin >> quantidadeDeGolpes;

    for(int i = 0; i < quantidadeDeGolpes; i++){
        cin >> potenciaDoGolpe;

        espoliosMagicos += (potenciaDoGolpe * 0.05);
    }
    
    if(potenciaDoGolpe > espoliosMagicos){
        cout << "Fez de mim o que eu sou!" << endl;
    }
    else{
    	cout << "Escolheu o seu destino!" << endl;
    }
}

int main(){
    solve();
}
