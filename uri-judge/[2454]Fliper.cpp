//Author: Hrz - 2ºSM de CC
//Site: hrezend.github.io

#include <bits/stdc++.h>
#define desync ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define endl '\n'
using namespace std;

int main(){

	desync;
	int P, R;
	cin >> P >> R;
	
	if(P == 0){
		cout << "C" << endl;
	}
	else{
		if(R == 0){
			cout << "B" << endl;
		}
		else{
			cout << "A" << endl;
		}
	}

}
