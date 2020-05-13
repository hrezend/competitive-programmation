//Author: Hérson Reis Rezende dos Santos
//Site: hrezend.github.io

#include <bits/stdc++.h>
using namespace std;

int main(){
 
    int N, M, QS;
 	cin >> N >> M >> QS;

    while(N != 0 && M != 0 && QS != 0){
        int CDC = 0; //Contador de Cartas que o Robô Coleta
        char Matriz[N][M]; //Pista Que o Robô Percorre
		char S[QS]; //Vetor de Operações do Robô
		char OA; //Orientação Atual do Robô
		int PAN, PAM; //Posição Atual do Robô na Matriz[N][M] 
		
		for(int i = 0; i < N; i++){
			for(int j = 0; j < M; j++){
				cin >> Matriz[i][j];
				if(Matriz[i][j] == 'N' || Matriz[i][j] == 'S' || Matriz[i][j] == 'O' || Matriz[i][j] == 'L'){
					PAN = i;
					PAM = j;
					OA = Matriz[i][j];
				}
			}
		}
		for(int k = 0; k < QS; k++){
    	    cin >> S[k];
        }
        for(int h = 0; h < QS; h++){
            if(S[h] == 'D'){
                if(OA == 'N'){
                    OA = 'L';
                }
                else if(OA == 'L'){
                    OA = 'S';
                }
                else if(OA == 'S'){
                    OA = 'O';
                }
                else if(OA == 'O'){
                    OA = 'N';
                }
            }
            if(S[h] == 'E'){
                if(OA == 'N'){
                    OA = 'O';
                }
                else if(OA == 'O'){
                    OA = 'S';
                }
                else if(OA == 'S'){
                    OA = 'L';
                }
                else if(OA == 'L'){
                    OA = 'N';
                }
            }
            if(S[h] == 'F'){
                if(OA == 'N' && PAN-1 >= 0){
                    if(Matriz[PAN-1][PAM] == '.'){
                        Matriz[PAN][PAM] = '.';
			            Matriz[PAN-1][PAM] = 'N';
			            PAN--;
			            if(PAN < 0){
                            PAN++;
                        }
	                }
	                else if(Matriz[PAN-1][PAM] == '*'){
	                    Matriz[PAN][PAM] = '.';
	                    Matriz[PAN-1][PAM] = 'N';
	                    PAN--;
			            CDC++;
			            if(PAN < 0){
                            PAN++;
                        }
	                }
			    }
			    else if(OA == 'S' && PAN+1 < N){
	                if(Matriz[PAN+1][PAM] == '.'){
	                    Matriz[PAN][PAM] = '.';
			            Matriz[PAN+1][PAM] = 'S';
			            PAN++;
			            if(PAN >= N){
                            PAN--;
                        }
	                }
	                else if(Matriz[PAN+1][PAM] == '*'){
                        Matriz[PAN][PAM] = '.';
                        Matriz[PAN+1][PAM] = 'S';
                        PAN++;
	                    CDC++;
			            if(PAN >= N){
                            PAN--;
                        }
	                }
			    }
                else if(OA == 'L' && PAM+1 < M){
                    if(Matriz[PAN][PAM+1] == '.'){
                        Matriz[PAN][PAM] = '.';
			            Matriz[PAN][PAM+1] = 'L';
			            PAM++;
			            if(PAM >= M){
                            PAM--;
                        }
                    }
                    else if(Matriz[PAN][PAM+1] == '*'){
	                    Matriz[PAN][PAM] = '.';
	                    Matriz[PAN][PAM+1] = 'L';
	                    PAM++;
			            CDC++;
			            if(PAM >= M){
                            PAM--;
                        }
	                }
	            }
	            else if(OA == 'O' && PAM-1 >= 0){
	                if(Matriz[PAN][PAM-1] == '.'){
                        Matriz[PAN][PAM] = '.';
                        Matriz[PAN][PAM-1] = 'O';
                        PAM--;
                        if(PAM < 0){
                            PAM++;
                        }
	                }
	                else if(Matriz[PAN][PAM-1] == '*'){
                        Matriz[PAN][PAM] = '.';
                        Matriz[PAN][PAM-1] = 'O';
                        PAM--;
			            CDC++;
			            if(PAM < 0){
                            PAM++;
                        }
	                }
		        }			                  
            }
        }
		cout << CDC << endl;
        cin >> N >> M >> QS;
    }
}
