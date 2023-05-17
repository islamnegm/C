#include <iostream>

class Rectangle
{
	private :
	float length;
	float width;
	
	public :
	
	Rectangle()
	{
		std::cout << "hello negm" <<std::endl;
	}
	void set_length(float len)
	{
		if(len >= 0)
		{
			length = len;
		}
		else 
		{
			std::cout << "error";
		}
	}
	void set_width(float wid)
	{
		if(wid >= 0)
		{
			width = wid;
		}
		else 
		{
			std::cout << "error";
		}
	}
	
	float get_length(void)
	{
		return length;
	}
	
	float get_width(void)
	{
		return width;
	}
	
	float get_area(void)
	{
		return length*width;
	}
	
	~Rectangle()
	{
		std::cout << "good bye"<<std::endl;
	}
	
};

int main()
{
	system("color b");
	Rectangle box;
	box.set_length(10);
	box.set_width(5);
	std::cout << "the area of the rectangle = " << box.get_area() << std::endl;
	return 0;
}