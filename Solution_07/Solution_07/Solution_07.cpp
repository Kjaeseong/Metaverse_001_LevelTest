#include <iostream>
using namespace std;
/*
Solution_07
	5 * 5 빙고판 생성, 각 위치에 숫자는 중복없는 랜덤으로 배정.
	숫자를 입력받을때마다 해당 자리의 숫자는 지워짐
	가로/세로/대각선 빙고 완성시 빙고 수 +1

	1. 1~25사이의 수로 구성된 1차원 배열 생성
	2. 1번에서 생성한 1차원 배열의 수를 랜덤으로 2차원 배열로 이동
	3. 빙고판, 입력 숫자, 빙고 수 출력
	4. 숫자 입력시 2차원 배열의 해당 원소 0으로 바꿈, 0은 공백표기
	 ** 3 ~ 끝까지 반복
	
	2차원 배열을 BingoArr[y][x] 좌표로 두고, 한 줄의 합이 0이면 빙고 1번이 카운트 되는 방식으로 구현하려 했으나
	코드를 작성하다 보니 세로줄과 대각선을 어떻게 반복문으로 처리해야 할 지를 잘 모르겠습니다.
	 
	 현재 빙고판 출력 및 입력 숫자 지우기까지 구현했습니다.
*/


int main()
{
	srand(time(NULL));

	int arr[25];
	for (int i = 0; i < 25; i++)
	{
		arr[i] = i + 1;
	}
	
	int BingoArr[5][5];
	for (int j = 0; j < 5; j++)
	{
		for (int i = 0; i < 5; i++)
		{
			int RandNum = rand() % 25;
			while (arr[RandNum] == 0)
			{
				RandNum = rand() % 25;
			}
			BingoArr[j][i] = arr[RandNum]; 
			arr[RandNum] = 0;
		}
	}

	int InputNum = 0;
	int BingoCount = 0;
	while (1)
	{

		for (int j = 0; j < 5; j++)
		{
			for (int i = 0; i < 5; i++)
			{
				if (BingoArr[j][i] == InputNum)
				{
					BingoArr[j][i] = 0;
				}
			}
		}
		
		for (int j = 0; j < 5; j++)
		{
			for (int i = 0; i < 5; i++)
			{
				if (BingoArr[j][i] == 0)
				{
					cout << "\t";
				}
				else
				{
					cout << BingoArr[j][i] << "\t";
				}
			}
			cout << "\n\n";
		}

		cout << "현재 " << BingoCount << "줄의 빙고가 완성되었습니다\n" << endl;

		cout << "숫자를 입력해 주세요 : ";
		cin >> InputNum;
		system("cls");
	}
}