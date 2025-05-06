#include <iostream>

using namespace std;

int main()
{
	int a;
	int b = 0;
	

	cout << "倍々ゲームを行います\nいくら掛けますか？＞"; 

	cin >> a;

	while (a < 10000)
	{
		b++;
		a *= 2;
	}

	cout << b << "連勝でコイン" << a << "枚が得られます" << std::endl;










	return 0;
}
