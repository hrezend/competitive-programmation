//Author: Hrz - 2ºSM de CC
//Site: hrezend.github.io

#include <bits/stdc++.h>
#define desync ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define endl '\n'
using namespace std;

struct Planeta{
    int ID;
	int Demolicao;
};

bool cmpDemolicao(Planeta a, Planeta b){
  return (a.Demolicao > b.Demolicao);
}

int main(){
    desync;
    vector <Planeta> planetas;
    vector <Planeta>::iterator it;
    Planeta input;
    
	int N;
	cin >> N;

	for(int i = 0; i < N; i++){
		cin >> input.ID >> input.Demolicao;		
		planetas.push_back(input);
    }

    sort(planetas.begin(), planetas.end(), cmpDemolicao);

    for(it = planetas.begin(); it < planetas.end(); it++){
		cout << (*it).ID << " " << (*it).Demolicao << endl;
	}
	
}
