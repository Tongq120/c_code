#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;

int main()
{
	int age=0;

	cout << "�N�����͂��Ă���������"; cin >> age;

	if (age < 3 || age >= 70)
		cout << "���ꗿ������";

	else if (age >= 3 && age <= 15)
		cout << "�q�������Ŕ��z";

	else if (age >= 60 && age < 70)
		cout << "�u�V�j�A�����łP����";

	else
		cout << "�ʏ헿��";


	






	return 0;

}