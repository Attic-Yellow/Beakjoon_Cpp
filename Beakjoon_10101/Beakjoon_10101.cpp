/*
* 작 성 일: 2023-11-30
* 문재 번호: 10101
* 문제 제목: 삼각형 외우기
* 문제 링크: https://www.acmicpc.net/problem/10101
* 풀이: 각도 입력받아 조건 비교한 후 삼각형의 종류 출력
*/
#include <iostream>
#include <vector>

using namespace std;

int main()
{
	int angle1 = 0;	// 첫번째 각도
	int angle2 = 0;	// 두번째 각도
	int angle3 = 0;	// 세번째 각도

	cin >> angle1 >> angle2 >> angle3;

	int angles = angle1 + angle2 + angle3; // 삼각형의 각도의 합

	if (angles == 180) // 삼각형의 각도의 합이 180도일 경우
	{
		if (angle1 == 60 && angle2 == 60 && angle3 == 60) // 세 각도가 모두 60도일 경우
		{
			cout << "Equilateral";
		}
		else if (angle1 == angle2 || angle1 == angle3 || angle2 == angle3) // 두 각도가 같을 경우
		{
			cout << "Isosceles";
		}
		else
		{
			cout << "Scalene";
		}
	}
	else // 삼각형의 각도의 합이 180도가 아닐 경우
	{
		cout << "Error";
	}
	
	return 0;

}