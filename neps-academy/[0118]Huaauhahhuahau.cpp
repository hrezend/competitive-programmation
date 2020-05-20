//Author: Herson Rezende - 2ºSM de CC - UFBA - 2020
//Site: hrezend.github.io

#include <bits/stdc++.h>
#define desync ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define endl '\n'
using namespace std;

int main(){
	desync;
	
	string In, Sequencia = "", Inversa = "";
	cin >> In;
	
	for(int i = 0; i < In.length(); i++){
		if(In[i] == 'a' || In[i] == 'e' || In[i] == 'i' || In[i] == 'o' || In[i] == 'u'){
			Sequencia += In[i];
		}
	}
	for(int i = In.length(); i >= 0; i--){
		if(In[i] == 'a' || In[i] == 'e' || In[i] == 'i' || In[i] == 'o' || In[i] == 'u'){
			Inversa += In[i];
		}
	}

	if(Sequencia == Inversa){
		cout << "S" << endl;
	}
	else{
		cout << "N" << endl;
	}
}
