//Author: Herson Rezende - 2ºSemestre de CC - UFBA - 2020
//Site: hrezend.github.io/resume-web
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
	int a, b, c, d;
	int misha_points = 0, vasya_points = 0;
	
	cin >> a >> b >> c >> d;
	
	misha_points = max((3*a)/10, a - (a/250) * c);
	vasya_points = max((3*b)/10, b - (b/250) * d);
	
	if(misha_points > vasya_points){
		out("Misha");
	}
	else if(vasya_points > misha_points){
		out("Vasya");
	}
	else{
		out("Tie");
	}
	
}