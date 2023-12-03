/*
* 작 성 일: 2023-12-03
* 문재 번호: 13241
* 문제 제목: 최소공배수 [다국어]
* 문제 링크: https://www.acmicpc.net/problem/13241
* 풀이 방법: 
*   1. 두 정수 a와 b를 입력받습니다.
*   2. 유클리드 호제법을 사용하여 a와 b의 최대공약수(GCD)를 구합니다.
*   3. 최소공배수(LCM)는 a와 b를 곱한 값에 최대공약수(GCD)를 나눈 값으로 계산합니다.
*   4. 계산된 최소공배수(LCM)를 출력합니다.
*/
#include <iostream>

using namespace std;

// 최대공약수 구하는 함수
long long gcd(long long left, long long right)
{
    if (right == 0)
        return left;

    return gcd(right, left % right);
}

long long lcm(long long left, long long right)
{
    return left / gcd(left, right) * right; // 오버플로우 방지
}

int main()
{

    long long A, B; // 두 수
    long long answer = 0; // 최소공배수
    cin >> A >> B;

    answer = lcm(A, B); // 최소공배수 계산

    cout << answer;

    return 0;
}