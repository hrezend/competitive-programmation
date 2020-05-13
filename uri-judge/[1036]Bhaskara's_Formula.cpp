//Author: Hérson Reis Rezende dos Santos
//Site: hrezend.github.io

#include <iostream>
#include <iomanip>
#include <math.h>

using namespace std;

int main(){

	double a, b, c;
	cin >> a >> b >> c;
	
	double delta = (b*b) - (4*a*c);
	double sqrt (double delta);
	
	double r1 = (-b + sqrt(delta)) / (2*a);
	double r2 = (-b - sqrt(delta)) / (2*a);

	if(a != 0 && sqrt(delta) > 0){
		cout << "R1 = " << fixed << setprecision(5) << r1 << endl;
		cout << "R2 = " << fixed << setprecision(5) << r2 << endl;
	    
	}
	else{
		cout << "Impossivel calcular" << endl;
	}
}

	




