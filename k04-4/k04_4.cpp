#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;

int main()
{
	srand((unsigned int)time(NULL));

	int a = rand() % 4;  /*0-3‚Ì”š*/

	int b;

	cout << "––– ‚¨‚İ‚­‚¶ƒvƒƒOƒ‰ƒ€ –––\n‚¨‚İ‚­‚¶‚ğˆø‚«‚Ü‚·‚© i‚Í‚¢F1 ‚¢‚¢‚¦F0j > ";
	cin >> b;

	switch (b)
	{
	case 0:
		
		break;


	case 1:
		switch (a)
		{
		case 0:
			cout << "‘å‹g ‚Æ‚Á‚Ä‚à‚¢‚¢‚±‚Æ‚ª‚ ‚è‚»‚¤II ";
			break;

		case 1:
			cout << "’†‹g ‚«‚Á‚Æ‚¢‚¢‚±‚Æ‚ ‚é‚ñ‚¶‚á‚È‚¢‚©‚È";
			break;

		case 2:
			cout << "¬‹g ­‚µ‚®‚ç‚¢‚Í‚¢‚¢‚±‚Æ‚ ‚é‚©‚à‚Ë";
			break;

		case 3:
			cout << "‹¥  ¡“ú‚Í‚¨‚Æ‚È‚µ‚­‚µ‚Ä‚¨‚¢‚½‚Ù‚¤‚ª‚¢‚¢‚©‚à ";
			break;




		 }
		
		/*if (a == 0)
			cout << "‘å‹g ‚Æ‚Á‚Ä‚à‚¢‚¢‚±‚Æ‚ª‚ ‚è‚»‚¤II ";

		else if (a == 1)
			cout << "’†‹g ‚«‚Á‚Æ‚¢‚¢‚±‚Æ‚ ‚é‚ñ‚¶‚á‚È‚¢‚©‚È";

		else if (a == 2)
			cout << "¬‹g ­‚µ‚®‚ç‚¢‚Í‚¢‚¢‚±‚Æ‚ ‚é‚©‚à‚Ë";

		else if (a == 3)
			cout << "‹¥  ¡“ú‚Í‚¨‚Æ‚È‚µ‚­‚µ‚Ä‚¨‚¢‚½‚Ù‚¤‚ª‚¢‚¢‚©‚à ";
		break;*/



		

	}





	return 0;
}