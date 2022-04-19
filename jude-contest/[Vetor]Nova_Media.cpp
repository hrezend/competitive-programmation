#include <bits/stdc++.h>
using namespace std;

int main() {
    int qtdCasos, qtdAlunos, qtdProvas;
    cin >> qtdCasos;
    
    while(qtdCasos--) {
        cin >> qtdAlunos >> qtdProvas;
        double m[qtdAlunos][qtdProvas], sum = 0;
        
        for(int i = 0; i < qtdAlunos; i++) {
            for(int j = 0; j < qtdProvas; j++) {
                cin >> m[i][j];
            }
        }
        
        for(int i = 0; i < qtdProvas; i++) {
            double maiorNota = 0.0;
            for(int j = 0; j < qtdAlunos; j++) {
                maiorNota = max(m[j][i], maiorNota);
            }
            sum += maiorNota;
        }
        
        if((sum / qtdProvas) >= 7) {
            cout << "aprovado" << endl;
        }
        else {
            cout << "reprovado" << endl;    
        }
    }

}
