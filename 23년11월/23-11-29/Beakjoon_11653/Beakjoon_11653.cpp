/*
* 작 성 일: 2023-11-29
* 문재 번호: 11653
* 문제 제목: 소인수분해
* 문제 링크: https://www.acmicpc.net/problem/11653
* 풀이 : 입력받은 수를 2부터 입력받은 수의 제곱근까지 반복하여 나누어 떨어지는 수를 소수로 추가한다.
*/
#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

int main()
{
    int number = 0; // 입력받은 수
    vector<int> prime; // 소수들을 저장할 벡터

    cin >> number;

    for (int i = 2; i <= sqrt(number); i++) // 2부터 입력받은 수의 제곱근까지 반복
    {
        if (number % i == 0) // 입력받은 수를 i로 나누었을 때 나머지가 0이면
        {
			prime.push_back(i); // i를 소수로 추가
			number /= i; // 입력받은 수를 i로 나눈 몫을 입력받은 수에 저장
			i = 1; // i를 1로 초기화하여 2부터 다시 시작
		}
	}

    if (number != 1) // 입력받은 수가 1이 아니면
    {
		prime.push_back(number); // 입력받은 수를 소수로 추가
	}

    for (int i = 0; i < prime.size(); i++) // 소수들 출력
    {
		cout << prime[i] << "\n";
	}

	return 0;
}
    