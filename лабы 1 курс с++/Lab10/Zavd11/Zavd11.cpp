#define _USE_MATH_DEFINES
#include<iostream>
#include<fstream>
using namespace std;
class Circle
{
private:
	float *itsX, *itsY, *itsRadius;
public:
	Circle()
	{
		itsX = new float(100.); itsY = new float(100.); itsRadius = new float(20);
	}
	Circle(float x, float y, float r = 20.)
	{
		itsX = new float(x); itsY = new float(y); itsRadius = new float(r);
	}
	Circle(bool isFile)
	{
		itsX = new float; itsY = new float; itsRadius = new float;
		if (isFile == true)
		{
			ifstream in("circle.txt");
			in >> *itsX >> *itsY >> *itsRadius;
			in.close();
		}
		else
		{
			cout << "Enter an X coordinate: "; cin >> *itsX;
			cout << "Enter an Y coordinate: "; cin >> *itsY;
			cout << "Enter a circle radius"; cin >> *itsRadius;
		}
	}
	Circle(const Circle& c)
	{
		itsX = new float(*c.itsX);
		itsY = new float(*c.itsY);
		itsRadius = new float(*c.itsRadius);
	}
	~Circle()
	{
		delete itsX; delete itsY; delete itsRadius;
	}
	float getX()
	{
		return *itsX;
	}
	float getY()
	{
		return *itsY;
	}
	float getRadius()
	{
		return *itsRadius;
	}
	void setX(float x)
	{
		*itsX = x;
	}
	void setY(float y)
	{
		*itsY = y;
	}
	void setRadius(float r)
	{
		*itsRadius = r;
	}
	void printCircleData()
	{
		cout << getX() << "\t" << getY() << "\t" << getRadius() << endl;
	}
	float LengthOfCircle()
	{
		return 2 * M_PI * *itsRadius;
	}
	float LengthOfCircle(float r)
	{
		return 2 * M_PI * r;
	}
	float AreaOfCircle()
	{
		return M_PI * *itsRadius * *itsRadius;
	}
	float AreaOfCircle(float r)
	{
		return M_PI * r * r;
	}
	float VolumeOfBall()
	{
		return (4. / 3.) * M_PI * *itsRadius * *itsRadius * *itsRadius;
	}
	float VolumeOfBall(float r)
	{
		return (4. / 3.) * M_PI * r * r * r;
	}
	Circle operator ++()
	{
		++(*itsRadius);
		return *this;
	}
	Circle operator ++(int)
	{
		(*itsRadius)++;
		return *this;
	}
	Circle operator --()
	{
		--(*itsRadius);
		return *this;
	}
	Circle operator --(int)
	{
		(*itsRadius)--;
		return *this;
	}
	float operator +(Circle& a)
	{
		return *itsRadius + a.getRadius();
	}
	bool operator ==(Circle& a)
	{
		return *itsRadius == a.getRadius();
	}
	bool operator <(Circle& a)
	{
		return *itsRadius < a.getRadius();
	}
	bool operator >(Circle& a)
	{
		return *itsRadius > a.getRadius();
	}
	void operator =(Circle& a)
	{
		*this->itsX = *a.itsX;
		*this->itsY = *a.itsY;
		*this->itsRadius = *a.itsRadius;
	}
};
int main()
{
	Circle c1; Circle c2(14, 14, 60);
	cout << "Starting values:" << endl;
	c1.printCircleData(); c2.printCircleData();
	c1++; c2++;
	cout << "After postfix incremention:" << endl;
	c1.printCircleData(); c2.printCircleData();
	++c1; ++c2;
	cout << "After prefix incremention:" << endl;
	c1.printCircleData(); c2.printCircleData();
	c1--; c2--;
	cout << "After postfix decremention:" << endl;
	c1.printCircleData(); c2.printCircleData();
	--c1; --c2;
	cout << "After prefix decremention:" << endl;
	c1.printCircleData(); c2.printCircleData();
	if (c1 > c2) cout << "c1>c2" << endl;
	if (c1 == c2) cout << "c1==c2" << endl;
	if (c1 < c2) cout << "c1<c2" << endl;
	c1 = c2;
	cout << "After assignment:" << endl;
	c1.printCircleData(); c2.printCircleData();
	system("pause");
	return 0;
}