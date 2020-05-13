//Author: Hérson Reis Rezende dos Santos
//Site: hrezend.github.io

#include <iostream>

using namespace std;

int main(){

	float A,B,C, TROCA;
	cin >> A >> B >> C;

	//Ordenando os valores do maior para o menor
	if (A < B){
		TROCA = A;
        	A = B;
        	B = TROCA;
    	}
	if (B < C){
        	TROCA = B;
        	B = C;
        	C = TROCA;
    	}
	if (A < B){
        	TROCA = A;
        	A = B;
        	B = TROCA;
	}

	//Definindo o tipo do triângulo
	if(A >= B+C){
        	cout << "NAO FORMA TRIANGULO" << endl;
	}
    	else if((A*A) == ((B*B)+(C*C))){
        	cout << "TRIANGULO RETANGULO" << endl;
        }
	else if((A*A) > ((B*B)+(C*C))){
        	cout << "TRIANGULO OBTUSANGULO" << endl;
        }
	else if((A*A) < ((B*B)+(C*C))){
        	cout << "TRIANGULO ACUTANGULO" << endl;
    	}
	if(A == B && B == C){
        	cout << "TRIANGULO EQUILATERO" << endl;
    	}
	else if(A == B || B == C || A == C){
        	cout << "TRIANGULO ISOSCELES" << endl;
    	}
}
