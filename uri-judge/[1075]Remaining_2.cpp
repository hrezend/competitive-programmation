//Author: Hérson Reis Rezende dos Santos
//Site: hrezend.github.io

#include <iostream>
 
using namespace std;
 
int main() {
 
 int N;
 cin >> N;
 for(int i=1; i<10000; i++){
    if (i%N == 2){
      cout << i << endl;
    }
 }

    return 0;
}
