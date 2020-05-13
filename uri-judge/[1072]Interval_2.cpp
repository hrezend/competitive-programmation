//Author: Hérson Reis Rezende dos Santos
//Site: hrezend.github.io

#include <iostream>
using namespace std;

int main(){
	int entrada, valor, in=0, out=0;
	cin >> entrada;
	
	for(int i=0; i<entrada; i++){
		cin >> valor;
		
		if(valor >= 10 && valor <= 20){
			in++;		
		}
		else{
			out++;
		}
	}

	cout << in << " in" << endl;
	cout << out << " out" << endl;

return 0;
}
