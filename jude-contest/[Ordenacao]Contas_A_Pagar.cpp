#include <bits/stdc++.h>
using namespace std;

struct Conta {
    int id;
    int valor;
    int diasParaVencer;
};

bool compararConta(Conta a, Conta b){
  return (a.diasParaVencer < b.diasParaVencer || a.diasParaVencer == b.diasParaVencer && a.valor > b.valor || a.diasParaVencer == b.diasParaVencer && a.valor == b.valor && a.id < b.id);
}

int main(){
    vector <Conta> contas;
    vector <Conta>::iterator it;
    Conta input;
    int qtdContas;
    cin >> qtdContas;
    
    for(int i = 0; i < qtdContas; i++) {
      cin >> input.id >> input.valor >> input.diasParaVencer;
      contas.push_back(input);
    }
    
    sort(contas.begin(), contas.end(), compararConta);
    
    for(it = contas.begin(); it < contas.begin()+qtdContas; it++){
		  cout << (*it).id << endl;
    }
}
