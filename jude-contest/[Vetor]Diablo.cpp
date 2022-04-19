#include <bits/stdc++.h>
using namespace std;

struct Item {
    int value;
    int damage;
};

int main() {
    Item input;
    Item itens[1001];
    int saldo, qtdItens, answer = -1, maiorDamage = -1;
    cin >> qtdItens;
    
    for(int i = 0; i < qtdItens; i++) {
        cin >> input.value;
        itens[i].value = input.value;
    }
    
    for(int i = 0; i < qtdItens; i++) {
        cin >> input.damage;
        itens[i].damage = input.damage;
    }
    
    cin >> saldo;
    
    for(int i = 0; i < qtdItens; i++) {
        if(itens[i].damage > maiorDamage && itens[i].value <= saldo) {
            maiorDamage = itens[i].damage;
            answer = i;
        }
    }
    
    if(answer == -1) {
        cout << "Yan Pobre" << endl;
    }
    else {
        cout << itens[answer].value << " " << itens[answer].damage << endl;
    }
}
