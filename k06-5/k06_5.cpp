#include <iostream>
using namespace std;

int main()
{
	

	int time = 0;

	
	for (int a = 0;a * 100 <= 370;a++)
	{
		for (int b = 0;b * 50 + a * 100 <= 370;b++)
		{
			for (int c = 0;c * 10 + b * 50 + a * 100 <= 370;c++)
			{
				if (c * 10 + b * 50 + a * 100 == 370)
				{
					time++;
					cout << "10 �~�d��" << c << "��\t 50�~�d��" << b << "��\t 100�~�d��" << a << "�� " << std::endl;
				}
			}

		}

	}
	
	cout << "�ȏ�" << time << "�ʂ�𔭌����܂����B";



	return 0;
}