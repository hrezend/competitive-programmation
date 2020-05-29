//Author: Herson Rezende - 2ºSemestre de CC - UFBA - 2020
//Site: hrezend.github.io
#include <bits/stdc++.h>
#define desync ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define endl '\n'
#define pb push_back

using namespace std;

int main(){
    desync;
	bool flag = true;
	int hel, pol, fug, dir;
	cin >> hel >> pol >> fug >> dir;

	if(dir == -1){
		for(;;){
			if(fug == -1){
				fug = 15;
			}
			if(fug == pol){
				flag = false;
				break;
			}
			else if(fug == hel){
				break;
			}
			fug--;
		}
	}
	else if(dir == 1){
		for(;;){			
			if(fug == 16){
				fug = 0;
			}
			if(fug == pol){
				flag = false;
				break;
			}
			else if(fug == hel){
				break;
			}
			fug++;
		}
	}

	if(flag){
		cout << "S" << endl;
	}
	else{
		cout << "N" << endl;
	}
	
}
