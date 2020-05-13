//Author: Hérson Reis Rezende dos Santos
//Site: hrezend.github.io

#include <iostream>
using namespace std;

int main() {
	int M, N, i, j, sum;

	for(;;){
		cin >> M >> N;
		sum = 0;
		
		if(M <= 0 || N <= 0){
			break;
		}
		else if(M>N){
			for(i=N; i <= M; i++){
				cout << i << " ";			
				sum += i;
			}
			cout << "Sum=" << sum << endl;
		}
		else if (M<N){
			for(i=M; i <= N; i++){
				cout << i << " ";			
				sum += i;
			}
			cout << "Sum=" << sum << endl;
		}
	}


return 0;
}
