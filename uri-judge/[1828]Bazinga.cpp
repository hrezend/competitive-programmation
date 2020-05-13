//Author: Hérson Reis Rezende dos Santos
//Site: hrezend.github.io

#include <bits/stdc++.h>
#define desync ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
using namespace std;

int main(){
    desync;
    int T;
    cin >> T;

    string StrA, StrB;

    for(int i = 1; i <= T; i++){
        cin >> StrA >> StrB;
        //Condição de Empate
        if(StrA == StrB){
            cout << "Caso #" << i << ": De novo!" << endl;
        }
        //Condições de Vitória
        if(StrA == "pedra" && StrB == "tesoura"){
            cout << "Caso #" << i << ": Bazinga!" << endl;
        }
        if(StrA == "pedra" && StrB == "lagarto"){
            cout << "Caso #" << i << ": Bazinga!" << endl;
        }
        if(StrA == "papel" && StrB == "pedra"){
            cout << "Caso #" << i << ": Bazinga!" << endl;
        }
        if(StrA == "papel" && StrB == "Spock"){
            cout << "Caso #" << i << ": Bazinga!" << endl;
        }
        if(StrA == "tesoura" && StrB == "papel"){
            cout << "Caso #" << i << ": Bazinga!" << endl;
        }
        if(StrA == "tesoura" && StrB == "lagarto"){
            cout << "Caso #" << i << ": Bazinga!" << endl;
        }
        if(StrA == "Spock" && StrB == "pedra"){
            cout << "Caso #" << i << ": Bazinga!" << endl;
        }
        if(StrA == "Spock" && StrB == "tesoura"){
            cout << "Caso #" << i << ": Bazinga!" << endl;
        }
        if(StrA == "lagarto" && StrB == "Spock"){
            cout << "Caso #" << i << ": Bazinga!" << endl;
        }
        if(StrA == "lagarto" && StrB == "papel"){
            cout << "Caso #" << i << ": Bazinga!" << endl;
        }
        //Condições de Derrota
        if(StrB == "pedra" && StrA == "tesoura"){
            cout << "Caso #" << i << ": Raj trapaceou!" << endl;
        }
        if(StrB == "pedra" && StrA == "lagarto"){
            cout << "Caso #" << i << ": Raj trapaceou!" << endl;
        }
        if(StrB == "papel" && StrA == "pedra"){
            cout << "Caso #" << i << ": Raj trapaceou!" << endl;
        }
        if(StrB == "papel" && StrA == "Spock"){
            cout << "Caso #" << i << ": Raj trapaceou!" << endl;
        }
        if(StrB == "tesoura" && StrA == "papel"){
            cout << "Caso #" << i << ": Raj trapaceou!" << endl;
        }
        if(StrB == "tesoura" && StrA == "lagarto"){
            cout << "Caso #" << i << ": Raj trapaceou!" << endl;
        }
        if(StrB == "Spock" && StrA == "pedra"){
            cout << "Caso #" << i << ": Raj trapaceou!" << endl;
        }
        if(StrB == "Spock" && StrA == "tesoura"){
            cout << "Caso #" << i << ": Raj trapaceou!" << endl;
        }
        if(StrB == "lagarto" && StrA == "Spock"){
            cout << "Caso #" << i << ": Raj trapaceou!" << endl;
        }
        if(StrB == "lagarto" && StrA == "papel"){
            cout << "Caso #" << i << ": Raj trapaceou!" << endl;
        }
    }
}

