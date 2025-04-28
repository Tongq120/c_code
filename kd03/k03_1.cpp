#include <iostream>
using namespace std;

int main()
{
	int age;
	cout << "年齢を入力してください。 ＞"; cin >> age;

	if (age < 20)
	{
		cout << "未成年なので購入できません。" ;
	}
	else
	{
		cout << "お支払い方法をお選びください。" ;

	}




	return 0;
}