//Author: Hérson Reis Rezende dos Santos
//Site: hrezend.github.io

#include <iostream>
using namespace std;

int main(){

    int soma = 0, contador1 = 0, contador2 = 0;
	int N, Y, X;
	cin >> N;

	while(contador1 < N){		
		cin >> X >> Y;

		for(int j = 0;; j++){
			if(X%2 != 0){		
				soma += X;
				X++;
				contador2++;
			}
			else{
			    X++;    
			}
			if(contador2 >= Y){
			    break;    
			}
		}
		cout << soma << endl;
		contador1++;
		soma = 0;
		contador2 = 0;
    }

return 0;
}
