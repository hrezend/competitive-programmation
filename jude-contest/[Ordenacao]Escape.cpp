//Author: Hrz - 2ºSM de CC
//Site: hrezend.github.io

#include <bits/stdc++.h>
#define desync ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define endl '\n'
using namespace std;

int main(){
    desync;
    vector <double> tempos;
    double input;
    
	int N;
	cin >> N;

	for(int i = 0; i < N; i++){
		cin >> input;
		tempos.push_back(input);
    }

    sort(tempos.rbegin(), tempos.rend());

    for(int i = 0; i < 3; i++){
		cout << fixed << setprecision(2) << tempos[i] << endl;
	}
	
}
