//Author: Herson Rezende - 2ºSemestre de CC - UFBA - 2020
//Site: hrezend.github.io/resume-web
#include <bits/stdc++.h>
#define desync ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define endl '\n'
#define out(x) cout << x << endl
using namespace std;

void solve(){
	int t;
	cin >> t;
	
	while(t--){
		set <int> nums;
		bool flag = true;
		int tam_v, input, anterior;
		cin >> tam_v;
		
		for(int i = 0; i < tam_v; i++){
			cin >> input;
			nums.insert(input);
		}

		anterior = *nums.begin();
		for(auto i = nums.begin(); i != nums.end(); i++){
			if(abs(anterior - *i) > 1){
				flag = false;
			}
			anterior = *i;
		}
		
		if(nums.size() == 1 || flag){
			out("YES");
		}
		else{
			out("NO");
		}
	}
}

int main(){
  desync;
  solve();
}