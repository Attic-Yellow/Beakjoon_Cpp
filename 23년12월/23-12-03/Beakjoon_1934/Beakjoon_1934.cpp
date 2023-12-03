/*
* 작 성 일: 2023-12-03
* 문재 번호: 1934
* 문제 제목: 최소공배수
* 문제 링크: https://www.acmicpc.net/problem/1934
* 풀이 방법: 
*   1. 여러 쌍의 정수를 입력받습니다.
*   2. 각 쌍에 대해 유클리드 호제법을 사용하여 최대공약수(GCD)를 구합니다.
*   3. 두 수의 곱을 최대공약수로 나누어 최소공배수(LCM)를 계산합니다.
*   4. 각 쌍의 최소공배수를 출력합니다.
*/
#include <iostream>
#include <vector>

using namespace std;

// 최대공약수 구하는 함수
int gcd(int left, int right)
{
    int temp;

    while (right != 0)
    {
        temp = left % right;
        left = right;
        right = temp;
    }

    return left;
}

int main()
{
    int testCase = 0; // 테스트 케이스의 개수

    cin >> testCase;

    int A, B; // 두 수
    int answer = 0; // 최소공배수
    vector<int> answers; // 최소공배수들

    for (int i = 0; i < testCase; i++)
    {
        cin >> A >> B;

        answer = (A * B) / gcd(B, A);

        answers.push_back(answer);
    }

    for (int i = 0; i < answers.size(); i++)
    {
        cout << answers[i] << "\n";
    }

    return 0;
}