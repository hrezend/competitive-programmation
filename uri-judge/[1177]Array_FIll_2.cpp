//Author: Hérson Reis Rezende dos Santos
//Site: hrezend.github.io

#include <iostream>
 
using namespace std;
 
int main(){
 int T;
 cin >> T;
 int Vetor[1000];
 int aux = 0;
 
 for(int i = 0; i < 1000; i++){
     Vetor[i] = aux;
     aux++;
     
     if(aux >= T){
         aux = 0;
     }
 }
 
 for(int i = 0; i < 1000; i++){
     cout << "N[" << i << "] = " << Vetor[i] << endl;
 }
 
    return 0;
}
