/*
* 작 성 일: 2023-12-01
* 문재 번호: 25305
* 문제 제목: 커트라인
* 문제 링크: https://www.acmicpc.net/problem/25305
* 풀이 방법: 내림차순으로 정렬하여 특정 순위의 점수를 출력
*/
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

// 내림차순 정렬을 위한 비교 함수
bool cmp(int& a, int& b)
{
	return a > b;
}

int main()
{
	int numbersOfPeople = 0; // 응시 인원 수
	int cutNumber = 0; // 상을 받을 수 있는 인원 수

	cin >> numbersOfPeople >> cutNumber;

	vector<int> scores(numbersOfPeople); // 응시자들의 점수를 저장할 벡터

	for (int i = 0; i < numbersOfPeople; i++)
	{
		cin >> scores[i];
	}

	sort(scores.begin(), scores.end(), cmp); // 내림차순 정렬

	cout << scores[cutNumber - 1];

	return 0;
}