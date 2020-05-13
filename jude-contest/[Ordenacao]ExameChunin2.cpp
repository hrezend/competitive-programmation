//Author: Hrz - 2ºSM de CC / Laboratório de Programação
#include <bits/stdc++.h>
#define desync ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define endl '\n'
using namespace std;

int main(){

	desync;
	int J, K;
	cin >> J >> K;
  vector <int> Ninjas;

  int input;
  for(int i = 0; i < J; i++){
    cin >> input;
    Ninjas.push_back(input);
  }
  sort(Ninjas.rbegin(), Ninjas.rend());

	for(int k = 0; k < K; k++){
		cout << Ninjas[k] << endl;
	}

}

