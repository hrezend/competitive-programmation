#include <bits/stdc++.h>
using namespace std;

int main() {
    int count = 0;
    double qtd, vet[101], valor;
    cin >> qtd;
    
    for(int i = 0; i < qtd; i++) {
        cin >> vet[i];
    }
    
    cin >> valor;
    
    for(int i = 0; i < qtd; i++) {
        if(vet[i] > valor) {
            count++;    
        }
    }
    
    if(count >= 2) {
        cout << "Taxi" << endl;    
    }
    else {
        cout << "Onibus" << endl;
    }
}
