/*
* 작 성 일: 2023-11-29
* 문재 번호: 2581
* 문제 제목: 소수
* 문제 링크: https://www.acmicpc.net/problem/2581
* 풀이 : 소수를 판변하는 함수로 소수를 판별한 후, 소수이면 primeSum에 더하고, primeMin에는 i를 저장한다.
*/
#include <iostream>
#include <vector>
#include <cmath>

using namespace std;


bool isPrime(int number)
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
    for (int i = 3; i <= sqrt(number); i += 2) // 2를 제외한 모든 짝수는 소수가 아니다.
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
    int smallNum = 0, bigNum = 0;   // 입력받은 수
    int primeSum = 0, primeMin = -1; // 소수들의 합, 소수들 중 최솟값

    cin >> smallNum >> bigNum;

    for (int i = smallNum; i <= bigNum; i++)
    {
        // i가 소수인지 판별
        // 소수이면 primeSum에 더하고, primeMin에는 i를 저장
        // 소수가 아니면 continue
        // primeSum이 0이면 -1 출력
        if (isPrime(i))
        {
            primeSum += i;
            if (primeMin == -1) 
            {
                primeMin = i; // 첫 소수를 찾으면 primeMin에 저장
            }
        }
    }

    if (primeSum == 0)
    {
        cout << primeMin << "\n";
    }
    else
    {
		cout << primeSum << "\n";
		cout << primeMin << "\n";
	}

    return 0;

}