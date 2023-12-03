/*
* 작 성 일: 2023-11-30
* 문재 번호: 5073
* 문제 제목: 삼각형과 세 변
* 문제 링크: https://www.acmicpc.net/problem/5073
* 풀이: 세 변의 길이를 비교하여 삼각형의 종류를 출력
*/
#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int line1 = 0;	// 첫번째 변
	int line2 = 0;	// 두번째 변
	int line3 = 0;	// 세번째 변

	cin >> line1 >> line2 >> line3;

	while (line1 != 0 && line2 != 0 && line3 != 0) 
	{
		if (line1 == line2 && line2 == line3) // 세 변의 길이가 모두 같을 경우
		{
			cout << "Equilateral\n";
		}
		else if (line1 + line2 <= line3 || line1 + line3 <= line2 || line2 + line3 <= line1) // 세 변의 길이가 삼각형을 만들 수 없을 경우
		{
			cout << "Invalid\n";
		}
		else if (line1 == line2 || line2 == line3 || line1 == line3) // 두 변의 길이가 같을 경우
		{
			cout << "Isosceles\n";
		}
		else // 세 변의 길이가 모두 다를 경우
		{
			cout << "Scalene\n";
		}

		cin >> line1 >> line2 >> line3;
	}

	return 0;
}