#include <iostream>
#include <unordered_set>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N, M; // N 그룹의 숫자 개수, M 그룹의 숫자 개수
    int count = 0; // N 그룹에 존재하는 M 그룹의 숫자 개수
    cin >> N >> M; 

    unordered_set<string> group; // N 그룹의 숫자들을 저장할 해시 테이블

    for (int i = 0; i < N; i++)
    {
        string str;
        cin >> str;

        group.insert(str);
    }

    for (int i = 0; i < M; i++)
    {
        string str;
        cin >> str;

        if (group.find(str) != group.end()) // N 그룹에 존재하면
        { 
            count++; // 증가
        }
    }

    cout << count;

    return 0;
}