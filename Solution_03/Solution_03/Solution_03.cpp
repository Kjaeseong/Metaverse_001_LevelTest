/*
Solution_03
피라미드 별찍기
    *
   ^^^
  *****
 *******
*********
*/

#include <iostream>
using namespace std;

int main()
{
	for (int i = 1; i <= 5; i++)
	{
		for (int j = 5 - i; j > 0; j--)
		{
			cout << " ";
		}
		for (int k = 1; k <= i; k++)
		{
			cout << "*";
		}
		for (int k = 1; k < i; k++)
		{
			cout << "*";
		}
		cout << endl;
	}







}