//Author: Hrz - 2ºSM de CC
//Site: hrezend.github.io

#include <bits/stdc++.h>
#define desync ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define endl '\n'
using namespace std;

int main(){
	vector <int> Par;
	vector <int> Impar;

	int input;

	for(int i = 0; i < 15; i++){
		if(Par.size() == 5){
			for(int k = 0; k < Par.size(); k++){
				cout << "par[" << k << "] = " << Par[k] << endl;
			}
			Par.clear();
		}
		if(Impar.size() == 5){
			for(int k = 0; k < Impar.size(); k++){
				cout << "impar[" << k << "] = " << Impar[k] << endl;
			}
			Impar.clear();
		}		

		cin >> input;
		if(input % 2 == 0){
			Par.push_back(input);
		}
		else{
			Impar.push_back(input);
		}
	}

		for(int k = 0; k < Impar.size(); k++){
				cout << "impar[" << k << "] = " << Impar[k] << endl;
		}
		for(int k = 0; k < Par.size(); k++){
				cout << "par[" << k << "] = " << Par[k] << endl;
		}


}
