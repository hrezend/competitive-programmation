//Author: Hérson Reis Rezende dos Santos
//Site: hrezend.github.io

#include <iostream>
using namespace std;

int main(){
	
	int N;
	cin >> N;
	int V[N];
    	V[0] = 0;
    	V[1] = 1;

	for(int i = 2; i < N; i++){
		V[i] = V[i-1]+V[i-2]; 
	}
	for(int j = 0; j < N; j++){		
		if(j+1 < N){
		    cout << V[j] << " ";
		}
		else{
		    cout << V[j] << endl;   
		}
	}

}
