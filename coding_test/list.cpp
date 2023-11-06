#include<bits/stdc++.h>
using namespace std;

/* LIST 특징
 *
 *  - k번째 원소의 접근 : O(k)
 *  - 임의 위치에 원소 추가/제거 : O(1)
 *  - 메모리 상의 배치 : 불연속
 *  - 추가적으로 필요한 공간 : O(N)
 */

int main(void){
  list<int> L = {1,2}; 			// 1 2
  list<int>::iterator t = L.begin(); 	// t는 1을 가리키는 중
  L.push_front(10); 			// 10 1 2
  cout << *t << '\n';		 	// t가 가리키는 값 = 1을 출력
  L.push_back(5); 			// 10 1 2 5
  L.insert(t, 6);	 		// t가 가리키는 곳 앞에 6을 삽입, 10 6 1 2 5
  t++; 					// t를 1칸 앞으로 전진, 현재 t가 가리키는 값은 2
  t = L.erase(t); 			// t가 가리키는 값을 제거, 그 다음 원소인 5의 위치를 반환
                  			// 10 6 1 5, t가 가리키는 값은 5
  cout << *t << '\n'; 			// 5
					
  for(auto i : L) cout << i << ' ';
  cout << '\n';

  for(list<int>::iterator it = L.begin(); it != L.end(); it++)
    cout << *it << ' ';
}
