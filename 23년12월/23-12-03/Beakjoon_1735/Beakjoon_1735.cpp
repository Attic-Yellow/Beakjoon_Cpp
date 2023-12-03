/*
* 작 성 일: 2023-12-03
* 문재 번호: 1735
* 문제 제목: 분수 합
* 문제 링크: https://www.acmicpc.net/problem/1735
* 풀이 방법: 
*   1. 두 분수의 분자와 분모를 입력받습니다.
*   2. 두 분모의 최소공배수(LCM)를 구합니다.
*   3. 최소공배수를 기준으로 두 분수의 분자를 조정하여 더합니다.
*   4. 합한 분수의 분자와 분모의 최대공약수(GCD)를 유클리드 호제법으로 구합니다.
*   5. 최대공약수로 분자와 분모를 나누어 기약분수 형태로 결과를 축약합니다.
*   6. 기약분수 형태의 결과를 출력합니다.
*/

#include <iostream>
#include <vector>

using namespace std;

// 최대공약수 구하는 함수
int gcd(int left, int right)
{
    if (right == 0)
        return left;

    return gcd(right, left % right);
}

// 최소공배수 구하는 함수
int lcm(int left, int right)
{
    return left * right / gcd(left, right);
}

int main()
{

    vector<vector<int>> fractions(2, vector<int>(2)); // 분수를 저장할 벡터
    int molecules = 0; // 분자
    int denominator = 0; // 분모
    int temp = 0;

    cin >> fractions[0][0] >> fractions[0][1];
    cin >> fractions[1][0] >> fractions[1][1];

    denominator = lcm(fractions[0][1], fractions[1][1]); // 분모 구하기
    molecules = (fractions[0][0] * (denominator / fractions[0][1])) + (fractions[1][0] * (denominator / fractions[1][1])); // 분자 구하기
    temp = gcd(molecules, denominator);

    cout << molecules / temp << " " << denominator / temp;

    return 0;
}