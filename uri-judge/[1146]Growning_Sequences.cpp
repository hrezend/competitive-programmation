//Author: Hérson Reis Rezende dos Santos
//Site: hrezend.github.io

#include <bits/stdc++.h>
#define desync ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
using namespace std;

int main(){
	desync;

	int X;
	cin >> X;

	while(X != 0){
		for(int i = 1; i <= X; i++){
			if(i != X){			
				cout << i << " ";
			}
			else{
				cout << i << endl;
			}
		}
		cin >> X;
	}

}
