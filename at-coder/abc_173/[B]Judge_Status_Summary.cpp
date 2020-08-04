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
	int n, count_ac = 0, count_wa = 0, count_tle = 0, count_re = 0;
	string input;
	
	cin >> n;
	for(int i = 0; i < n; i++){
		cin >> input;
		if(input == "AC"){
			count_ac++;
		}
		else if(input == "RE"){
			count_re++;
		}
		else if(input == "TLE"){
			count_tle++;
		}
		else if(input == "WA"){
			count_wa++;
		}
	}
	
	cout << "AC x " << count_ac << endl;
	cout << "WA x " << count_wa << endl;
	cout << "TLE x " << count_tle << endl;
	cout << "RE x " << count_re << endl;
}
