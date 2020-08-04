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
  int qtd_dias, indice_dia = 0;
  string input;
  cin >> qtd_dias >> input;
  int dias[qtd_dias];

  for(int i = 0; i < qtd_dias; i++){
    dias[i] = 0;
  }

  for(int i = 0; i < qtd_dias; i++){
    if(input[indice_dia] == 'A'){
      dias[i] = dias[i-1] + 1;
    }
    else if(input[indice_dia] == 'B'){
      if(input[indice_dia-1] == 'B'){
        
      }
      else{
        dias[i] = dias[i-1] - 1;
      }
    }

    indice_dia++;
  }

  for(int i = 0; i < qtd_dias; i++){
    cout << dias[i] << " ";
  }
  cout << endl;
}