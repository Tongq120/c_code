#include <iostream>
#include  <stdlib.h> 
#include  <time.h> 

using namespace std;

int main()
{
	srand((unsigned int)time(NULL));
	int a = rand() % 100;
	int b = 0;

	cout << a << endl;

	cout << "0����99�͈̔͂̐��l�����肳��܂����B\n���߂�ꂽ���l��\�z���A���̐��l�����傫�Ȓl����͂��Ă��������� ";cin >>b;
	cout << "���߂�ꂽ���l��" << a << "�ł��B"<<std::endl;
	/*if  (b > a)
	{
		cout << "�����ł��B";
	 }
	else
	{
		cout << "�s�����ł��B";

	}*/


	

	if (b < 0)
		cout << "�����ł��I";



	else if (b > 99)
		cout << "�����ł��I";

	else if (a == b)
		cout << "�������I";


	else if ((b-a>0)&&(b - a) <= 10)
		cout << "�吳���I";


	else if (b>a)
		cout << "�����ł��B";

	
	else if (b - a >= -10)
		cout << "�ɂ����I";



	else if (b<a)
		cout << "�s�����ł��B";


	




	





	return 0;
}
