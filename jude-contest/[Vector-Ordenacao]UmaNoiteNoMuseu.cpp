//Author: Hrz - 2ºSM de CC / Laboratório de Programação
#include <bits/stdc++.h>
#define desync ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define endl '\n'
using namespace std;

int main(){
    desync;
    int Repeticoes;
    cin >> Repeticoes;
    vector <int> Tamanhos;
    int input;
    int Contador = 0;
    int ValorNovo;
    
    for(int i = 0; i < Repeticoes; i++){
        cin >> input;
        Tamanhos.push_back(input);
    }

    sort(Tamanhos.begin(), Tamanhos.end());

    for(int i = 1; i < Repeticoes; i++){
		if(Tamanhos[i] != Tamanhos[i-1]+1){
		    ValorNovo = Tamanhos[i]-Tamanhos[i-1];
            Contador = Contador + (ValorNovo-1);
        }
	}
	
    cout << Contador << endl;
}

