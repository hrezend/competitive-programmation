//Author: Hrz - 2ºSM de CC
//Site: hrezend.github.io

#include <bits/stdc++.h>
#define desync ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define endl '\n'
using namespace std;

int main(){
	desync;
	vector <string> s;
	string codigo;
	
	while(cin >> codigo){
		s.push_back(codigo);
	}

	for(int i = 0; i < s.size(); i++){
		cout << s[i] << endl;
	}

	cout << endl;
	
	for(int i = 0; i < s.size(); i++){
		if(s[i] == " ") cout << " ";
		if(s[i] == "/") cout << " ";
		if(s[i] == ".-") cout << "A";
		if(s[i] == "-...") cout << "B";
		if(s[i] == "-.-.") cout << "C";
		if(s[i] == "-..") cout << "D";
		if(s[i] == ".") cout << "E";
		if(s[i] == "..-.") cout << "F";
		if(s[i] == "--.") cout << "G";
		if(s[i] == "....") cout << "H";
		if(s[i] == "..") cout << "I";
		if(s[i] == ".---") cout << "J";
		if(s[i] == "-.-") cout << "K";
		if(s[i] == ".-..") cout << "L";
		if(s[i] == "--") cout << "M";
		if(s[i] == "-.") cout << "N";
		if(s[i] == "---") cout << "O";
		if(s[i] == ".--.") cout << "P";
		if(s[i] == "--.-") cout << "Q";
		if(s[i] == ".-.") cout << "R";
		if(s[i] == "...") cout << "S";
		if(s[i] == "-") cout << "T";
		if(s[i] == "..-") cout << "U";
		if(s[i] == "...-") cout << "V";
		if(s[i] == ".--") cout << "W";
		if(s[i] == "-..-") cout << "X";
		if(s[i] == "-.--") cout << "Y";
		if(s[i] == "--..") cout << "Z";
		if(s[i] == ".----") cout << "1";
		if(s[i] == "..---") cout << "2";
		if(s[i] == "...--") cout << "3";
		if(s[i] == "....-") cout << "4";
		if(s[i] == ".....") cout << "5";
		if(s[i] == "-....") cout << "6";
		if(s[i] == "--...") cout << "7";
		if(s[i] == "---..") cout << "8";
		if(s[i] == "----.") cout << "9";
		if(s[i] == "-----") cout << "0";
		if(s[i] == ".-.-.-") cout << ".";
		if(s[i] == "--..--") cout << ",";
		if(s[i] == "..--..") cout << "?";
		if(s[i] == "-..-.") cout << "/";
	}	


}
