/*
Solution_04
배열의 값을 오름차순으로 정렬, 반환하는 함수 구현

1. 함수 호출시 배열 명, 원소 수량 입력받아 배열 내 최대값, 최소값 구함.
2. 반복문으로 최소값부터 최대값까지 순서대로 출력
*/

#include <iostream>
using namespace std;

void sortArray(int* arr, int n)
{
	int max = 0;
	int min;

	for (int i = 0; i < n; i++)
	{
		if (arr[i] > max)
		{
			max = arr[i];
		}
		min = max;
	}

	for (int i = 0; i < n; i++)
	{
		if (arr[i] < min)
		{
			min = arr[i];
		}
	}

	while (min <= max)
	{
		for (int i = 0; i < n; i++)
		{
			if (min == arr[i])
			{
				cout << arr[i] << "\n";
			}
		}
		min++;
	}
}


int main()
{
	int arr[5] = { 5, 2, 4, 1, 3 };
	sortArray(arr, 5);
}