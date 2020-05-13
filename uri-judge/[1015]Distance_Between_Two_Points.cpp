//Author: Hérson Reis Rezende dos Santos
//Site: hrezend.github.io

#include <iostream>
#include <iomanip>
#include <math.h>

using namespace std;

int main(){

	double x1, x2, y1, y2;
	cin >> x1 >> y1;
	cin >> x2 >> y2;

	double distancia = ((x2-x1)*(x2-x1)) + ((y2-y1)*(y2-y1));
	double sqrt (double distancia);

	cout << fixed << setprecision(4) << sqrt(distancia) << endl;	
}

	




