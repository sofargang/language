#include<bits/stdc++.h>
using namespace std;

int main(void){
	ios::sync_with_stdio(0);
	cin.tie(0);

	string input;
	cin >> input;

	//cout << input;
	int count[26];
	
	for(int i=0;i<26;i++){
		count[i] = 0;
	}

	for(int i=0;i<input.length();i++){
		count[input[i] - 'a']++;
	}

	for(int i=0;i<26;i++){
		cout << count[i] << ' ';
	}
}
