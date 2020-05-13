//Author: Hérson Reis Rezende dos Santos
//Site: hrezend.github.io

#include <bits/stdc++.h>
#define desync ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
using namespace std;

int main(){
    desync;
	double S = 0;
	
	for(int i = 1; i <= 100; i++){
	    S += 1.00/i;
	}
	cout <<  fixed << setprecision(2) << S << endl;
}
