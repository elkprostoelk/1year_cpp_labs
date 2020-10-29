#define _USE_MATH_DEFINES
#include<iostream>
#include<fstream>
#include<iomanip>
using namespace std;
class Circle
{
private:
	float itsX, itsY, itsRadius;
public:
	Circle()
	{
		itsX = 100.; itsY = 100.; itsRadius = 20.;
	}
	Circle(float x, float y, float r=20.)
	{
		itsX = x; itsY = y; itsRadius = r;
	}
	Circle(bool isFile)
	{
		if (isFile == true)
		{
			ifstream in("circle.txt");
			in >> itsX >> itsY >> itsRadius;
			in.close();
		}
		else
		{
			cout << "Enter an X coordinate: "; cin >> itsX;
			cout << "Enter an Y coordinate: "; cin >> itsY;
			cout << "Enter a circle radius: "; cin >> itsRadius;
		}
	}
	Circle(const Circle&c)
	{
		cout << "Copying constructor has worked" << endl;
		itsX = c.itsX;
		itsY = c.itsY;
		itsRadius = c.itsRadius;
	}
	~Circle()
	{
		cout << "Deleting object..." << endl;
	}
	float getX()
	{
		return itsX;
	}
	float getY()
	{
		return itsY;
	}
	float getRadius()
	{
		return itsRadius;
	}
	void setX(float x)
	{
		itsX = x;
	}
	void setY(float y)
	{
		itsY = y;
	}
	void setRadius(float r)
	{
		itsRadius = r;
	}
	void printCircleData()
	{
		cout << getX() << "\t" << getY() << "\t" << getRadius() << endl;
	}
	float LengthOfCircle()
	{
		return 2 * M_PI * itsRadius;
	}
	float LengthOfCircle(float r)
	{
		return 2 * M_PI * r;
	}
	float AreaOfCircle()
	{
		return M_PI * itsRadius * itsRadius;
	}
	float AreaOfCircle(float r)
	{
		return M_PI * r * r;
	}
	float VolumeOfBall()
	{
		return (4. / 3.) * M_PI * itsRadius * itsRadius * itsRadius;
	}
	float VolumeOfBall(float r)
	{
		return (4. / 3.) * M_PI * r * r * r;
	}
	Circle operator ++()
	{
		++itsRadius;
		return *this;
	}
	Circle operator ++(int)
	{
		itsRadius++;
		return *this;
	}
	Circle operator --()
	{
		--itsRadius;
		return *this;
	}
	Circle operator --(int)
	{
		itsRadius--;
		return *this;
	}
	float operator +(Circle a)
	{
		return itsRadius + a.itsRadius;
	}
	bool operator ==(Circle a)
	{
		if (itsRadius == a.itsRadius) return true;
		else return false;
	}
	bool operator <(Circle a)
	{
		if (itsRadius < a.itsRadius) return true;
		else return false;
	}
	bool operator >(Circle a)
	{
		if (itsRadius > a.itsRadius) return true;
		else return false;
	}
};
int main()
{
	Circle c1, c2(2,3,30), c3(false); Circle* c4 = new Circle(true);
	c1.printCircleData(); c2.printCircleData(); c3.printCircleData(); c4->printCircleData();
	cout << "Circle num" << setw(10) << "Length" << setw(20) << "Square" << setw(20) << "Volume" << endl;
	cout << "1" << setw(20) << c1.LengthOfCircle() << setw(20) << c1.AreaOfCircle() << setw(20) << c1.VolumeOfBall() << endl;
	cout << "2" << setw(20) << c2.LengthOfCircle() << setw(20) << c2.AreaOfCircle() << setw(20) << c2.VolumeOfBall() << endl;
	cout << "3" << setw(20) << c3.LengthOfCircle() << setw(20) << c3.AreaOfCircle() << setw(20) << c3.VolumeOfBall() << endl;
	cout << "4" << setw(20) << c4->LengthOfCircle() << setw(20) << c4->AreaOfCircle() << setw(20) << c4->VolumeOfBall() << endl;
	system("pause");
	return 0;
}