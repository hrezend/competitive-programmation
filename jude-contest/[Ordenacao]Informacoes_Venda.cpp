//Author: Hrz - 2ºSM de CC
//Site: hrezend.github.io

#include <bits/stdc++.h>
#define desync ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define endl '\n'
using namespace std;

struct Usuario{
    	string Nome;
	int Valor;
};

bool cmpValor(Usuario a, Usuario b){
  return (a.Valor > b.Valor);
}

int main(){
    desync;
    vector <Usuario> usuarios;
    vector <Usuario>::iterator it;
    Usuario input;
    
	int N, Q;
	cin >> N >> Q;

	for(int i = 0; i < N; i++){
		cin >> input.Nome >> input.Valor;

		if(input.Nome == "Nark"){
			continue;	
		}		
		usuarios.push_back(input);
    }

    sort(usuarios.begin(), usuarios.end(), cmpValor);

    for(it = usuarios.begin(); it < usuarios.begin()+Q; it++){		
		cout << (*it).Nome << endl;
	}
	
}
