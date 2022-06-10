#include <iostream>
using namespace std;

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