//Author: Hérson Reis Rezende dos Santos
//Site: hrezend.github.io

#include <iostream>

using namespace std;

int main(){

	int a, b, c, maiorAB, maiorABC;
	cin >> a >> b >> c;

	maiorAB = (a+b+abs(a-b))/2;
	maiorABC = (maiorAB+c+abs(maiorAB-c))/2;

	cout << maiorABC << " eh o maior" << endl;
}

	




