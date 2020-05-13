//Author: Hérson Reis Rezende dos Santos
//Site: hrezend.github.io

#include <iostream>
using namespace std;

int main(){
	int A, B, C, TROCA;
	cin >> A >> B >> C;

	int Al = A;
	int Bl = B;
	int Cl = C;

	//Ordenando os valores do menor para o maior
	if (A > B){
		TROCA = A;
        	A = B;
        	B = TROCA;
    	}
	if (B > C){
        	TROCA = B;
        	B = C;
        	C = TROCA;
    	}
	if (A > B){
        	TROCA = A;
        	A = B;
        	B = TROCA;
	}

	cout << A << endl;
	cout << B << endl;
	cout << C << endl;
	cout << endl;
	cout << Al << endl;
	cout << Bl << endl;
	cout << Cl << endl;

}
