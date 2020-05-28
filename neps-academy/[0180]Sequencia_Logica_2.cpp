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
	int a_ini = 1, b_ini = -1, count = 0;
	int a = a_ini, b = b_ini;

	cout << "a = " << 0 << " <-> " << "b = " << 1 << endl;
	for(;;){
		if(count == 1){
			b += 4;
		}
		else if(count == 2){
			b -= 2;
			a++;
			count = 0;
		}
		if(a == 31 && b == 63){
			break;
		}

		cout << "a = " << a << " <-> " << "b = " << b << endl;
		count++;
	}
}
