#include<bits/stdc++.h>
using namespace std;

int main(void){
	ios::sync_with_stdio(0);
	cin.tie(0);

	list<char> l;
	string inputString;
	cin >> inputString;

	for(int i=0;i<inputString.length();i++)
		l.push_back(inputString[i]);

	//l.push_back(' ');
	list<char>::iterator pos = l.end();
	
	int inputCount;
	char inputChar;
	cin >> inputCount;
	for(int i=0;i<inputCount;i++){
		cin >> inputChar;
		switch(inputChar){
			case 'P':
				cin >> inputChar;
				l.insert(pos, inputChar);
				break;
			case 'L':
				if(pos != l.begin()) --pos;
				break;
			case 'D':
				if(pos != l.end()) ++pos;
				break;
			case 'B':
				if(pos != l.begin()){
					pos = l.erase(--pos);

				}
				break;
		}
	}
	
	for(auto c : l)
		cout << c;
	cout << endl;
}
