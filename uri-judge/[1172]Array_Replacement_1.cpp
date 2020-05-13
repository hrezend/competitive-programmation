//Author: Hérson Reis Rezende dos Santos
//Site: hrezend.github.io

#include <iostream>
using namespace std;

int main(){

	int X[10];
	
	for(int i = 0; i < 10; i++){
		cin >> X[i];

		if(X[i] <= 0){
			X[i] = 1;
		}
		
		cout << "X[" << i << "] = " << X[i] << endl;		
	}	

return 0;
}
