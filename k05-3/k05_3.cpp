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


	


	cout << "ゴーレム（HP：300 防御力：80） " << std::endl<<std::endl;
	

	do
	{
		cout << "残りHP：" << HP<<std::endl;

		srand((unsigned int)time(NULL));
		int x = rand() % 41;
		int y = rand() % 101;
		int z = rand() % 181;

		do
		{
			cout << "攻撃手段を選択してください（１．攻撃 ２．特技 ３．魔法） ＞"; cin >> a;
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
		cout << "ダメージは" << m << "です " << std::endl << std::endl;

		HP = HP - m;
		if (HP <= 0)
		{
			cout << "ゴーレムを倒した！";
			break;
		}
	} while (HP > 0);
	

	

	

	











	return 0;
}