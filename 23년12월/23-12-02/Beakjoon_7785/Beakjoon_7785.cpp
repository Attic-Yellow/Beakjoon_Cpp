/*
* 작 성 일: 2023-12-02
* 문재 번호: 7785
* 문제 제목: 회사에 있는 사람
* 문제 링크: https://www.acmicpc.net/problem/7785
* 풀이 방법:
*/
#include <iostream>
#include <map>
#include <string>

using namespace std;

int main() {
    int N; // 사람의 수
    cin >> N;

    map<string, string> member; // 출퇴근 명단

    for (int i = 0; i < N; i++) {
        string name, io;
        cin >> name >> io;

        if (io == "enter") {
            member[name] = io;
        }
        else {
            member.erase(name);
        }
    }

    for (auto it = member.rbegin(); it != member.rend(); ++it) { // 역순으로 출력
        cout << it->first << "\n";
    }

    return 0;
}