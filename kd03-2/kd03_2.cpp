#include <iostream>
using namespace std;
int main()
{
	float weight=0.0, height=0.0 ;

	

	cout << "�g������͂��Ă��������B ��"; cin >> height;

	cout << "�̏d����͂��Ă��������B �� "; cin >> weight;
	float BMI = (height * height) / 10000 * 22;

	cout << "���Ȃ��̕W���̏d��" << BMI << "kg�ł��B" << std::endl;
	if (weight > (BMI * 1.14))
		cout << "����C���ł��B";

	else if (weight > (BMI * 1.36))
		cout << "����߂�";

	else if (weight < (BMI * 0.84))
		cout << "�����C���ł��B";

	else if (weight < (BMI * 0.73))
		cout << "�����߂�";
	else
		cout << "���ʂł��ˁB";

















	return 0;
}