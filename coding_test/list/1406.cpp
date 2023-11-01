#include<bits/stdc++.h>
using namespace std;

int main(void){
	ios::sync_with_stdio(0);
	cin.tie(0);

	list<int> l;
	string input;
	cin >> input;

	for(int i=0;i<input.length();i++)
		l.push_back(input[i]);

	int inputCount;
	char inputChar;
	cin >> inputCount;

	for(int i=0;i<inputCount;i++){
		cin >> inputChar;
		switch(inputChar){
			case 'P':
				cin >> inputChar;
				break;
			case 'D':
				break;
			case 'B':
				break;
			default:
				break;
		}
	}
	cout << input;
}
