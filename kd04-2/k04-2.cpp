#include <iostream>
#include <stdlib.h>
#include<time.h>

using namespace std;


int main()
{
	int gender ;

	cout << "���ʂ�I�����Ă��������B(0:�j�� 1:����) �� "; 

	cin >> gender;

	switch (gender)
	{

	case 0 :
		cout << "����A�i�D�ǂ��ł��ˁB";
		break;
	case 1 :

		cout << "����A���f������݂����ł��ˁB";
		break;

	default :
		cout << "����ȑI�����͂���܂���B";

		return 0;


	}












	return 0;
}