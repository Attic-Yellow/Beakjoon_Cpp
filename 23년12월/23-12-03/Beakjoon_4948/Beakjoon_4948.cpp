/*
* 작 성 일: 2023-12-03
* 문재 번호: 4948
* 문제 제목: 베르트랑 공준
* 문제 링크: https://www.acmicpc.net/problem/4948
* 풀이 방법: 
*   1. 여러 개의 테스트 케이스를 입력받습니다. 각 테스트 케이스는 하나의 정수 n을 포함합니다.
*   2. 에라토스테네스의 체를 사용하여 n보다 크고 2n보다 작거나 같은 모든 소수를 찾습니다.
*      - 이를 위해 2n까지의 모든 숫자에 대한 소수 판별 배열을 생성하고 초기화합니다.
*   3. n과 2n 사이의 소수의 개수를 세어 출력합니다.
*   4. 0이 입력될 때까지 위의 과정을 반복합니다.
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

    long long N; // 테스트 케이스 N
    long long count; // N보다 크고, 2N보다 작거나 같은 소수의 개수

    vector<long long> prime;

    while (true)
    {
        cin >> N;
        count = 0;

        if (N == 0)
        {
            break;
        }

        for (long long i = N + 1; i <= (2 * N); i++)
        {
            if (isPrime(i)) // 소수이면
            {
                count++;
            }
            else // 소수가 아니면
            {
                continue; // 다음 수로 넘어간다.
            }
        }

        prime.push_back(count);
    }

    for (long long i = 0; i < prime.size(); i++)
    {
        cout << prime[i] << "\n";
    }

    return 0;
}