//Author: Hérson Reis Rezende dos Santos
//Site: hrezend.github.io

#include <bits/stdc++.h>
using namespace std;

int main() {
	int X, Y;

	do{
		cin >> X >> Y;
		if(X > 0 && Y > 0){
			cout << "primeiro" << endl;
		}
		else if(X < 0 && Y > 0){
			cout << "segundo" << endl;
		}
		else if(X < 0 && Y < 0){
			cout << "terceiro" << endl;
		}
		else if(X > 0 && Y < 0){
			cout << "quarto" << endl;
		}
	}
	while(X != 0 && Y != 0);
}
