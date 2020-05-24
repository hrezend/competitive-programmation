//Author: Herson Rezende - 2ºSM de CC - UFBA - 2020
//Site: hrezend.github.io
#include <bits/stdc++.h>
#define desync ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define pb push_back
#define endl '\n'

using namespace std;

int main(){

	desync;
	set <int> group;
    int n, input;
    cin >> n;

    for(int i = 0; i < n; i++){
        cin >> input;
        group.insert(input);
    }

    cout << group.size() << endl;

}
