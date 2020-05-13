//Author: Hérson Reis Rezende dos Santos
//Site: hrezend.github.io

#include <bits/stdc++.h>
#define desync ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
using namespace std;

int main(){
    desync;
	double S = 1.00;
	double j = 2.00;
	
	for(int i = 3; i <= 39; i+=2){
	    S += i/j;
	    j = j*2;
	}
	cout <<  fixed << setprecision(2) << S << endl;
}
