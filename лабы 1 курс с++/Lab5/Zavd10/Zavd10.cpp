#include<iostream.h>//устаревшее объ€вление библиотеки iostream
//отсутствует именное пространство using namespace std;
void myFunc(int x);
void main() { int x, y; y = myFunc(int); }//в функцию должно передаватьс€ значение переменной, а не тип
void myFunc(int a) { return 4 * a; }//функци€ типа void не должна содежать оператор return