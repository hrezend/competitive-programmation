//Author: Hrz - 2ºSM de CC / Laboratório de Programação
#include <bits/stdc++.h>
#define desync ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define endl '\n'
using namespace std;

struct Data{
    int Dia, Mes, Ano;    
};

bool cmpData(Data a, Data b){
  return (a.Ano > b.Ano || a.Ano == b.Ano && a.Mes > b.Mes || a.Ano == b.Ano && a.Mes == b.Mes && a.Dia > b.Dia);
}

int main(){
    desync;
    vector <Data> datas;
    vector <Data>::iterator it;
    Data input;
    
    while(cin >> input.Dia >> input.Mes >> input.Ano){
        datas.push_back(input);
    }

    sort(datas.rbegin(), datas.rend(), cmpData);

    for(it = datas.begin(); it < datas.end(); it++){
		cout << (*it).Dia << " " << (*it).Mes << " " << (*it).Ano << endl;
	}
	
}
