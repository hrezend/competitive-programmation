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
	
	int a = 0;
	for(int b = 1; b <= 47; b++){
		if(b % 3 != 0){
			cout << "a = " << a << " <-> " << "b = " << b << endl;
		}
		else{
			a += 2;
		}
	}
}
