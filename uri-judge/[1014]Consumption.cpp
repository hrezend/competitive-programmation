//Author: Hérson Reis Rezende dos Santos
//Site: hrezend.github.io

#include <iostream>
#include <iomanip>

using namespace std;

int main(){

	int X;
	float Y;
	cin >> X; 
	cin >> Y;
	
	float CONSUMO = X/Y;

	cout << fixed << setprecision(3) << CONSUMO << " km/l" << endl;
}

	




