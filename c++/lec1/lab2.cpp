#include <iostream>

namespace total
{
	namespace circle
	{
		double x;
	    double y;
		void print()
		{
			std::cout << "circle area = " << x+y << std::endl;
		    std::cout << "x = " << total::circle::x << " " << " y = " << total::circle::y << std::endl;
		}
	}
	namespace tri
    {
		double x;
	    double y;
		void print()
		{
			std::cout << "tri area = " << x*y << std::endl;
            std::cout << "x = " << total::tri::x << " " << " y = " << total::tri::y << std::endl;
		}
    }
	namespace reg
    {
		double x;
	    double y;
		void print()
		{
			std::cout << "reg area = " << x/y << std::endl;
		    std::cout << "x = " << total::reg::x << " " << " y = " << total::reg::y << std::endl;
		}
    }
}

int main()
{
	std::cout << "please entre x of circle" << std::endl;
	std::cin >> total::circle::x;
	std::cout << "please entre y of circle" << std::endl;
	std::cin >> total::circle::y;
	
	
	std::cout << "please entre x of tri" << std::endl;
	std::cin >> total::tri::x;
	std::cout << "please entre y of tri" << std::endl;
	std::cin >> total::tri::y;
	
	std::cout << "please entre x of reg" << std::endl;
	std::cin >> total::reg::x;
	std::cout << "please entre y of reg" << std::endl;
	std::cin >> total::reg::y;
	
	total::circle::print();
	total::reg::print();
	total::tri::print();
	
	return 0;
}