/*
* 작 성 일: 2023-11-30
* 문재 번호: 9063
* 문제 제목: 대지
* 문제 링크: https://www.acmicpc.net/problem/9063
* 풀이: 최대 x좌표, 최대 y좌표, 최소 x좌표, 최소 y좌표를 구하여 직사각형의 넓이를 구함
*/
#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>

using namespace std;

int main()
{
    int testCase = 0;   // 테스트 케이스의 개수

    cin >> testCase;
	int maxX = INT_MIN, maxY = INT_MIN;
	int minX = INT_MAX, minY = INT_MAX;

    for (int i = 0; i < testCase; i++)
    {
		int x = 0;  // x좌표
		int y = 0;  // y좌표

		cin >> x >> y;

		maxX = max(maxX, x);
		minX = min(minX, x);
		maxY = max(maxY, y);
		minY = min(minY, y);
	}

	int area = (maxX - minX) * (maxY - minY);

	cout << area << "\n";

	return 0;

}