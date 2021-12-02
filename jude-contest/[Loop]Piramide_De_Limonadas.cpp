#include <bits/stdc++.h>
#define desync ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define endl '\n'
using namespace std;

void solve(){
    int number, nivel = 1;
    cin >> number;

    for(int i = 1; i <= number; i++){
        for(int j = 0; j < (number-nivel); j++){
            cout << " ";
        }
        for(int j = 0; j < (nivel*2-1); j++){
            cout << i;
        }
        for(int j = 0; j < (number-nivel); j++){
            cout << " ";
        }
        cout << endl;
        nivel++;
    }
}

int main(){
    desync;
	solve();
}