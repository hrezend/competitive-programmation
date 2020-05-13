//Author: Hérson Reis Rezende dos Santos
//Site: hrezend.github.io

#include <bits/stdc++.h>
#define desync ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
using namespace std;

int main(){
    desync;
    int T;
    cin >> T;

    for(int i = 0; i < T; i++){
        int Anos = 0;
        int Pa = 0, Pb = 0;
        double G1, G2;
        cin >> Pa >> Pb;
        cin >> G1 >> G2;

        for(int i = 1; i < 102; i++){
            if(G1 != 0){
                Pa *= (G1 / 100.00) + 1.00;
            }
            if(G2 != 0){
                Pb *= (G2 / 100.00) + 1.00 ;
            }
            if(Pa > Pb || i > 100){
                Anos = i;
                break;
            }
        }

        if(Anos > 100){
            cout << "Mais de 1 seculo." << endl;
        }
        else{
            cout << Anos << " anos." << endl;
        }
    }
}
