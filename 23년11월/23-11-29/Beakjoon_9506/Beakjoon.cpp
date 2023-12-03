/*
* 작 성 일: 2023-11-29
* 문재 번호: 9506
* 문제 제목: 약수들의 합
* 문제 링크: https://www.acmicpc.net/problem/9506
* 풀이: 입력받은 수의 약수를 구한 후, 약수들의 합이 입력받은 수와 같은지 비교한다.
*/
#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int testNum = 0;    // 입력받은 수
    int result = 0;	 // 약수들의 합
    vector<int> divisor; // 약수들을 저장할 벡터

    while (1)
    {
        cin >> testNum;
        divisor.clear();    // 벡터 초기화
        result = 0;         // 약수들의 합 초기화

        // -1을 입력받으면 프로그램 종료
        if (testNum == -1)
        {
            break;
        }

        for (int i = 1; i < testNum; i++) // 1부터 입력받은 수 - 1까지 반복
        {
            if (testNum % i == 0) // 입력받은 수를 i로 나누었을 때 나머지가 0이면
            {
                divisor.push_back(i); // i를 약수로 추가
            }
        }

        for (int i = 0; i < divisor.size(); i++) // 약수들의 합 구하기
        {
            result += divisor[i];   // 약수들의 합
        }

        if (testNum != result) // 입력받은 수와 약수들의 합이 같지 않으면
        {
            cout << testNum << " is NOT perfect." << "\n"; // 완전수가 아님
        }
        else // 입력받은 수와 약수들의 합이 같으면
        {
            cout << testNum << " = ";
            for (int i = 0; i < divisor.size(); i++)
            {
                if (i == divisor.size() - 1)
                {
                    cout << divisor[i] << "\n";
                }
                else
                {
                    cout << divisor[i] << " + ";
                }
            }
        }
    }

    return 0;
}