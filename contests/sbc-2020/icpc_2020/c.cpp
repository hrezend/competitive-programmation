#include <bits/stdc++.h>
using namespace std;
#define desync ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define endl '\n'
#define pb push_back
#define ff first
#define ss second
#define td(v) v.begin(), v.end()
#define ms(v, x) memset(v, x, sizeof(v))
#define rep(i, a, n) for (int i = (a); i < (n); i++)
#define MAXN 10005
#define INF 0x3f3f3f3f
typedef long int li;
typedef long long ll;
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;
typedef vector<pair<string, bool>> vi;
typedef vector<pii> vpii;
typedef vector<pll> vpll;

int main(){
    desync;
    map<string,pair<int, int>> mapa;
    pair<string,bool> aux;
    vi va, vb;
    int m, n; cin >> m >> n;
    int la = m, lb = n;

    for(int i = 0; i < m; i++){
      cin >> aux.ff;aux.ss = true; va.pb(aux);
    }
    for(int i = 0; i < n; i++){
      cin >> aux.ff;aux.ss = true; vb.pb(aux);
    }
    for(int i = 0; i < m; i++){
      for(int j = 0; j < n; j++){
        string concat = va[i].ff + vb[j].ff;
        if(mapa.count(concat)){
          va[mapa[concat].ff].ss = false;
          vb[mapa[concat].ss].ss = false;
          va[i].ss = false;
          vb[j].ss = false;
        }
        else{
          mapa[concat] = make_pair(i, j);
        } 
      }
    }
    int ca = 0, cb = 0;
    for(auto i : va){
      ca += i.ss;
    }
    for(auto i : vb){
      cb += i.ss;
    }
    cout << ca << " " << cb << endl;
}