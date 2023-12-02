/*
* �� �� ��: 2023-12-01
* ���� ��ȣ: 10815
* ���� ����: ���� ī��
* ���� ��ũ: https://www.acmicpc.net/problem/10815
* Ǯ�� ���: ���� ����� �̿��� Ǯ��
*/
#include <iostream>
#include <unordered_set>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N, M; // N �׷��� ���� ����, M �׷��� ���� ����
    cin >> N;

    unordered_set<int> N_numbers; // N �׷��� ���ڵ��� ������ �ؽ� ���̺�

    // N �׷��� ���ڵ��� �Է¹޾� ����
    for (int i = 0; i < N; ++i)
    {
        int number;
        cin >> number;

        N_numbers.insert(number);
    }

    cin >> M;

    // M �׷��� �� ���ڸ� �Է¹��� ������ N �׷쿡 �����ϴ��� Ȯ��
    for (int i = 0; i < M; ++i)
    {
        int number;
        cin >> number;

        auto result = N_numbers.insert(number); // N �׷쿡 ���ڸ� �����ϰ� ���� ����� ����

        if (result.second) // ���� ����� true�̸� N �׷쿡 �������� �ʴ� ����
        {
            cout << 0 << " ";  // N �׷쿡 �����ϸ� 1 ���
        }
        else
        {
            cout << 1 << " ";  // N �׷쿡 �������� ������ 0 ���
        }
    }

    return 0;
}