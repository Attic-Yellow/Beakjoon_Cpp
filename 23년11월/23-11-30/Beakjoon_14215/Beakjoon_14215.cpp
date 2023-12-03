/*
* 작 성 일: 2023-11-30
* 문재 번호: 14215
* 문제 제목: 세 막대
* 문제 링크: https://www.acmicpc.net/problem/14215
* 풀이: 세 막대의 길이를 비교하여 삼각형을 만들 수 있는 최대 둘레를 출력
*/
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
	vector<int> line(3); // 세 막대의 길이

	cin >> line[0] >> line[1] >> line[2];

	sort(line.begin(), line.end());

	int result = line[0] + line[1];

	if (result <= line[2])
	{
		line[2] = result - 1;    // 가장 긴 막대의 길이를 줄여 삼각형을 만들 수 있도록 조정
	}

	int answer = result + line[2]; // 삼각형의 둘레 계산

	cout << answer;

	return 0;
}