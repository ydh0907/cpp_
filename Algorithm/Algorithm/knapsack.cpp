#include <iostream>

struct pair
{
public:
	int weight = 0;
	int value = 0;
};

// a가 b보다 큰가? greater > equal(0) > lesser
int wsort(const void* a, const void* b) {
	return ((pair*)a)->weight - ((pair*)b)->weight;
}

//int main() {
//	// 환경 입력
//	int count, max;
//	std::cin >> count >> max;
//
//	// 배열 선언 / 초기화
//	pair t[101];
//	for (int i = 1; i <= count; i++)
//		std::cin >> t[i].weight >> t[i].value;
//	std::qsort(t, count + 1, 8, wsort);
//
//	// 할당
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
풀이
경우의 수가 매우 많아서 DP로 풀어야하는 "knapsack problem".

물건을 i, 모든 가능한 무게를 j로 테이블을 만들고

내가 없는 테이블의 무게 (m[i - 1][j])

내가 들어갈 수 있는 최적해의 무게 (t[i].value + m[i - 1][j - t[i].weight])

둘을 비교해 대입한다. (if max assign else assign)

이런 식으로 채우면 테이블의 마지막 칸이 가장 높은 조건부 부분 수열의 합이다.

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