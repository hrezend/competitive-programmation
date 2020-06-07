//Author: Herson Rezende - 2ºSM de CC - UFBA - 2020
//Site: hrezend.github.io
#include <bits/stdc++.h>
#define desync ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define pb push_back
#define endl '\n'

using namespace std;

int main(){

	desync;
	int larg, comp;
    cin >> larg >> comp;
	
	int laj1 = larg*comp+(larg-1)*(comp-1);
	int laj2 = (comp-1)*2+(larg-1)*2;

    cout << laj1 << endl;
	cout << laj2 << endl;

}
