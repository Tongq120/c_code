#include <iostream>
#include <stdlib.h>
#include <time.h>


using namespace std;



int main()
{
	
	int HP = 300;   
	int D = 80;     
	int S = 80;
	int a;    


	


	cout << "ƒS[ƒŒƒ€iHPF300 –hŒä—ÍF80j " << std::endl<<std::endl;
	

	do
	{
		cout << "Žc‚èHPF" << HP<<std::endl;

		srand((unsigned int)time(NULL));
		int x = rand() % 41;
		int y = rand() % 101;
		int z = rand() % 181;

		do
		{
			cout << "UŒ‚Žè’i‚ð‘I‘ð‚µ‚Ä‚­‚¾‚³‚¢i‚PDUŒ‚ ‚QD“Á‹Z ‚RD–‚–@j „"; cin >> a;
		} while (a != 1 && a != 2 && a != 3);

		switch (a)
		{
		case 1:
			S = 60 + x;
			break;
		case 2:
			S = 30 + y;
			break;
		case 3:
			S = 20 + z;
			break;
		}
		int m = S - 80;
		if (m < 0)
		{
			m = 0;
		}
		else {
			m = S - 80;
		}
		cout << "ƒ_ƒ[ƒW‚Í" << m << "‚Å‚· " << std::endl << std::endl;

		HP = HP - m;
		if (HP <= 0)
		{
			cout << "ƒS[ƒŒƒ€‚ð“|‚µ‚½I";
			break;
		}
	} while (HP > 0);
	

	

	

	











	return 0;
}