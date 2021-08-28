#include <bits/stdc++.h>
#define desync ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define endl '\n'
using namespace std;

struct Ingresso{
    string nomeDoFilme;
    double valorDoIngresso;   
};

bool cmpIngresso(Ingresso a, Ingresso b){
  return (a.nomeDoFilme > b.nomeDoFilme || a.nomeDoFilme == b.nomeDoFilme && a.valorDoIngresso > b.valorDoIngresso);
}

void solve(){
	desync;
	
	Ingresso input;
    vector <Ingresso> ingressos;
    map <string, int> quantidadeDeIngressosPorFilme;
    
    while(cin >> input.nomeDoFilme >> input.valorDoIngresso){
        ingressos.push_back(input);
        
        if(quantidadeDeIngressosPorFilme.count(input.nomeDoFilme)){
        	quantidadeDeIngressosPorFilme[input.nomeDoFilme]++;
        }
        else{
        	quantidadeDeIngressosPorFilme.insert(make_pair(input.nomeDoFilme, 1));
        }
    }
    
    sort(ingressos.rbegin(), ingressos.rend(), cmpIngresso);

    for(auto i = quantidadeDeIngressosPorFilme.begin(); i != quantidadeDeIngressosPorFilme.end(); i++){
		cout << "Filme: " << (*i).first << " - Quantidade de Ingressos: " << (*i).second << endl;
    }
    
    for(auto i = ingressos.begin(); i != ingressos.end(); i++){
		cout << "Filme: " << (*i).nomeDoFilme << " - Valor: " << (*i).valorDoIngresso << endl;
    }

}

int main(){
    solve();
}
