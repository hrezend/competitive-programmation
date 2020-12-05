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
typedef vector<int> vi;
typedef vector<pii> vpii;
typedef vector<pll> vpll;

int main(){
    int n,maior = INT_MIN,ans = 100, aux; cin >> n;
    vi v; 
    v.pb(0);
    for(int i =1; i <= n ; i++){
        cin >> aux; v.pb(aux + v[i-1]);
        if(v[i] > maior) maior = v[i];
    }
    if(maior > 0) ans += maior;
    cout << ans<< endl;

}