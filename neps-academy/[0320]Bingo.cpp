//Author: Herson Rezende - 2ºSemestre de CC - UFBA - 2020
//Site: hrezend.github.io
#include <bits/stdc++.h>
#define desync ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define endl '\n'
#define pb push_back

using namespace std;

int main(){
	desync;
	int n, b;
	cin >> n >> b;

	while(n != 0 && b != 0){
		int flag = true;
		int bolas[n+1] = {0};	
		int globo[b] = {0};
		set <int> numbers;

		for(int i = 0; i <= n; i++){
			bolas[i] = i;
		}
		for(int i = 0; i < b; i++){
			cin >> globo[i];	
		}
		sort(globo, globo+b);

		for(int i = 0; i < b; i++){
			for(int j = i+1; j < b; j++){
				numbers.insert(abs(globo[i]-globo[j]));
			}
		}
	
		if(numbers.size() == n){
			cout << "Y" << endl;
		}
		else{
			cout << "N" << endl;
		}
		cin >> n >> b;
	}
}
