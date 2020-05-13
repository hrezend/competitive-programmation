//Author: Hérson Reis Rezende dos Santos
//Site: hrezend.github.io

#include <iostream>
#include <iomanip>

using namespace std;

int main(){
	double n1, n2, n3, n4, ne;
	cin >> n1 >> n2 >> n3 >> n4;
	double media = ((n1*2)+(n2*3)+(n3*4)+(n4*1)) / 10;
	double mediaE;
	
	cout << fixed << setprecision(1) << "Media: " << media << endl;
	if(media >= 7){
		cout << "Aluno aprovado." << endl;
	}
	else if(media < 5){
		cout << "Aluno reprovado." << endl;	
	}
	else if(media >=5 && media < 7){
		cout << "Aluno em exame." << endl;
		cin >> ne;
		cout << fixed << setprecision(1) << "Nota do exame: " << ne << endl;
		mediaE = (media+ne) / 2;
		if(mediaE >=5){
			cout << "Aluno aprovado." << endl;
			cout << fixed << setprecision(1) << "Media final: " << mediaE <<endl;		
		}
		else if(mediaE < 5){
			cout << "Aluno reprovado." << endl;
			cout << fixed << setprecision(1) << "Media final: " << mediaE <<endl;		
		}
	}
}
