//Author: Hérson Reis Rezende dos Santos
//Site: hrezend.github.io

#include <iostream>
using namespace std;

int main(){
	string vertebra, tipo, alimentacao;
	cin >> vertebra >> tipo >> alimentacao;

	if(vertebra == "vertebrado"){
		if(tipo == "ave"){
			if(alimentacao == "onivoro"){
				cout << "pomba" << endl;
			}
			else if(alimentacao == "carnivoro"){
				cout << "aguia" << endl;
			}
		}
		else if(tipo == "mamifero"){
			if(alimentacao == "onivoro"){
				cout << "homem" << endl;
			}
			else if(alimentacao == "herbivoro"){
				cout << "vaca" << endl;	
			}								
		}
	}
	else if(vertebra == "invertebrado"){
		if(tipo == "inseto"){
			if(alimentacao == "hematofago"){
				cout << "pulga" << endl;
			}
			else if(alimentacao == "herbivoro"){
				cout << "lagarta" << endl;
			}
		}
		else if(tipo == "anelideo"){
			if(alimentacao == "onivoro"){
				cout << "minhoca" << endl;
			}
			else if(alimentacao == "hematofago"){
				cout << "sanguessuga" << endl;	
			}								
		}
	}
}
