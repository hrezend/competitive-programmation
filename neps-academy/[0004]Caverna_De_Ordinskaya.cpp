//Author: Herson Rezende - 2ºSemestre de CC - UFBA - 2020
//Site: hrezend.github.io
#include <bits/stdc++.h>
#define desync ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define endl '\n'
#define pb push_back
#define all(x) (x.begin(), x.end())
#define rall(x) (x.rbegin(), x.rend())
#define mkp(x,y) (make_pair(x,y))
#define out(x) cout << x << endl
using namespace std;

int main(){
	desync;
    long long resultado = 0;
    int n, m, v[10006] = {0};
    cin >> n >> m;
    
    for (int i=1;i<=n;i++){
        cin >> v[i];
    }
    
    for (int i=1;i<=n;i++){
        if(min(v[i],m-v[i])>=v[i-1]){
            v[i] = min(v[i],m-v[i]);
        }    
        else if(max(v[i],m-v[i])>=v[i-1]){
            v[i] = max(v[i],m-v[i]);
		}
        else{
            out("-1");
            return 0;
        }
    }
    
    for(int i=1;i<=n;i++){
        resultado += v[i];
    }
    cout << resultado << endl;
}
