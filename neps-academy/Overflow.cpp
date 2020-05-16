//Author: Herson Rezende - 2ºSM de CC - UFBA - 2020
//Site: hrezend.github.io

#include <bits/stdc++.h>
#define desync ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define endl '\n'
using namespace std;

int main(){
	desync;
	
	int N, P, Q;
	char C;
	
	cin >> N >> P >> C >> Q;	

	if(C == '+'){
		if(P+Q > N){
			cout << "OVERFLOW" << endl;
		}
		else{
			cout << "OK" << endl;
		}
	}
	else if(C == '*'){
		if(P*Q > N){
			cout << "OVERFLOW" << endl;
		}
		else{
			cout << "OK" << endl;
		}
	}
}
