//Author: Hrz - 2ºSM de CC
//Site: hrezend.github.io

#include <bits/stdc++.h>
#define desync ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define endl '\n'
using namespace std;

int main(){
	desync;
	
	string Frase = "LIFE IS NOT A PROBLEM TO BE SOLVED";
	int N;
	cin >> N;

	for(int i = 0; i < N; i++){
		cout << Frase[i];
	}
	
	cout << endl;

}
