//Author: Hérson Reis Rezende dos Santos
//Site: hrezend.github.io

#include <iostream>
using namespace std;

int main(){
	double cordX, cordY;
	cin >> cordX >> cordY;

	if(cordX == 0 && cordY == 0){
		cout << "Origem" << endl;
	}
	else if(cordX == 0 && cordY != 0){
		cout << "Eixo Y" << endl;
	}
	else if(cordX != 0 && cordY == 0){
		cout << "Eixo X" << endl;
	}
	else if(cordX > 0 && cordY > 0){
		cout << "Q1" << endl;
	}
	else if(cordX < 0 && cordY > 0){
		cout << "Q2" << endl;
	}
	else if(cordX < 0 && cordY < 0){
		cout << "Q3" << endl;
	}
	else if(cordX > 0 && cordY < 0){
		cout << "Q4" << endl;
	}

return 0;
}
