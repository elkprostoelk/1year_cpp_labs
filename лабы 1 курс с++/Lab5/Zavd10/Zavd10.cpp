#include<iostream.h>//���������� ���������� ���������� iostream
//����������� ������� ������������ using namespace std;
void myFunc(int x);
void main() { int x, y; y = myFunc(int); }//� ������� ������ ������������ �������� ����������, � �� ���
void myFunc(int a) { return 4 * a; }//������� ���� void �� ������ �������� �������� return