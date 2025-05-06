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
					cout << "10 ‰~d‰Ý" << c << "–‡\t 50‰~d‰Ý" << b << "–‡\t 100‰~d‰Ý" << a << "–‡ " << std::endl;
				}
			}

		}

	}
	
	cout << "ˆÈã" << time << "’Ê‚è‚ð”­Œ©‚µ‚Ü‚µ‚½B";



	return 0;
}