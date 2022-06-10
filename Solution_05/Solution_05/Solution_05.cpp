/*
Soultion_05
로또번호 생성기

최대 번호값, 생성 숫자 개수 입력
충복되지 않는 숫자 출력

로또 특성상 모든 숫자가 적힌 공들중 하나씩 뽑으므로 1 ~ max 범위의 숫자를 벡터에 입력.
한번 뽑힌 숫자는 0으로 수정, 랜덤 추첨시 숫자 0일경우 다시 랜덤 돌림.
*/
#include <iostream>
#include <vector>
using namespace std;

int main()
{
	srand(time(NULL));
	vector<int> lotto;
	int max;
	int num;

	cout << "최대 값 입력 : ";
	cin >> max;
	cout << "\n";
	cout << "추첨 개수 : ";
	cin >> num;
	cout << "\n";

	for (int i = 1; i <= max; i++)
	{
		lotto.push_back(i);
	}

	for (int i = 1; i <= num; i++)
	{
		int RandNum = rand() % max;
		while (lotto[RandNum] == 0)
		{
			RandNum = rand() % max;
		}
		cout << lotto[RandNum] << "\n";
		lotto[RandNum] = 0;
	}
}