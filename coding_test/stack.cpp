#include<bits/stdc++.h>
using namespace std;

/* STACK 특징
 *
 *  - 원소의 추가 : O(1)
 *  - 원소의 제거 : O(1)
 *  - 제일 상단의 원소 확인 : O(1)
 *  - 제일 상단이 아닌 나머지 원소들의 확인/변경이 원칙적으로 불가능
 */

int main(void) {
  stack<int> S;
  S.push(10); 				// 10
  S.push(20); 				// 10 20
  S.push(30); 				// 10 20 30

  cout << S.size() << '\n'; 		// 3

  if(S.empty()) cout << "S is empty\n";
  else cout << "S is not empty\n"; 	// S is not empty

  S.pop(); 				// 10 20
  cout << S.top() << '\n'; 		// 20
  S.pop(); 				// 10
  cout << S.top() << '\n'; 		// 10
  S.pop(); 				// empty
  
  if(S.empty()) cout << "S is empty\n"; // S is empty
  cout << S.top() << '\n'; 		// runtime error 발생
}
