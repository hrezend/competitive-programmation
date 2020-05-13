//Author: Hérson Reis Rezende dos Santos
//Site: hrezend.github.io

#include <iostream>
#include <iomanip>

using namespace std;

int main(){

	string Nome;
	double SalFixo;
	double TotalV;

	cin >> Nome;
	cin >> SalFixo;
	cin >> TotalV;
	
	double Total = SalFixo+(TotalV*0.15);

	cout << fixed << setprecision(2) << "TOTAL = R$ " << Total << endl;
}
