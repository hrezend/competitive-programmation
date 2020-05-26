//Author: Herson Rezende - 2ºSM de CC - UFBA - 2020
//Site: hrezend.github.io
#include <bits/stdc++.h>
#define desync ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define pb push_back
#define endl '\n'
#define debug(x) cout << "debug: " << x << endl
#define lng(x) x.length()
#define sz(x) (int)x.size()
#define all(x) (x.begin(), x.end())
#define rall(x) (x.rbegin(), x.rend())
#define top(x) (x.top())
#define front(x) (x.front())
#define pop(x) (x.pop())
#define empty(x) (x.empty())
#define mkp(x,y) (make_pair(x,y))

using namespace std;

int main(){
    desync;
	int res, n;
    map<int, pair<int, int>> mapa;
    pair<int, char> aux;
    vector<pair<int, char>> v;
    cin >> n;
    for(i = 0; i< n ; i++){
        cin >> aux.fst >> aux.snd;
        mapa[aux.fst] = make_pair(0,0);
        v.pb(aux);
    } 
    for(i = 0; i < n ; i++){
        if(v[i].snd == 'D')
            mapa[v[i].fst].snd++;
        else
            mapa[v[i].fst].fst++;
    }
    for(auto i = mapa.begin() ; i != mapa.end(); i++ ){
        res += min((*i).snd.fst , (*i).snd.snd);
    }
    cout << res << endl;
}
