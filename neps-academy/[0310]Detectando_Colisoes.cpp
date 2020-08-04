//Author: Herson Rezende - 2ºSemestre de CC - UFBA - 2020
//Site: hrezend.github.io/resume-web
#include <bits/stdc++.h>
#define desync ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define endl '\n'
using namespace std;

void solve(){
	int ax0, ay0, ax1, ay1, axmin, aymin, axmax, aymax;
	int bx0, by0, bx1, by1, bxmin, bymin, bxmax, bymax;
	
	cin >> ax0 >> ay0 >> ax1 >> ay1;
	cin >> bx0 >> by0 >> bx1 >> by1;
	axmin = min(ax0, ax1);
	aymin = min(ay0, ay1);
	bxmin = min(bx0, bx1);
	bymin = min(by0, by1);
	axmax = max(ax0, ax1);
	aymax = max(ay0, ay1);
	bxmax = max(bx0, bx1);
	bymax = max(by0, by1);
	
	if(axmin > bxmax || aymin > bymax || bymin > aymax || bxmin > axmax){
		cout << "0" << endl;
	}
	else{
		cout << "1" << endl;
	}
}

int main(){
  desync;
  solve();
}