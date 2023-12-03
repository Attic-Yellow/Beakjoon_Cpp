/*
* 작 성 일: 2023-12-03
* 문재 번호: 17103
* 문제 제목: 골드바흐 파티션
* 문제 링크: https://www.acmicpc.net/problem/17103
* 풀이 방법:
*   1. 테스트 케이스의 개수 T를 입력받습니다.
*   2. 각 테스트 케이스에 대해 정수 n을 입력받습니다.
*   3. 에라토스테네스의 체를 이용해 n까지의 모든 소수를 찾습니다.
*      - 이 때, 소수 판별을 위한 배열을 생성하고 초기화합니다.
*   4. 2부터 n/2까지 반복하며 각 수 i가 소수일 때, n-i도 소수인지 확인합니다.
*      - i와 n-i가 모두 소수이면, 이는 하나의 골드바흐 파티션을 나타냅니다.
*   5. 모든 골드바흐 파티션의 개수를 세어 출력합니다.
*   6. 모든 테스트 케이스에 대해 위의 과정을 반복합니다.
*/
#include <iostream>
#include <cmath>
#include <vector>

using namespace std;

// 소수 판별 함수
void eratosthenes(vector<bool>& prime, int n)
{
	prime[0] = true; // 0은 소수가 아니다.
	prime[1] = true; // 1은 소수가 아니다.

	for (int i = 2; i *i <= n; i++) // 2부터 n의 제곱근까지
	{
		if (prime[i]) // 이미 체크된 수의 배수는 확인하지 않는다.
		{
			continue;
		}

		for (int j = (i * i); j <= n; j += i) // i의 배수들은 소수가 아니다.
		{
			prime[j] = true;
		}
	}
}

int main()
{
	vector<bool> prime(1000001, false);
	eratosthenes(prime, 1000000); // 1000000까지의 소수를 구한다.

	int testCase; // 테스트 케이스의 개수
	cin >> testCase;

	vector<int> input(testCase); 
	vector<int> answer(testCase, 0); // N보다 크고, 2N보다 작거나 같은 소수의 개수

	for (int i = 0; i < testCase; i++)
	{
		cin >> input[i];
	}

	for (int i = 0; i < testCase; i++)
	{
		for (int j = 2; j <= input[i] / 2; j++) // 2부터 N/2까지
		{
			if (!prime[j] && !prime[input[i] - j]) // 두 수가 모두 소수이면
			{
				answer[i]++;
			}
		}
	}

	for (int i = 0; i < answer.size(); i++)
	{
		cout << answer[i] << "\n";
	}

	return 0;
}