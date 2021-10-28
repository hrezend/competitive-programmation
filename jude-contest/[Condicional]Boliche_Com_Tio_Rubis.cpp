#include <bits/stdc++.h>
using namespace std;

int main(){
    int quantidadeDePistas, quantidadeDePessoas, quantidadeDeAlunos;
    cin >> quantidadeDePistas >> quantidadeDePessoas >> quantidadeDeAlunos;
    
    if(quantidadeDePistas*quantidadeDePessoas > quantidadeDeAlunos){
        cout << "S" << endl;
    }
    else{
        cout << "N" << endl;
    }

}
