//Author: Hérson Reis Rezende dos Santos
//Site: hrezend.github.io

#include <iostream>
#include <iomanip>
#define PI 3.14159

using namespace std;

int main(){

	double a, b, c;
	cin >> a >> b >> c;

	double areaTRI = (a*c)/2;
	double areaCIR = PI*(c*c);
	double areaTRA = ((a+b)*c)/2;
	double areaQUA = b*b;
	double areaRET = a*b;

	cout << fixed << setprecision(3) << "TRIANGULO: " << areaTRI << endl;

	cout << fixed << setprecision(3) << "CIRCULO: " << areaCIR << endl;

	cout << fixed << setprecision(3) << "TRAPEZIO: " << areaTRA << endl;

	cout << fixed << setprecision(3) << "QUADRADO: " << areaQUA << endl;
	
	cout << fixed << setprecision(3) << "RETANGULO: " << areaRET << endl;
}
