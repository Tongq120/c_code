#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;

int main()
{
	srand((unsigned int)time(NULL));

	int a = rand() % 4;  /*0-3�̐���*/

	int b;

	cout << "������ ���݂����v���O���� ������\n���݂����������܂��� �i�͂��F1 �������F0�j > ";
	cin >> b;

	switch (b)
	{
	case 0:
		
		break;


	case 1:
		switch (a)
		{
		case 0:
			cout << "��g �Ƃ��Ă��������Ƃ����肻���I�I ";
			break;

		case 1:
			cout << "���g �����Ƃ������Ƃ���񂶂�Ȃ�����";
			break;

		case 2:
			cout << "���g �������炢�͂������Ƃ��邩����";
			break;

		case 3:
			cout << "��  �����͂��ƂȂ������Ă������ق����������� ";
			break;




		 }
		
		/*if (a == 0)
			cout << "��g �Ƃ��Ă��������Ƃ����肻���I�I ";

		else if (a == 1)
			cout << "���g �����Ƃ������Ƃ���񂶂�Ȃ�����";

		else if (a == 2)
			cout << "���g �������炢�͂������Ƃ��邩����";

		else if (a == 3)
			cout << "��  �����͂��ƂȂ������Ă������ق����������� ";
		break;*/



		

	}





	return 0;
}