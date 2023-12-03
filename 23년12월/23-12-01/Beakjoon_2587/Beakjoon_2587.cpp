/*
* 작 성 일: 2023-12-01
* 문재 번호: 2587
* 문제 제목: 대표값2
* 문제 링크: https://www.acmicpc.net/problem/2587
* 풀이 방법: 5개의 정수를 입력받아 평균값과 중앙값을 계산한 후 출력
*/
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
	vector<int> numbers(5); // 5개의 정수를 저장할 벡터
	int sum = 0;

	for (int i = 0; i < 5; i++)
	{
		cin >> numbers[i];
		sum += numbers[i];
	}

	sort(numbers.begin(), numbers.end());

	cout << sum / 5 << "\n" << numbers[2];

	return 0;
}