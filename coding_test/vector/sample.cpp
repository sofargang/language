/*
 * 주어진 길이 N의 int배열 arr에서 합이 100인 서로 다른 위치의 두 원소가 존재하면 1을,
 * 존재하지 않으면 0을 반환하는 함수 func2(int arr[], int N)을 작성하라.
 * arr의 각 수는 0 이상 100이하이고 N은 1000이하이다.
 *
 * func2({1,52,48}, 3) = 1,
 * func2({50,42}, 2) = 0,
 * func2({4,13,63,87}, 4) = 1
 * 
 */

#include<bits/stdc++.h>
using namespace std;

/*
int func2(int arr[], int N){
	int occur[101] = {};
	for(int i=0;i<N;i++){
		if(occur[100-arr[i]] == 1)
			return 1;
		occur[arr[i]] = 1;
	}
	return 0;
}
*/

int func2(int arr[], int N){
	int answer = 0;
	int pos[101];

	for(int i=0;i<101;i++)
		pos[i] = 0;

	for(int i=0;i<N;i++)
		pos[arr[i]] = 1;

	for(int i=0;i<=50;i++){
		if(pos[i] == 1){
			pos[i]--;
			if(pos[100-i] == 1)
				answer = 1;
		}
	}
	
	return answer;
}

int main(void){
	ios::sync_with_stdio(0);
	cin.tie(0);

	int test1[] = {1, 52, 48};
	int test2[] = {50, 42};
	int test3[] = {4, 13, 63, 87};
	int test4[] = {1, 4, 21};
	
	cout << func2(test1, 3) << endl;
	cout << func2(test2, 2) << endl;
	cout << func2(test3, 4) << endl;
	cout << func2(test4, 3) << endl;
}


