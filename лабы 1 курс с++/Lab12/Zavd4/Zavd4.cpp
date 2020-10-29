#include<iostream>
using namespace std;
class Shape
{
protected:
	string color;
	int lineWidth;
	int perimeter;
	int area;
public:
	Shape()
	{
		color = "black";
		lineWidth = 1;
	}
	Shape(string color, int lineWidth)
	{
		this->color = color;
		this->lineWidth = lineWidth;
	}
	virtual ~Shape()
	{
		cout << "Shape dectructor has worked" << endl;
	}
	void setColor(string color)
	{
		this->color = color;
	}
	void setLineWidth(int lineWidth)
	{
		this->lineWidth = lineWidth;
	}
	string getColor()
	{
		return color;
	}
	int getLineWidth()
	{
		return lineWidth;
	}
	int getPerimeter()
	{
		return perimeter;
	}
	int getArea()
	{
		return area;
	}
	virtual void perimeterCount()
	{

	}
	virtual void areaCount()
	{

	}
};
class Square : public Shape
{
protected:
	int width;
public:
	Square() : Shape()
	{
		width = 10;
	}
	Square(string color, int lineWidth, int width) : Shape(color, lineWidth)
	{
		this->width = width;
	}
	~Square()
	{
		cout << "Square dectructor has worked" << endl;
	}
	virtual void perimeterCount()
	{
		perimeter = 4 * width;
	}
	virtual void areaCount()
	{
		area = width * width;
	}
	void setWidth(int width)
	{
		this->width = width;
	}
	int getWidth()
	{
		return width;
	}
};
class Rectangle : public Square
{
private:
	int height;
public:
	Rectangle() : Square()
	{
		height = 5;
	}
	Rectangle(string color, int lineWidth, int width, int height) : Square(color, lineWidth, width)
	{
		this->height = height;
	}
	~Rectangle()
	{
		cout << "Rectangle destructor has worked" << endl;
	}
	virtual void perimeterCount()
	{
		perimeter = 2 * (height + width);
	}
	virtual void areaCount()
	{
		area = width * height;
	}
	void setHeight(int height)
	{
		this->height = height;
	}
	int getHeight()
	{
		return height;
	}
};
int main()
{
	Shape* pSquare = new Square("black", 2, 15); Shape* prect = new Rectangle("gray", 2, 15, 20);
	pSquare->perimeterCount(); pSquare->areaCount();
	prect->perimeterCount(); prect->areaCount();
	cout << pSquare->getPerimeter() << "\t" << pSquare->getArea() << endl;
	cout << prect->getPerimeter() << "\t" << prect->getArea() << endl;
	delete pSquare, prect;
	pSquare = nullptr; prect = nullptr;
	system("pause");
	return 0;
}