#include <iostream>
#include  <stdlib.h> 
#include  <time.h> 

using namespace std;
int main()
{
	int age = 0;

	cout << "年齢を入力してください。 ＞"; cin >> age;

	if (age < 3 || age >= 70)
	{

		cout << "入場料金無料です。";
	}
	else
	{
		cout << "通常料金です。";

	}









	return 0;
}