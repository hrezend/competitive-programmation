//Author: Herson Rezende - 2ºSemestre de CC - UFBA - 2020
//Site: hrezend.github.io
#include <bits/stdc++.h>
#define desync ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define pb push_back
#define endl '\n'
using namespace std;

int det(int m[3][3]){
	//Formula: (a​0,0​​⋅a​1,1​​⋅a​2,2​​+a​0,1​​⋅a​1,2​​⋅a​2,0​​+a​0,2​​⋅a​1,0​​⋅a​2,1​​)−(a​0,0​​⋅a​1,2​​⋅a​2,1​​+a​0,1​​⋅a​1,0​​⋅a​2,2​​+a​0,2​​⋅a​1,1​​⋅a​2,0​​)
	int first = m[0][0]*m[1][1]*m[2][2];
	int second = m[0][1]*m[1][2]*m[2][0];
	int third = m[0][2]*m[1][0]*m[2][1];
	int fourth = m[0][0]*m[1][2]*m[2][1];
	int fifth = m[0][1]*m[1][0]*m[2][2]; 
	int sixth = m[0][2]*m[1][1]*m[2][0];
	return((first+second+third)-(fourth+fifth+sixth));
}

int main(){

	desync;
	int m[3][3];
	
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			cin >> m[i][j];
		}
	}

	cout << det(m) << endl;
}

