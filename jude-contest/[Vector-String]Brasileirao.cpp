#include <bits/stdc++.h>
#define desync ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define endl '\n'
#define out(x) cout << x << endl
using namespace std;

void solve(){
    //variables declaration
    string input;
    vector <string> times;
    int quantidadeDeTimes;

    //data input
    cin >> quantidadeDeTimes;
    cin.ignore();

    for(int i = 0; i < quantidadeDeTimes; i++){
        getline(cin, input);
        times.push_back(input);
    }

    //data output
    int auxiliar = quantidadeDeTimes;

    for(int i = 0; i < quantidadeDeTimes/2; i++){
        cout << times[i] << " X " << times[auxiliar-1] << endl;
        auxiliar--;
    }
}

int main(){
    desync;
    solve();
}