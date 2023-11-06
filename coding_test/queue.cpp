#include<bits/stdc++.h>
using namespace std;

/* QUEUE 특징
 *
 *  - 원소의 추가 : O(1)
 *  - 원소의 제거 : O(1)
 *  - 제일 앞/뒤의 원소 확인 : O(1)
 *  - 제일 앞/뒤가 아닌 나머지 원소들의 확인/변경이 원칙적으로 불가능
 */

int main(void) {
  queue<int> Q;
  Q.push(10); 				// 10
  Q.push(20); 				// 10 20
  Q.push(30); 				// 10 20 30

  cout << Q.size() << '\n'; 		// 3

  if(Q.empty()) cout << "Q is empty\n";
  else cout << "Q is not empty\n"; 	// Q is not empty

  Q.pop(); 				// 20 30
  cout << Q.front() << '\n'; 		// 20
  cout << Q.back() << '\n'; 		// 30

  Q.push(40); 				// 20 30 40
  Q.pop(); 				// 30 40
  cout << Q.front() << '\n'; 		// 30
}
