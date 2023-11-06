#include<bits/stdc++.h>
using namespace std;

int main(void){
	ios::sync_with_stdio(0);
	cin.tie(0);

	deque<int> dq;

	int commandCnt;
	int inputValue;
	string command;
	cin >> commandCnt;

	for(int i=0;i<commandCnt;i++){
		cin >> command;
		if(command.compare("push_front") == 0){
			cin >> inputValue;
			dq.push_front(inputValue);
		}else if(command.compare("push_back") == 0){
			cin >> inputValue;
			dq.push_back(inputValue);
		}else if(command.compare("pop_front") == 0){
			if(dq.empty() == 0){
				int popValue = dq.front();
				dq.pop_front();
				cout << popValue << endl;
			}else{
				cout << -1 << endl;
			}
		}else if(command.compare("pop_back") == 0){
			if(dq.empty() == 0){
				int popValue = dq.back();
				dq.pop_back();
				cout << popValue << endl;
			}else{
				cout << -1 << endl;
			}
		}else if(command.compare("size") == 0){
			cout << dq.size() << endl;
		}else if(command.compare("empty") == 0){
			cout << dq.empty() << endl;
		}else if(command.compare("front") == 0){
			if(dq.empty() == 1) cout << -1 << endl;
			else cout << dq.front() << endl;
		}else if(command.compare("back") == 0){
			if(dq.empty() == 1) cout << -1 << endl;
			else cout << dq.back() << endl;
		}
	}
	return 0;
}
