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
	virtual void printOnScreen()
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
	virtual void printOnScreen()
	{
		cout << color << "\t" << lineWidth << "\t" << width << "\t" << perimeter << "\t" << area << endl;
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
	virtual void printOnScreen()
	{
		cout << color << "\t" << lineWidth << "\t" << width << "\t" << height << "\t" << perimeter << "\t" << area << endl;
	}
};
int main()
{
	int N = 4;
	Shape* pArray[4] = { new Square("blue", 2, 15), new Square("blue", 2, 20), new Rectangle("blue", 2, 15,20), new Rectangle("blue", 2, 20,30) };
	for (int i = 0; i < N; i++)
	{
		pArray[i]->perimeterCount();
		pArray[i]->areaCount();
	}
	for (int i = 0; i < N; i++)
	{
		cout << "#" << i << " ";
		pArray[i]->printOnScreen();
	}
	for (int i = 0; i < N; i++)
	{
		delete pArray[i];
		pArray[i] = nullptr;
	}
	system("pause");
	return 0;
}