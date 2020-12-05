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
int mat[12][12];
int main(){
    int n,maior = INT_MIN,ans, aux, x; cin >> n;
    int d, l, r, c;
  	for(int i =0 ; i < n ; i++){
      cin >> d >> l >> r >> c;
      if(d == 0){
        x = c+l-1;
        if(x > 10) {
          cout << "N\n";return 0;
        }
        for(int j = c; j <= x; j++){
          if(mat[r][j] != 0){
            cout << "N\n";return 0;
          }
          mat[r][j] = 1;
        }
      }else{
        x = r+l-1;
        if(x > 10) {
          cout << "N\n";return 0;
        }
        for(int j = r; j <= x; j++){
          if(mat[j][c] != 0){
            cout << "N\n";
            return 0;
          }
          mat[j][c] = 1;
        }
      }
      
    }
    cout << "Y\n";
}