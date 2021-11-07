#include <bits/stdc++.h>
using namespace std;

int main() {
	vector <int> nums;
	int quantidade, input;
	
	cin >> quantidade;
	
	for(int i = 0; i < quantidade; i ++){
		cin >> input;
		nums.push_back(input);
	}
	
	sort(nums.begin(), nums.end());
	
	for(int i = 0; i < quantidade; i ++){
		cout << nums[i] << " ";
	}
} 
