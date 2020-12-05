#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define desync ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define pb push_back

int main(){
    desync;
    vector<long long>v;
    int n; cin >> n;

    v.pb(1);v.pb(1);

    for(int i = 2; i <= 8; i++){
        v.pb( (i * v[i-1]));
    }
    int i = 8, count = 0;

    while(n > 0){
        if(n >= v[i]){
            count++;
            n -= v[i];
        }else{
            i--;
        }
    }
    cout << count << endl;
}