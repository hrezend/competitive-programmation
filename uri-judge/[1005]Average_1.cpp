//Author: Hérson Reis Rezende dos Santos
//Site: hrezend.github.io

#include <iostream>
#include <iomanip>

using namespace std;

int main(){

	double a, b;
	cin >> a >> b;
	
	double media = (a*3.5 + b*7.5)/11;

	cout << fixed << setprecision(5) << "MEDIA = " << media << endl;
}
