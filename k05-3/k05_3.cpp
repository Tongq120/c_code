#include <iostream>
#include <stdlib.h>
#include <time.h>


using namespace std;



int main()
{
	
	int HP = 300;   
	int D = 80;     
	int S = 80;
	int a;    


	


	cout << "�S�[�����iHP�F300 �h��́F80�j " << std::endl<<std::endl;
	

	do
	{
		cout << "�c��HP�F" << HP<<std::endl;

		srand((unsigned int)time(NULL));
		int x = rand() % 41;
		int y = rand() % 101;
		int z = rand() % 181;

		do
		{
			cout << "�U����i��I�����Ă��������i�P�D�U�� �Q�D���Z �R�D���@�j ��"; cin >> a;
		} while (a != 1 && a != 2 && a != 3);

		switch (a)
		{
		case 1:
			S = 60 + x;
			break;
		case 2:
			S = 30 + y;
			break;
		case 3:
			S = 20 + z;
			break;
		}
		int m = S - 80;
		if (m < 0)
		{
			m = 0;
		}
		else {
			m = S - 80;
		}
		cout << "�_���[�W��" << m << "�ł� " << std::endl << std::endl;

		HP = HP - m;
		if (HP <= 0)
		{
			cout << "�S�[������|�����I";
			break;
		}
	} while (HP > 0);
	

	

	

	











	return 0;
}