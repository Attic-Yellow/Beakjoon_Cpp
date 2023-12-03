/*
* 작 성 일: 2023-11-29
* 문재 번호: 27323
* 문제 제목: 직사각형 [다국어]
* 문제 링크: https://www.acmicpc.net/problem/27323
* 풀이: 두 개의 변의 길이를 곱함
*/
#include <iostream>

using namespace std;

int main()
{
	int height = 0; // 직사각형의 가로 길이
	int width = 0; // 직사각형의 세로 길이

	cin >> height >> width;

	cout << height * width << "\n";

	return 0;
}