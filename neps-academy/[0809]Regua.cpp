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
  string input;
  int count_mov = 0;
  int num_roleta = 0, num_atual;
  int dir, esq;

  cin >> input;

  for(int i = 0; i < input.length(); i++){
    num_atual = input[i] - 48;
    dir = abs(num_roleta-num_atual);
    esq = 10 - dir;
    count_mov += min(dir, esq);
    num_roleta = num_atual;
  }
  
  out(count_mov);
}