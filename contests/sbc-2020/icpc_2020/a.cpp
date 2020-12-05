#include <bits/stdc++.h>
#define desync ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define pb push_back
#define endl '\n'
using namespace std;

void solve(){
    long long n, a, b, answer = 0;
	cin >> n >> a >> b;

	answer = a/b;
	cout << fixed << setprecision(5) << answer << endl;
}

int main(){
	solve();
}