//Author: Hrz - 2ºSM de CC
//Site: hrezend.github.io

#include <bits/stdc++.h>
#define desync ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define endl '\n'
using namespace std;

int main(){

	desync;

    int N[4];
	int Posicao = 0;
        
    for(int i = 0; i < 4; i++){
        cin >> N[i];
	    if(N[i] == 1){
		    Posicao = i;	
		}	
    }
 	
	cout << Posicao+1 << endl;
 
}
