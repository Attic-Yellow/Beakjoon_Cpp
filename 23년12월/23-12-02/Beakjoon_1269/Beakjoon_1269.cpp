/*
* 작 성 일: 2023-12-02
* 문재 번호: 1269
* 문제 제목: 대칭 차집합
* 문제 링크: https://www.acmicpc.net/problem/1269
* 풀이 방법:
*/
#include <iostream>
#include <unordered_set>
#include <vector>

using namespace std;

int main()
{
    int A, B; // A, B 집합의 개수

    cin >> A >> B;

    unordered_set<int> groupA(A); // A 집합
    unordered_set<int> groupB(B); // B 집합

    for (int i = 0; i < A; i++)
    {
        int num;
        cin >> num;

        groupA.insert(num);
    }

    for (int i = 0; i < B; i++)
    {
        int num;
        cin >> num;

        if (groupA.find(num) != groupA.end()) // A 집합에 존재하는 원소라면
        {
            groupA.erase(num); // A 집합에서 제거
        }
        else // A 집합에 존재하지 않는 원소라면
        {
            groupB.insert(num); // B 집합에 추가
        }
    }

    cout << groupA.size() + groupB.size(); // A, B 집합의 합집합의 원소의 개수

    return 0;
}
