#include <iostream>
#include  <stdlib.h> 
#include  <time.h> 

using namespace std;

int main()
{
	srand((unsigned int)time(NULL));
	int a = rand() % 100;
	int b = 0;

	cout << a << endl;

	cout << "0から99の範囲の数値が決定されました。\n決められた数値を予想し、この数値よりも大きな値を入力してください＞ ";cin >>b;
	cout << "決められた数値は" << a << "です。"<<std::endl;
	/*if  (b > a)
	{
		cout << "正解です。";
	 }
	else
	{
		cout << "不正解です。";

	}*/


	

	if (b < 0)
		cout << "反則です！";



	else if (b > 99)
		cout << "反則です！";

	else if (a == b)
		cout << "お見事！";


	else if ((b-a>0)&&(b - a) <= 10)
		cout << "大正解！";


	else if (b>a)
		cout << "正解です。";

	
	else if (b - a >= -10)
		cout << "惜しい！";



	else if (b<a)
		cout << "不正解です。";


	




	





	return 0;
}
