#include <iostream>
using namespace std;

int main()
{
	int a = 0;
	int age = 0;
	double b = 0.0;

	for (a = 1;a <= 5;a++)
	{
		cout << a << " �l�ڂ̔N�����͂��Ă��������F"; cin >> age;
		b += age;
	}
	cout<<std::endl;
	cout << "5 �l�̕��ϔN���" << (b / 5) << "�΂ł��B" << std::endl;







	return 0;
}