#include <iostream>

using namespace std;

int main()
{
	int unm = 0;
	int a = 1;

	cout << "���l�̓��́�"; cin >> unm;

	if (unm < 0)
	{
		cout << "�G���[";
	}
	else if (unm==0)
	    cout << "1 �̈ʂ�0 ";



	


	while (unm >0)
	{
		
	 
		cout << a << " �̈ʂ�" << unm % 10<< std::endl;
		a *= 10;

		unm = unm / 10;

		

	}
	






	return 0;
}