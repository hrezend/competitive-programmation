//Author: Hrz - 2ºSM de CC / Laboratório de Programação
#include <bits/stdc++.h>
#define desync ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define endl '\n'
using namespace std;

void sortString(string &str){
	sort(str.begin(), str.end());
}

int main(){
	
	desync;
	string S, E;	
	cin >> S >> E;
	
	sortString(S);
	sortString(E);
	if(S == E){
		cout << "Sim" << endl;
	}
	else{
		cout << "Nao"<< endl;
	}
	
}
