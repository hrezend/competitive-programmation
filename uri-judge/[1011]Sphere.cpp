//Author: Hérson Reis Rezende dos Santos
//Site: hrezend.github.io

#include <iostream>
#include <iomanip>
#define PI 3.14159

using namespace std;

int main(){

	double RAIO;
	cin >> RAIO;
	
	double VOLUME = 4.0/3 * PI * (RAIO*RAIO*RAIO);

	cout << fixed << setprecision(3) << "VOLUME = " << VOLUME << endl;
}
