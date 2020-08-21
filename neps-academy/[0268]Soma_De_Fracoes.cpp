//Author: Herson Rezende - 2ºSemestre de CC - UFBA - 2020
//Site: hrezend.github.io/resume-web
#include <bits/stdc++.h>
#define desync ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define endl '\n'
using namespace std;

long long mdc(long long a, long long b){
	return (b == 0 ? a : mdc(b, a%b));
}
long long mmc(long long a, long long b){
    return (a * (b / mdc(a, b)));
}

void solve(){
	long long dividendo1, divisor1, dividendo2, divisor2;
	cin >> dividendo1 >> divisor1 >> dividendo2 >> divisor2;
	
	long long divisor_ans = mmc(divisor1, divisor2);
	long long dividendo_ans = ((divisor_ans/divisor1) * dividendo1) + ((divisor_ans/divisor2) * dividendo2);
	long long num_redutivel = mdc(dividendo_ans, divisor_ans);	
	divisor_ans = divisor_ans/num_redutivel;
	dividendo_ans = dividendo_ans/num_redutivel;

	cout << dividendo_ans << " " << divisor_ans << endl;
}

int main(){
  desync;
  solve();
}