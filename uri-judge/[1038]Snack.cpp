//Author: Hérson Reis Rezende dos Santos
//Site: hrezend.github.io

#include <bits/stdc++.h>
using namespace std;

int main(){
	int a,b;
	cin >> a >> b;
	
	if(a == 1){
		cout << fixed << setprecision(2) << "Total: R$ " << b*4.00 << endl;
	}
	else if(a == 2){
		cout << fixed << setprecision(2) << "Total: R$ " << b*4.50 << endl;
	}
	else if(a == 3){
		cout << fixed << setprecision(2) << "Total: R$ " << b*5.00 << endl;
	}
	else if(a == 4){
		cout << fixed << setprecision(2) << "Total: R$ " << b*2.00 << endl;
	}
	else if(a == 5){
		cout << fixed << setprecision(2) << "Total: R$ " << b*1.50 << endl;
	}
}
