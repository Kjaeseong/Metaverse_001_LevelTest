/*
Solution_01
포인터와 레퍼런스 활용. 함수 외부에서 선언된 두 정수형 변수의 값을 서로 바꾸는 함수
*/


#include <iostream>
using namespace std;

void swap_a(int* a, int* b)
{
	int temp;
	temp = *b;
	*b = *a;
	*a = temp;
}

void swap_b(int& a, int& b)
{
	int temp;
	temp = b;
	b = a;
	a = temp;
}

int main()
{
	int a = 1;
	int b = 2;
	int c = 3;
	int d = 4;

	swap_a(&a, &b);
	cout << a << endl;
	cout << b << endl;

	swap_a(&c, &d);
	cout << c << endl;
	cout << d << endl;
}