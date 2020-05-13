//Author: Hérson Reis Rezende dos Santos
//Site: hrezend.github.io

#include <iostream>
#include <iomanip>

using namespace std;

int main(){

	double a, b, c;

	cin >> a >> b >> c;
	
	double MEDIA = ((a*2) + (b*3) + (c*5)) / 10 ;	

	cout << fixed << setprecision(1) << "MEDIA = " << MEDIA << endl;
}
