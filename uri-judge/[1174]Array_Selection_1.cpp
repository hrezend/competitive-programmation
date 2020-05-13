//Author: Hérson Reis Rezende dos Santos
//Site: hrezend.github.io

#include <iostream>
#include <iomanip>
 
using namespace std;
 
int main(){
 
 double Vetor[100];

 for(int i = 0; i < 100; i++){
     cin >> Vetor[i];
 }
 
 for(int i = 0; i < 100; i++){
    if(Vetor[i] <= 10){
        cout << fixed << setprecision(1) << "A[" << i << "] = " << Vetor[i] << endl;
    }
 }
 
    return 0;
}
