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
    double resposta = 100001;
    int n, input;
    vector <int> v;
    cin >> n;
   
    for(int i = 0; i < n; i++){
      cin >> input;
      v.pb(input);
    }
   
    sort(v.begin(), v.end());
   
    for(int i = 0; i < n; i++){
        double auxiliar;
        if(v[i] > (i+1)){
          out("-1");
          return 0;
        }
       
        auxiliar = (double) v[i]/(i+1);
        if(resposta >= auxiliar){
	        resposta = auxiliar;
        }
            
    }
   
  cout << fixed << setprecision(6) << resposta << endl;
}