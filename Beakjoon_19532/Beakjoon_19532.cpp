/*
* 작 성 일: 2023-11-30
* 문재 번호: 19532
* 문제 제목: 수학은 비대면강의입니다
* 문제 링크: https://www.acmicpc.net/problem/19532
* 풀이 방법: 두 선형 연립방정식의 해를 구하는 알고리즘을 구현
*/
#include <iostream>

using namespace std;

int main()
{
	int x, y;
	int a, b, c;
	int d, e, f;

	cin >> a >> b >> c >> d >> e >> f;

	x = (c * e - b * f) / (a * e - b * d);
	y = (c * d - a * f) / (b * d - a * e);

	cout << x << " " << y;
}

/*블로그 작성 안함 해야함*/