#include <iostream>
#include <cmath>


class Shape 
{
public:
    virtual double getArea() const = 0;
    virtual double getPerimeter() const = 0;
};

class Circle : public Shape 
{
	private:
    double radius;
    public:
    Circle(double radius) : radius(radius) 
	{
		
	}
    virtual double getArea() const override
	{
        return M_PI * radius * radius;
    }
    virtual double getPerimeter() const override 
	{
        return 2 * M_PI * radius;
    }
};

class Rectangle : public Shape
{
	private:
    double width, height;
public:
    Rectangle(double width, double height) : width(width), height(height) 
	{
		
	}
    virtual double getArea() const override 
	{
        return width * height;
    }
    virtual double getPerimeter() const override
	{
        return 2 * (width + height);
    }
};

class Triangle : public Shape 
{
	private:
    double a, b, c;
    public:
    Triangle(double a, double b, double c) : a(a), b(b), c(c) 
	{
		
	}
    virtual double getArea() const override 
	{
        double s = (a + b + c) / 2;
        return std::sqrt(s * (s - a) * (s - b) * (s - c));
    }
    virtual double getPerimeter() const override 
	{
        return a + b + c;
    }

};

int main() 
{
    Circle circle(5);
    Rectangle rectangle(3, 4);
    Triangle triangle(3, 4, 5);
	
    std::cout << "Circle area: " << circle.getArea() << ", perimeter: " << circle.getPerimeter() << std::endl;
    std::cout << "Rectangle area: " << rectangle.getArea() << ", perimeter: " << rectangle.getPerimeter() << std::endl;
    std::cout << "Triangle area: " << triangle.getArea() << ", perimeter: " << triangle.getPerimeter() << std::endl;

    return 0;
}