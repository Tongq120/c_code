#include <iostream>

using namespace std;

int main()
{
	int unm = 0;
	int a = 1;

	cout << "数値の入力＞"; cin >> unm;

	if (unm < 0)
	{
		cout << "エラー";
	}
	else if (unm==0)
	    cout << "1 の位は0 ";



	


	while (unm >0)
	{
		
	 
		cout << a << " の位は" << unm % 10<< std::endl;
		a *= 10;

		unm = unm / 10;

		

	}
	






	return 0;
}