#include <iostream>
using namespace std;

int main()
{
	int a = 0;
	int age = 0;
	double b = 0.0;

	for (a = 1;a <= 5;a++)
	{
		cout << a << " 人目の年齢を入力してください："; cin >> age;
		b += age;
	}
	cout<<std::endl;
	cout << "5 人の平均年齢は" << (b / 5) << "歳です。" << std::endl;







	return 0;
}