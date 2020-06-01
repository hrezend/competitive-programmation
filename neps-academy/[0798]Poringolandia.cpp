//Author: Herson Rezende - 2ºSemestre de CC - UFBA - 2020
//Site: hrezend.github.io
#include <bits/stdc++.h>
#define desync ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define endl '\n'
#define pb push_back
#define all(x) (x.begin(), x.end())
#define rall(x) (x.rbegin(), x.rend())
#define mkp(x,y) (make_pair(x,y))
#define out(x) cout << x << endl
using namespace std;

int main(){
	desync;
	int count_dev = 0, count_ang = 0;
	bool flag_dev = false, flag_ang = false;
	string s1, s2;
	string aux1 = "deviling";
	string aux2 = "angeling";

	cin >> s1;
	s2 = s1;

	for(int j = 0; j < aux1.length(); j++){
		for(int i = 0; i < s1.length(); i++){
			if(aux1[j] == s1[i]){
				count_dev++;
				s1[i] = '0';
				break;
			}
		}
		if(count_dev == aux1.length()){
				flag_dev = true;
		}		
	}
	
	if(flag_dev){
		for(int j = 0; j < aux2.length(); j++){
			for(int i = 0; i < s1.length(); i++){
				if(aux2[j] == s1[i]){
					count_ang++;
					s1[i] = '0';
					break;
				}
			}
			if(count_ang == aux2.length()){
				flag_ang = true;
			}
		}
	}
	else{
		for(int j = 0; j < aux2.length(); j++){
			for(int i = 0; i < s2.length(); i++){
				if(aux2[j] == s2[i]){
					count_ang++;
					s2[i] = '0';
					break;
				}
			}
			if(count_ang == aux2.length()){
				flag_ang = true;
			}
		}
	}
		
	if(flag_dev && flag_ang){
		out("... ate conhecerem o deviling!");
	}
	else if(flag_ang){
		out("todos amam o angeling");
	}
	else{
		out("a poringolandia esta de luto");
	}

}
