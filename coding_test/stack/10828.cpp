#include<bits/stdc++.h>
using namespace std;

int main(void){
	ios::sync_with_stdio(0);
	cin.tie(0);

	stack<int> s;

	int commandCnt;
	int inputValue;
	string command;
	cin >> commandCnt;

	for(int i=0;i<commandCnt;i++){
		cin >> command;
		if(command.compare("push") == 0){
			cin >> inputValue;
			s.push(inputValue);
		}else if(command.compare("pop") == 0){
			if(s.empty() == 0){
				int popValue = s.top();
				s.pop();
				cout << popValue << endl;
			}else{
				cout << -1 << endl;
			}
		}else if(command.compare("size") == 0){
			cout << s.size() << endl;
		}else if(command.compare("empty") == 0){
			cout << s.empty() << endl;
		}else if(command.compare("top") == 0){
			if(s.empty() == 1) cout << -1 << endl;
			else cout << s.top() << endl;
		}
	}
	return 0;
}

