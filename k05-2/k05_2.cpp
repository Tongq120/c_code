#include <iostream>

using namespace std;

int main()
{
	int a = 0;

	do
	{
		cout << "起きろ～ \n1．起きた 2．あと5分... 3．Zzzz…  入力：";

		cin >> a;
		 

	} while (a != 1);

	cout << "よし、学校へ行こう！ " << std::endl;











	return 0;
}