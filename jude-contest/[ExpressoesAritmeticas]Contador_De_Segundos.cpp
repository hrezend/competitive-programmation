#include <bits/stdc++.h>
using namespace std;

int main(){
	int segundos, horas, minutos;
	cin >> segundos;
	
	minutos = segundos / 60;
	horas = minutos / 60;
	
	cout << int(horas) << "h " << int(minutos % 60) << "m " << int(segundos % 60) << "s" << endl;;
}
