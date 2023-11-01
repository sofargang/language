#include <bits/stdc++.h>
using namespace std;

/* ARRAY 특징
 *
 *  - k번째 원소의 접근 : O(1)
 *  - 임의 위치에 원소 추가/제거 : O(N)
 *  - 메모리 상의 배치 : 연속
 *  - 추가적으로 필요한 공간 : X
 *
 */

int main(void) {
// ARRAY 초기화
  int a[21];
  int b[21][21];

  // 1. memset
  memset(a, 0, sizeof a);
  memset(b, 0, sizeof b);

  // 2. for
  for(int i = 0; i < 21; i++)
    a[i] = 0;
  for(int i = 0; i < 21; i++)
    for(int j = 0; j < 21; j++)
      b[i][j] = 0;

  // 3. fill
  fill(a, a+21, 0);
  for(int i = 0; i < 21; i++)
    fill(b[i], b[i]+21, 0);
}
