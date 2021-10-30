#include <bits/stdc++.h>
using namespace std;

int main() {
  	long int n, f, cont=0;

  	cin >> n >> f;
  	long int m[n];
  	
  	for(int i = 0; i < n;i++){
    		cin >> m[i];
  	}
  	
  	sort(m, m+n);
  	
  	for(int i = 0; i < n; i++){
    		if(f > m[i]){
      			f += floor(m[i]/2);
      			cont++;
    		}
  	}
  
  	cout << cont << endl;
} 
