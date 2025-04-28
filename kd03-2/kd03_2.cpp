#include <iostream>
using namespace std;
int main()
{
	float weight=0.0, height=0.0 ;

	

	cout << "身長を入力してください。 ＞"; cin >> height;

	cout << "体重を入力してください。 ＞ "; cin >> weight;
	float BMI = (height * height) / 10000 * 22;

	cout << "あなたの標準体重は" << BMI << "kgです。" << std::endl;
	if (weight > (BMI * 1.14))
		cout << "太り気味です。";

	else if (weight > (BMI * 1.36))
		cout << "太り過ぎ";

	else if (weight < (BMI * 0.84))
		cout << "痩せ気味です。";

	else if (weight < (BMI * 0.73))
		cout << "痩せ過ぎ";
	else
		cout << "普通ですね。";

















	return 0;
}