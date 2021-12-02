#include <bits/stdc++.h>
#define desync ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define endl '\n'
using namespace std;

void solve(){
    long int caixasDeLeite, ovos, litrosDeLeite, xicarasDeAcucar, totalDeSegundos = 0, totalDeMinutos = 0, totalDeHoras = 0, contadorDePudins = 0;

    cin >> caixasDeLeite >> ovos >> litrosDeLeite >> xicarasDeAcucar;

    for(;;){
        if(caixasDeLeite - 4 >= 0 && ovos - 8 >= 0 && litrosDeLeite - 2 >= 0 && xicarasDeAcucar - 1 >= 0){
            caixasDeLeite -= 4;
            ovos -= 8;
            litrosDeLeite -= 2;
            xicarasDeAcucar -= 1;
            contadorDePudins++;
        }
        else{
            break;
        }
    }

    totalDeSegundos = contadorDePudins * 1259;

    totalDeMinutos = totalDeSegundos/60;
    totalDeSegundos = totalDeSegundos%60;
    totalDeHoras = totalDeMinutos/60;
    totalDeMinutos = totalDeMinutos%60;

    cout << totalDeHoras << " h " << totalDeMinutos << " m " <<  totalDeSegundos << " s" << endl;
}

int main(){
    desync;
	solve();
}