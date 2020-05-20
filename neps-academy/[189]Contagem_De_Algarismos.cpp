//Author: Herson Rezende - 2ºSM de CC - UFBA - 2020
//Site: hrezend.github.io

#include <bits/stdc++.h>
#define desync ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define endl '\n'
using namespace std;

int main(){
	desync;
	
	int N;
	cin >> N;
	int Amount[10] = {0};
	string In;
	
	for(int i = 0; i < N; i++){
		cin >> In;
		int Tamanho = In.length();
		for(int j = 0; j < Tamanho; j++){
			if(In[j] == '0'){
				Amount[0]++;
			}
			else if(In[j] == '1'){
				Amount[1]++;
			}
			else if(In[j] == '2'){
				Amount[2]++;
			}
			else if(In[j] == '3'){
				Amount[3]++;
			}
			else if(In[j] == '4'){
				Amount[4]++;
			}
			else if(In[j] == '5'){
				Amount[5]++;
			}
			else if(In[j] == '6'){
				Amount[6]++;
			}
			else if(In[j] == '7'){
				Amount[7]++;
			}
			else if(In[j] == '8'){
				Amount[8]++;
			}
			else if(In[j] == '9'){
				Amount[9]++;
			}
		}
	}

	for(int i = 0; i < 10; i++){
		cout << i << " - " << Amount[i] << endl;
	}
}
