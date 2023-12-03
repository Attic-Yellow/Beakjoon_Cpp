/*
* 작 성 일: 2023-12-01
* 문재 번호: 18870
* 문제 제목: 좌표 압축
* 문제 링크: https://www.acmicpc.net/problem/18870
* 풀이 방법: 좌표들을 오름차순으로 정렬하고 중복을 제거한 후, 각 원본 좌표가 정렬된 벡터에서 어느 위치에 있는지를 찾아 그 인덱스를 출력함으로써 좌표를 압축하는 방식으로 작동
*/
#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;

int main()
{
	int count; // 좌표의 개수
	vector<long long> numbers; // 좌표를 저장할 벡터
	vector<long long> sortedNumbers; // 좌표를 정렬한 뒤 저장할 벡터

	cin >> count;

	for (int i = 0; i < count; i++)
	{
		long long number;
		cin >> number;
		numbers.push_back(number);
		sortedNumbers.push_back(number);
	}

	sort(sortedNumbers.begin(), sortedNumbers.end()); // 좌표를 오름차순으로 정렬

	sortedNumbers.erase(unique(sortedNumbers.begin(), sortedNumbers.end()), sortedNumbers.end()); // 중복된 좌표를 제거

	// 좌표를 압축한 결과를 출력
	for (int i = 0; i < count; i++)
	{
		cout << lower_bound(sortedNumbers.begin(), sortedNumbers.end(), numbers[i]) - sortedNumbers.begin() << " ";
	}

	return 0;
}

/*
int main()
{
	int count; // 좌표의 개수
	vector<int> numbers; // 좌표를 저장할 벡터
	vector<int> sortedNumbers; // 좌표를 정렬한 뒤 저장할 벡터
	vector<int> compressedNumbers; // 좌표를 압축한 뒤 저장할 벡터

	cin >> count;

	for (int i = 0; i < count; i++)
	{
		int number;
		cin >> number;
		numbers.push_back(number);
		sortedNumbers.push_back(number);
	}

	sort(sortedNumbers.begin(), sortedNumbers.end()); // 좌표를 오름차순으로 정렬

	// 좌표를 압축
	for (int i = 0; i < count; i++)
	{
		int number = sortedNumbers[i];
		if (i == 0)
		{
			compressedNumbers.push_back(number);
		}
		else
		{
			if (number != sortedNumbers[i - 1])
			{
				compressedNumbers.push_back(number);
			}
		}
	}

	// 좌표를 압축한 결과를 출력
	for (int i = 0; i < count; i++)
	{
		int number = numbers[i];
		int index = find(compressedNumbers.begin(), compressedNumbers.end(), number) - compressedNumbers.begin();
		cout << index << " ";
	}

	return 0;
}
*/