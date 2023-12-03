/*
* 작 성 일: 2023-11-29
* 문재 번호: 15894
* 문제 제목: 수학은 체육과목 입니다
* 문제 링크: https://www.acmicpc.net/problem/15894
* 풀이: 블록의 개수를 입력받아 블록의 개수 * 4를 출력함
*/
#include <iostream>
#include <vector>

using namespace std;

int main()
{
    long long block = 0;  // 블록의 개수
    long long result = 0;   // 결과값

    cin >> block;

    result = block * 4;

    cout << result << "\n";

    return 0;
}