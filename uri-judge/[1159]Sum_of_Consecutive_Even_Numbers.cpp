//Author: Hérson Reis Rezende dos Santos
//Site: hrezend.github.io

#include <bits/stdc++.h>
#define desync ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
using namespace std;

int func(int N){
    if(N%2 == 0){
        return N + (N+2) + (N+4) + (N+6) + (N+8);    
    }
    else{
        return (N+1) + (N+3) + (N+5) + (N+7) + (N+9);
    }
}

int main(){
    desync;
	int N;
	cin >> N;
	
	while(N != 0){
	    cout << func(N) << endl;
	    cin >> N;
	}
}
