#include <bits/stdc++.h>
using namespace std;

int main() {
    int tempo;
    double valor, cobranca;
    cin >> valor >> tempo;
    
    cobranca = valor * pow(1+0.05, tempo);
    
    cout << fixed << setprecision(2)  << cobranca << endl;
}
