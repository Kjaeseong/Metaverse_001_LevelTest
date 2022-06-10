#include <stdio.h>

struct Student
{
	int Age;
	enum { A, B, O, AB } BloodType;
	char Name[24];
	struct Student* BestFriend;
};

int main(void)
{
	Student seonmun = { 20, 'A', "최선문", NULL};
	
	seonmun.BestFriend = 0;
		
		(*p).Age;

}