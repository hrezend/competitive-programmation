//Author: Hérson Reis Rezende dos Santos
//Site: hrezend.github.io

#include <iostream>
using namespace std;

int main(){
	int a,b,c,d, somacd, somaab;
	cin >> a >> b >> c >> d;

	somacd = c+d;
	somaab = a+b;
	
	if(b > c && d > a && somacd > somaab && c>0 && d>0 && a%2==0){
		cout << "Valores aceitos" << endl;
	}
	else{
		cout << "Valores nao aceitos" << endl;
	}
}
