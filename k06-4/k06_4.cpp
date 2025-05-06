#include <iostream>
using namespace std;

int main()
{
	int a = 0;
	int b = 0;
	int n = 1;

	for (int a = 1;a <= 9;a++,n++)
	{
		
		for (int b = 1;b <= a;b++)
		{
			cout << "*";
		}
		cout << endl;
	}





	return 0;
}