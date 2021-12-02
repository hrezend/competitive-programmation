#include <bits/stdc++.h>
#define desync ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define endl '\n'
using namespace std;

void solve(){
    bool flag = true;
    int temperatura, pressao;

    cin >> temperatura;

    for(;;){
        cin >> pressao;

        if(pressao == 0){
            break;
        }
        else if(pressao > temperatura){
            flag = false;
        }
    }

    if(flag){
        cout << "O Havai pode dormir tranquilo" << endl;
    }
    else{
        cout << "ALARME" << endl;
    }
}

int main(){
    desync;
	solve();
}