#include <bits/stdc++.h>
using namespace std;

int main(){
    	bool cond = false;
	int a, aux = 1;

	cin >> a;

	while(aux <= a){
  		if(aux == a){
    			cout << "Dattebayo" << endl;
    			cond = true;
    			break;
  		}
  		else{
    			aux = aux*2;
  		}
	}

	if(cond == false){
  		cout<<"Tururuuu"<<endl;
	}
}
