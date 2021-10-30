#include <bits/stdc++.h>
using namespace std;

int main(){
    	int repeticao, answer = 0, a, b, c;
  	cin >> repeticao;

  	for (int i = 0; i < repeticao; i++){
  		cin >> a >> b >> c;
  		
  		answer += (a*b) + c;
  	}
  	
  	cout << (answer) << endl;
}
