#include <iostream>

using namespace std;

int main()
{
	int unm = 0;
	int a = 1;

	cout << "”’l‚Ì“ü—Í„"; cin >> unm;

	if (unm < 0)
	{
		cout << "ƒGƒ‰[";
	}
	else if (unm==0)
	    cout << "1 ‚ÌˆÊ‚Í0 ";



	


	while (unm >0)
	{
		
	 
		cout << a << " ‚ÌˆÊ‚Í" << unm % 10<< std::endl;
		a *= 10;

		unm = unm / 10;

		

	}
	






	return 0;
}