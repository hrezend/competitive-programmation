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

struct agenda{
	int inicio;
	int fim;
};

int comp(agenda a, agenda b){
	return a.fim < b.fim;
}

int main(){
	desync;
	int n, count = 0, aux = 0;

	cin >> n;
	agenda a[n];

	for(int i = 0; i < n; i++){
		cin >> a[i].inicio >> a[i].fim;
	}

	sort(a, a+n, comp);

	for(int i = 0; i < n; i++){
		if(a[i].inicio >= aux){
			count++;
			aux = a[i].fim;
		}
	}

	out(count);
}
