//Author: Hérson Reis Rezende dos Santos
//Site: hrezend.github.io

#include <bits/stdc++.h>
using namespace std;

int main(){
 
 int Casos;
 cin >> Casos;
 int Quantidade, TotalC = 0, TotalCob = 0, TotalR = 0, TotalS = 0;
 string Especie;
 
    for(int i = 0; i < Casos; i++){
        cin >> Quantidade;
        cin >> Especie;
        
        TotalCob += Quantidade;
        if(Especie == "S"){
            TotalS += Quantidade;    
        }
        if(Especie == "R"){
            TotalR += Quantidade;    
        }
        if(Especie == "C"){
            TotalC += Quantidade;    
        }
        
    }
    
    double PercentC = (TotalC*1.00*100)/TotalCob;
    double PercentR = (TotalR*1.00*100)/TotalCob;
    double PercentS =  (TotalS*1.00*100)/TotalCob;
    
    cout << "Total: " << TotalCob << " cobaias" << endl;
    cout << "Total de coelhos: " << TotalC << endl;
    cout << "Total de ratos: " << TotalR << endl;
    cout << "Total de sapos: " << TotalS << endl;
    cout << "Percentual de coelhos: " << fixed << setprecision(2) << PercentC  << " %" << endl;
    cout << "Percentual de ratos: " << fixed << setprecision(2) << PercentR << " %" << endl;
    cout << "Percentual de sapos: " << fixed << setprecision(2) << PercentS << " %" << endl;

}
