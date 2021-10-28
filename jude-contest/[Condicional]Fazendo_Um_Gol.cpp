#include <bits/stdc++.h>
using namespace std;

int main(){
    	char a, b, c, d;
	cin >> a >> b >> c >> d;
	
	if(a == c){
  		cout << "Driblado" << endl;
  		if (b == d){
    			cout << "Gol" << endl;
  		}
  		else{
    			cout << "...e o goleiro pega" << endl;
  		}
	}
	else{
  		cout<<"Bloqueado"<<endl;
	}
}
