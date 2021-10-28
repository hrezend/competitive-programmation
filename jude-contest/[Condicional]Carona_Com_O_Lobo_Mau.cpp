#include <bits/stdc++.h>
using namespace std;

int main(){
    	int n, c = 0, v = 0, l = 0;
	cin >> n;

	while ( n > 0 ){

		if( n >= 3 ){
  			c += 1;
  			v += 1;
  			l += 1;
  			n -= 3;
		}
		else if( n == 2 ){
  			c += 1;
  			v += 1;
  			n -= 2;
		}
		else{
  			c += 1;
  			n -= 1;
		}
	}
	
	cout << "Chapeuzinho Vermelho " << c <<endl;
	cout << "Vovozinha " << v << endl;
	cout << "Lobo Mau " << l << endl;
}
