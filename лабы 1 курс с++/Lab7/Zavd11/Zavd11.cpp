#include<iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Ukrainian");
	float earthshake; bool continueWork;
	do
	{
		cin >> earthshake;
		if (earthshake < 5) cout << "Легке, немає руйнувань" << endl;
		else if (earthshake >= 5 && earthshake < 5.5) cout << "Середнє, невеликі руйнування" << endl;
		else if (earthshake >= 5.5 && earthshake < 6.5) cout << "Серйозне руйнування і пошкодження стін" << endl;
		else if (earthshake >= 6.5 && earthshake < 7.5) cout << "Лихо, багато будинків і стіни пошкоджені" << endl;
		else cout << "Катастрофа, більшість будинків і будівель зруйновані" << endl;
		cout << "Продовжити? 1-так, 0-ні: ";
		cin >> continueWork;
	} while (continueWork == true);
	system("pause");
	return 0;
}