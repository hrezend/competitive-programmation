#include <bits/stdc++.h>
using namespace std;

int main() {
    int trap, qtdBaloes, answer = 0, baloes[1001] = {0};
    cin >> qtdBaloes;
    
    for(int i = 0; i < qtdBaloes; i++) {
        cin >> baloes[i];
    }
    
    cin >> trap;
    
    for(int i = 0; i < qtdBaloes; i++) {
        if(baloes[i] == trap) {
            answer -= trap;
        }
        else {
            answer += baloes[i];    
        }
    }
    
    cout << answer << endl;
}
