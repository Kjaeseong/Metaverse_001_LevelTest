// Solution_02
// 0 ~ 1000범위의 3의 제곱을 나열(출력)
// 단순히 순차적으로 출력하는 코드이므로 반복문(for) 사용
// 매 연산마다 이전결과 * 3 연산하는 코드 작성

#include <iostream>
using namespace std;

int main()
{
	for (int i = 3; i <= 1000; i *= 3)
	{
		cout << i << endl;
	}
}

