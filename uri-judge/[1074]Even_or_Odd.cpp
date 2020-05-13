//Author: Hérson Reis Rezende dos Santos
//Site: hrezend.github.io

#include <iostream>
using namespace std;

int main(){
	int x, y;
	int soma = 0;
	cin >> x >> y;

	if(x == y){
	    cout << soma <<endl;
	}
	else if(x > y){
		for(int i=y+1; i<x; i++){
			if(i%2 == 1 || i%2 == -1){		
				soma += i;				
			}
	
		}
        cout << soma << endl;
	}
	else if(x < y){
		for(int i=x+1; i<y; i++){
			if(i%2 == 1 || i%2 == -1){		
				soma += i;				
			}
	
		}
        cout << soma << endl;
	}

return 0;
}
