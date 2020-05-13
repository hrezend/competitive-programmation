//Author: Hrz - 2ºSM de CC
//Site: hrezend.github.io

#include <bits/stdc++.h>
#define desync ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define endl '\n'
using namespace std;

int main(){
	desync;
	
	int A, B;
	int Quociente = 0, Resto = 0;

	cin >> A >> B;

	Quociente = A/B;
	Resto = A%B;

	if(A >= 0){
        	Quociente = A/B;
        	Resto = A%B;	
        } 
	else{
        	int X = 0, Y = 0;
        	
        	if(B < 0){
			X = B * -1;
		}
        	else{
			X = B;
		}
        	
        	for (Resto = 0; Resto < X; Resto++) {
        		Y = A - Resto;
        		if(Y % B == 0){
				break;
			}
        	}
        	Quociente = Y / B;
        }



	cout << Quociente << " " << Resto << endl;
}
