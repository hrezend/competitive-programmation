#include <bits/stdc++.h>
#define desync ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define endl '\n'
using namespace std;

void solve(){
    int resistencia, dano, count=0;
    cin >> resistencia >> dano;
  
    while(resistencia > 0){
        resistencia -= dano;
        dano--;
        count++;
        if(dano <= 0){
            break;
        }
    }

    if(resistencia < 0){
        cout << count;
    }
    else{
        cout << 'F';
    }
}

int main() {
  desync;
  solve();
}