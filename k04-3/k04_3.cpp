#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;

int main()
{
	int age=0;

	cout << "年齢を入力してください＞"; cin >> age;

	if (age < 3 || age >= 70)
		cout << "入場料金無料";

	else if (age >= 3 && age <= 15)
		cout << "子供料金で半額";

	else if (age >= 60 && age < 70)
		cout << "「シニア割引で１割引";

	else
		cout << "通常料金";


	






	return 0;

}