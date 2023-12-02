/*
* 작 성 일: 2023-12-01
* 문재 번호: 10815
* 문제 제목: 숫자 카드
* 문제 링크: https://www.acmicpc.net/problem/10815
* 풀이 방법: 파인드를 이용한 풀이
*/
#include <iostream>
#include <unordered_set>

using namespace std;

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N, M; // N 그룹의 숫자 개수, M 그룹의 숫자 개수
    cin >> N;

    unordered_set<int> N_numbers; // N 그룹의 숫자들을 저장할 해시 테이블

    // N 그룹의 숫자들을 입력받아 저장
    for (int i = 0; i < N; ++i) 
    {
        int number;
        cin >> number;

        N_numbers.insert(number);
    }

    cin >> M;

    // M 그룹의 각 숫자를 입력받을 때마다 N 그룹에 존재하는지 확인
    for (int i = 0; i < M; ++i) 
    {
        int number;
        cin >> number;
        
        cout << (N_numbers.find(number) != N_numbers.end()) << " "; // N 그룹에 존재하면 1, 존재하지 않으면 0 출력
    }

    return 0;
}