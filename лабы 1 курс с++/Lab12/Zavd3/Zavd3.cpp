#include<iostream>
using namespace std;
class Shape
{
protected:
	string color;
	int lineWidth;
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
	int perimeter()
	{
		
	}
	int area()
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
	virtual int perimeter()
	{
		return 4 * width;
	}
	virtual int area()
	{
		return width * width;
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
	virtual int perimeter()
	{
		return 2 * (height + width);
	}
	virtual int area()
	{
		return width * height;
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
	Shape sh1, sh2("yellow", 4);
	cout << "Shape color\tLine width" << endl;
	cout << sh1.getColor() << "\t\t" << sh1.getLineWidth() << endl;
	cout << sh2.getColor() << "\t\t" << sh2.getLineWidth() << endl << endl;
	sh1.setColor("blue"); sh1.setLineWidth(7);
	cout << sh1.getColor() << "\t\t" << sh1.getLineWidth() << endl;
	cout << sh2.getColor() << "\t\t" << sh2.getLineWidth() << endl << endl;
	Square sq1, sq2("yellow", 4, 25);
	cout << "Shape color\tLine width\tSquare width\tPerimeter\tArea" << endl;
	cout << sq1.getColor() << "\t\t" << sq1.getLineWidth() << "\t\t" << sq1.getWidth() << "\t\t" << sq1.perimeter() << "\t\t" << sq1.area() << endl;
	cout << sq2.getColor() << "\t\t" << sq2.getLineWidth() << "\t\t" << sq2.getWidth() << "\t\t" << sq2.perimeter() << "\t\t" << sq2.area() << endl << endl;
	sq1.setColor("blue"); sq1.setLineWidth(7); sq1.setWidth(28);
	cout << sq1.getColor() << "\t\t" << sq1.getLineWidth() << "\t\t" << sq1.getWidth() << "\t\t" << sq1.perimeter() << "\t\t" << sq1.area() << endl;
	cout << sq2.getColor() << "\t\t" << sq2.getLineWidth() << "\t\t" << sq2.getWidth() << "\t\t" << sq2.perimeter() << "\t\t" << sq2.area() << endl << endl;
	Rectangle rect1, rect2("yellow", 4, 25, 20);
	cout << "Shape color\tLine width\tRect width\tRect height\tPerimeter\tArea" << endl;
	cout << rect1.getColor() << "\t\t" << rect1.getLineWidth() << "\t\t" << rect1.getWidth() << "\t\t" << rect1.getHeight() << "\t\t" << rect1.perimeter() << "\t\t" << rect1.area() << endl;
	cout << rect2.getColor() << "\t\t" << rect2.getLineWidth() << "\t\t" << rect2.getWidth() << "\t\t" << rect2.getHeight() << "\t\t" << rect2.perimeter() << "\t\t" << rect2.area() << endl << endl;
	rect1.setColor("blue"); rect1.setLineWidth(7); rect1.setWidth(28); rect1.setHeight(21);
	cout << rect1.getColor() << "\t\t" << rect1.getLineWidth() << "\t\t" << rect1.getWidth() << "\t\t" << rect1.getHeight() << "\t\t" << rect1.perimeter() << "\t\t" << rect1.area() << endl;
	cout << rect2.getColor() << "\t\t" << rect2.getLineWidth() << "\t\t" << rect2.getWidth() << "\t\t" << rect2.getHeight() << "\t\t" << rect2.perimeter() << "\t\t" << rect2.area() << endl << endl;
	system("pause");
	return 0;
}