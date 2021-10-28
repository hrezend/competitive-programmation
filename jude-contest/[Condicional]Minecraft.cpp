#include <bits/stdc++.h>
using namespace std;

int main(){
    	int a, b, c;
	cin >> a >> b >> c;

	if (((b*b*b)*c)-(a*a*a) > 0){
		cout << "Eh possivel" << endl;
	}
	else{
  		cout << "!Eh possivel" << endl;
	}
}
