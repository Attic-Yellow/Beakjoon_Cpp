/*
* 작 성 일: 2023-12-03
* 문재 번호: 4134
* 문제 제목: 다음 소수
* 문제 링크: https://www.acmicpc.net/problem/4134
* 풀이 방법: 
*   1. 정수 N의 개수를 입력받고, 각 정수에 대해 반복문을 실행합니다.
*   2. 주어진 정수 N부터 시작하여, 소수를 판별하는 함수를 사용해 다음 소수를 찾습니다.
*      - 이 때, 소수 판별 함수는 제곱근을 이용한 효율적인 방법으로 구현합니다.
*   3. 찾은 소수를 출력합니다.
*   4. 모든 테스트 케이스에 대해 위의 과정을 반복합니다.
*/
#include <iostream>
#include <cmath>
#include <vector>

using namespace std;

// 소수 판별 함수
bool isPrime(long long number)
{
    if (number <= 1) // 1은 소수가 아니다.
    {
        return false;
    }
    if (number == 2) // 2는 소수이다.
    {
        return true;
    }
    if (number % 2 == 0) // 2를 제외한 모든 짝수는 소수가 아니다.
    {
        return false;
    }
    for (long long i = 3; i <= sqrt(number); i += 2) // 2를 제외한 모든 짝수는 소수가 아니다.
    {
        if (number % i == 0)
        {
            return false;
        }
    }
    return true;
}

int main()
{
    int testCase; // 테스트 케이스의 개수
    cin >> testCase;

    vector<long long> input(testCase); 

    for (int i = 0; i < testCase; i++)
    {
		cin >> input[i];
	}

    for (int i = 0; i < testCase; i++)
    {

        while (true)
        {
            if (isPrime(input[i])) // 소수이면
            {
				cout << input[i] << endl;
				break;
			}
            else // 소수가 아니면
            {
				input[i]++; // 다음 수로 넘어간다.
			}
		}
	}

	return 0;
}