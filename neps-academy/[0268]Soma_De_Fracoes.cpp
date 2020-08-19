//Author: Herson Rezende - 2ºSemestre de CC - UFBA - 2020
//Site: hrezend.github.io/resume-web
#include <bits/stdc++.h>
#define desync ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define endl '\n'
using namespace std;

int mdc(int a, int b){
  return (b == 0 ? a : mdc(b, a%b));
}
int mmc(int a, int b){
    return a * (b / mdc(a, b));
}

void solve(){
	int dividendo1, divisor1, dividendo2, divisor2;
	cin >> dividendo1 >> divisor1 >> dividendo2 >> divisor2;
	
	int divisor_ans = mmc(divisor1, divisor2);
	int pt1 = (divisor_ans/divisor1) * dividendo1;
	int pt2 = (divisor_ans/divisor2) * dividendo2;
	int dividendo_ans = pt1+pt2;	
	int ans_divisor = divisor_ans;
	int ans_dividendo = dividendo_ans;
	
	for(int i = 2; i <= dividendo_ans; i++){
		if(ans_divisor % i == 0 && ans_dividendo % i == 0){
			ans_divisor = ans_divisor/i;
			ans_dividendo = ans_dividendo/i;
			break;
		}
	}
	cout << ans_dividendo << " " << ans_divisor << endl;
}

int main(){
  desync;
  solve();
}