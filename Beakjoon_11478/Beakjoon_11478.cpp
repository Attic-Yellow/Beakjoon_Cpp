#include <iostream>
#include <string>
#include <unordered_set>

using namespace std;

int main()
{
	string str; // 문자열
	string sPiece; // 문자열 조각

	cin >> str;

	unordered_set<string> piece; // 문자열 조각들을 저장할 해시 테이블
	
	for (int i = 0; i < str.size(); i++)
	{
		for (int j = i; j < str.size(); j++)
		{
			string sPiece = str.substr(i, j - i + 1); 
			piece.insert(sPiece); // 해시 테이블에 저장
		}
	}

	cout << piece.size(); // 문자열 조각의 개수

	return 0;
}
