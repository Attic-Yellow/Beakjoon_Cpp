/*
* 작 성 일: 2023-11-29
* 문재 번호: 3009
* 문제 제목: 네 번째 점 [다국어]
* 문제 링크: https://www.acmicpc.net/problem/3009
* 풀이: 세 점의 좌표를 입력받아 나머지 한 점의 좌표를 구함
*/
#include <iostream>
#include <vector>

using namespace std;

int main()
{
	vector<vector<int>> point(3, vector<int>());	// 3개의 점을 저장할 2차원 벡터
	vector<int> result(2);	// 결과값을 저장할 벡터

	for (int i = 0; i < 3; i++)
	{
		int x = 0;	// x좌표
		int y = 0;	// y좌표

		cin >> x >> y;

		point[i].push_back(x);
		point[i].push_back(y);
	}

	// x좌표와 y좌표가 같은 점을 찾아서 나머지 한 점의 좌표를 구함
	if (point[0][0] == point[1][0])
	{
		result[0] = point[2][0];
	}
	else if (point[0][0] == point[2][0])
	{
		result[0] = point[1][0];
	}
	else
	{
		result[0] = point[0][0];
	}

	if (point[0][1] == point[1][1])
	{
		result[1] = point[2][1];
	}
	else if (point[0][1] == point[2][1])
	{
		result[1] = point[1][1];
	}
	else
	{
		result[1] = point[0][1];
	}

	cout << result[0] << " " << result[1] << "\n";

	return 0;
}