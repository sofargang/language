#include<bits/stdc++.h>
using namespace std;

int main(void){
	ios::sync_with_stdio(0);
	cin.tie(0);

	queue<int> q;

	int commandCnt;
	int inputValue;
	string command;
	cin >> commandCnt;

	for(int i=0;i<commandCnt;i++){
		cin >> command;
		if(command.compare("push") == 0){
			cin >> inputValue;
			q.push(inputValue);
		}else if(command.compare("pop") == 0){
			if(q.empty() == 0){
				int popValue = q.front();
				q.pop();
				cout << popValue << endl;
			}else{
				cout << -1 << endl;
			}
		}else if(command.compare("size") == 0){
			cout << q.size() << endl;
		}else if(command.compare("empty") == 0){
			cout << q.empty() << endl;
		}else if(command.compare("front") == 0){
			if(q.empty() == 1) cout << -1 << endl;
			else cout << q.front() << endl;
		}else if(command.compare("back") == 0){
			if(q.empty() == 1) cout << -1 << endl;
			else cout << q.back() << endl;
		}
	}
	return 0;
}
