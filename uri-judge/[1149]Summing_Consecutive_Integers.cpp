//Author: Hérson Reis Rezende dos Santos
//Site: hrezend.github.io

#include <iostream>
using namespace std;

int main(){

	int A, N, soma=0;
	cin >> A >> N;

	while(N <= 0){
		cin >> N;
	}

	for(int i = 0; i < N; i++){
		soma += A;
		A++;
	}

	cout << soma << endl;
return 0;
}
