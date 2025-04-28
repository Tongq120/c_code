#include <iostream>
#include <stdlib.h>
#include<time.h>

using namespace std;


int main()
{
	int gender ;

	cout << "性別を選択してください。(0:男性 1:女性) ＞ "; 

	cin >> gender;

	switch (gender)
	{

	case 0 :
		cout << "あら、格好良いですね。";
		break;
	case 1 :

		cout << "あら、モデルさんみたいですね。";
		break;

	default :
		cout << "そんな選択肢はありません。";

		return 0;


	}












	return 0;
}