#include <bits/stdc++.h>
#define desync ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define endl '\n'
using namespace std;

void solve() {
    char terra[10][10];

    for(int i = 0; i < 10; i++){
        for(int j = 0; j < 10; j++){
            cin >> terra[i][j];
        }
    }
    
    for(int i = 0; i < 10; i++){
        for(int j = 0; j < 10; j++){
            if(j - 1 >= 0 && terra[i][j] == 't' && terra[i][j-1] == '*'){
                terra[i][j] = 'p';
            }
            else if(j + 1 < 10 && terra[i][j] == 't' && terra[i][j+1] == '*'){
                terra[i][j] = 'p';
            }
            else if(i - 1 >= 0 && terra[i][j] == 't' && terra[i-1][j] == '*'){
                terra[i][j] = 'p';
            }
            else if(i + 1 < 10 && terra[i][j] == 't' && terra[i+1][j] == '*'){
                terra[i][j] = 'p';
            }
        }
    }

    for(int i = 0; i < 10; i++){
        for(int j = 0; j < 10; j++){
            cout << terra[i][j] << ' ';
        }
        cout << endl;
    }
}

int main() {
    desync;
    solve();
}  