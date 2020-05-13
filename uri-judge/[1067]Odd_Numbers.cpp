//Author: Hérson Reis Rezende dos Santos
//Site: hrezend.github.io

#include <iostream>
using namespace std;

int main(){

	int entrada, contador1 = 0;
	cin >> entrada;

	for (int i=1; i<=entrada; i++){
		if(i % 2 != 0){
			cout << i << endl;
		}
	}
}
