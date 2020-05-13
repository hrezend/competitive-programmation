//Author: Hérson Reis Rezende dos Santos
//Site: hrezend.github.io

#include <bits/stdc++.h>
#define desync ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
using namespace std;

int main(){
    desync;
    int N;
    cin >> N;

    for(int i = 1; i <= N; i++){
        cout << i << " " << i*i << " " << i*i*i << endl;
        cout << i << " " << (i*i)+1 << " " << (i*i*i)+1 << endl;
    }
}
