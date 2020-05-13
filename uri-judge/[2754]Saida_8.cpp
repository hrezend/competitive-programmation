//Author: Hrz - 2ºSM de CC
//Site: hrezend.github.io

#include <bits/stdc++.h>
#define desync ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define endl '\n'
using namespace std;

int main(){

	desync;
	double A = 234.345;
	double B = 45.698;

	cout << fixed << setprecision(6) << A << " - " << B << endl;
	cout << fixed << setprecision(0) << A << " - " << B << endl;
	cout << fixed << setprecision(1) << A << " - " << B << endl;
	cout << fixed << setprecision(2) << A << " - " << B << endl;
	cout << fixed << setprecision(3) << A << " - " << B << endl;

	cout << "2.343450e+02 - " << "4.569800e+01" << endl;
	cout << "2.343450E+02 - " << "4.569800E+01" << endl;

	cout << fixed << setprecision(3) << A << " - " << B << endl;
	cout << fixed << setprecision(3) << A << " - " << B << endl;	
}
