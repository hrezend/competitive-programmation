#include <bits/stdc++.h>
using namespace std;

int main() {
	bool flag = false;
	int m[10][10];
	int pixel = 0;
	
	cin >> pixel;
	
	for(int i = 0; i < 10; i ++){
		for(int j = 0; j < 10; j++){
			cin >> m[i][j];
		
			if(m[i][j] == pixel){
				flag = true;
			}
		}
	}
	
	if(flag){
		cout << "sim" << endl;
	}
	else{
		cout << "nao" << endl;
	}
} 
