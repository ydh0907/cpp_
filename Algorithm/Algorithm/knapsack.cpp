#include <iostream>

struct pair
{
public:
	int weight = 0;
	int value = 0;
};

// a�� b���� ū��? greater > equal(0) > lesser
int wsort(const void* a, const void* b) {
	return ((pair*)a)->weight - ((pair*)b)->weight;
}

//int main() {
//	// ȯ�� �Է�
//	int count, max;
//	std::cin >> count >> max;
//
//	// �迭 ���� / �ʱ�ȭ
//	pair t[101];
//	for (int i = 1; i <= count; i++)
//		std::cin >> t[i].weight >> t[i].value;
//	std::qsort(t, count + 1, 8, wsort);
//
//	// �Ҵ�
//	int** m = new int* [101];
//	for (int i = 0; i < 101; i++)
//		m[i] = new int[100001] {0, };
//
//	// DP
//	for (int i = 1; i <= count; i++)
//		for (int j = 1; j <= max; j++)
//			if (t[i].weight <= j)
//				m[i][j] = std::max(t[i].value + m[i - 1][j - t[i].weight], m[i - 1][j]);
//			else
//				m[i][j] = m[i - 1][j];
//	std::cout << m[count][max];
//}

/*
Ǯ��
����� ���� �ſ� ���Ƽ� DP�� Ǯ����ϴ� "knapsack problem".

������ i, ��� ������ ���Ը� j�� ���̺��� �����

���� ���� ���̺��� ���� (m[i - 1][j])

���� �� �� �ִ� �������� ���� (t[i].value + m[i - 1][j - t[i].weight])

���� ���� �����Ѵ�. (if max assign else assign)

�̷� ������ ä��� ���̺��� ������ ĭ�� ���� ���� ���Ǻ� �κ� ������ ���̴�.

tc 1
4 7
6 13
4 8
3 6
5 12

tc 2
1 2
1 12
*/