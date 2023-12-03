/*
* 작 성 일: 2023-12-03
* 문재 번호: 2485
* 문제 제목: 가로수
* 문제 링크: https://www.acmicpc.net/problem/2485
* 풀이 방법: 
*   1. 가로수의 위치를 배열로 입력받습니다.
*   2. 인접한 가로수 사이의 간격을 계산합니다.
*   3. 모든 간격의 최대공약수(GCD)를 유클리드 호제법을 이용해 구합니다.
*   4. 최대공약수를 이용해 필요한 추가 가로수의 수를 계산합니다.
*   5. 계산된 추가 가로수의 수를 출력합니다.
*/

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

// 최대공약수 구하는 함수
int gcd(int left, int right)
{
    if (right == 0)
        return left;

    return gcd(right, left % right);
}

int main()
{
    int treeCount; // 나무의 수
    int minGap = 0, answer = 0; // 최소 간격, 정답

    cin >> treeCount;

    vector<int> treePoint(treeCount); // 나무의 위치

    for (int i = 0; i < treeCount; i++)
    {
        cin >> treePoint[i];
    }

    sort(treePoint.begin(), treePoint.end());

    // 최소 간격을 구한다
    for (int i = 0; i < treeCount - 1; i++)
    {
        minGap = gcd(minGap, treePoint[i + 1] - treePoint[i]);
    }

    // 최소 간격으로 나무를 심는다
    for (int i = 0; i < treeCount - 1; i++)
    {
        int gap = treePoint[i + 1] - treePoint[i];
        answer += (gap / minGap) - 1;
    }

    cout << answer;

    return 0;
}