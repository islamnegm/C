#include <iostream>

template<typename X1 ,typename X2 ,typename X3 ,typename X4 >
X4 sum (X1 num1, X2 num2 ,X3 num3)
{
    return num1+num2+num3;
}

namespace sharq
{
	namespace zag
	{
		int people;
		int workers;
		int familes;
		int students;
		void print()
		{
			std::cout << "number of people in zag city : " << sharq::zag::people << std::endl;
			std::cout << "number of workers in zag city : " << sharq::zag::workers << std::endl;
			std::cout << "number of familes in zag city : " << sharq::zag::familes << std::endl;
			std::cout << "number of students in zag city : " << sharq::zag::students << std::endl;
		}
		void edit()
		{
			std::cout << "you want to edit the date of the city" << std::endl;
			std::cout << "please entre the number of people in zag city" << std::endl;
			std::cin >> sharq::zag::people;
			std::cout << "please entre the number of workers in zag city" << std::endl;
			std::cin >> sharq::zag::workers;
			std::cout << "please entre the number of familes in zag city" << std::endl;
			std::cin >> sharq::zag::familes;
			std::cout << "please entre the number of students in zag city" << std::endl;
			std::cin >> sharq::zag::students;
			std::cout << std::endl;
		}
	}
	namespace hah
	{
		int people;
		int workers;
		int familes;
		int students;
		void print()
		{
			std::cout << "number of people in hah city : " << sharq::hah::people << std::endl;
			std::cout << "number of workers in hah city : " << sharq::hah::workers << std::endl;
			std::cout << "number of familes in hah city : " << sharq::hah::familes << std::endl;
			std::cout << "number of students in hah city : " << sharq::hah::students << std::endl;
		}
		void edit()
		{
			std::cout << "you want to edit the date of the city" << std::endl;
			std::cout << "please entre the number of people in hah city" << std::endl;
			std::cin >> sharq::hah::people;
			std::cout << "please entre the number of workers in hah city" << std::endl;
			std::cin >> sharq::hah::workers;
			std::cout << "please entre the number of familes in hah city" << std::endl;
			std::cin >> sharq::hah::familes;
			std::cout << "please entre the number of students in hah city" << std::endl;
			std::cin >> sharq::hah::students;
			std::cout << std::endl;
		}
	}
	namespace sob
	{
		int people;
		int workers;
		int familes;
		int students;
		void print()
		{
			std::cout << "number of people in sob city : " << sharq::sob::people << std::endl;
			std::cout << "number of workers in sob city : " << sharq::sob::workers << std::endl;
			std::cout << "number of familes in sob city : " << sharq::sob::familes << std::endl;
			std::cout << "number of students in sob city : " << sharq::sob::students << std::endl;
		}
		void edit()
		{
			std::cout << "you want to edit the date of the city" << std::endl;
			std::cout << "please entre the number of people in sob city" << std::endl;
			std::cin >> sharq::sob::people;
			std::cout << "please entre the number of workers in sob city" << std::endl;
			std::cin >> sharq::sob::workers;
			std::cout << "please entre the number of familes in sob city" << std::endl;
			std::cin >> sharq::sob::familes;
			std::cout << "please entre the number of students in sob city" << std::endl;
			std::cin >> sharq::sob::students;
			std::cout << std::endl;
		}
	}
	void students_nums()
	{
		std::cout<<"the sum of students : " <<sum <int,int,int,int>(sharq::zag::students,sharq::hah::students,sharq::sob::students)<<std::endl;
	}
	
	void workers_nums()
	{
		std::cout<<"the sum of workers : " <<sum <int,int,int,int>(sharq::zag::workers,sharq::hah::workers,sharq::sob::workers)<<std::endl;
	}
	
	void familes_nums()
	{
		std::cout<<"the sum of familes : " <<sum <int,int,int,int>(sharq::zag::familes,sharq::hah::familes,sharq::sob::familes)<<std::endl;
	}
	
	void people_nums()
	{
		std::cout<<"the sum of people : " <<sum <int,int,int,int>(sharq::zag::people,sharq::hah::people,sharq::sob::people)<<std::endl;
	}
	void delete_zag()
	{
		sharq::zag::students =0;
		sharq::zag::familes =0;
		sharq::zag::workers =0;
		sharq::zag::people =0;
	}
	void delete_hah()
	{
		sharq::hah::students =0;
		sharq::hah::familes =0;
		sharq::hah::workers =0;
		sharq::hah::people =0;
	}
	void delete_sob()
	{
		sharq::sob::students =0;
		sharq::sob::familes =0;
		sharq::sob::workers =0;
		sharq::sob::people =0;
	}
}
int main()
{
	int option;
	int city;
	int d_city;
	std::cout << "======= zag city =======" << std::endl;
	std::cout << "please entre the number of people in zag city" << std::endl;
	std::cin >> sharq::zag::people;
	std::cout << "please entre the number of workers in zag city" << std::endl;
	std::cin >> sharq::zag::workers;
	std::cout << "please entre the number of familes in zag city" << std::endl;
	std::cin >> sharq::zag::familes;
	std::cout << "please entre the number of students in zag city" << std::endl;
	std::cin >> sharq::zag::students;
	std::cout << std::endl;
	
	std::cout << "======= hah city =======" << std::endl;
	std::cout << "please entre the number of people in hah city" << std::endl;
	std::cin >> sharq::hah::people;
	std::cout << "please entre the number of workers in hah city" << std::endl;
	std::cin >> sharq::hah::workers;
	std::cout << "please entre the number of familes in hah city" << std::endl;
	std::cin >> sharq::hah::familes;
	std::cout << "please entre the number of students in hah city" << std::endl;
	std::cin >> sharq::hah::students;
	std::cout << std::endl;
	
	std::cout << "======= sob city =======" << std::endl;
	std::cout << "please entre the number of people in sob city" << std::endl;
	std::cin >> sharq::sob::people;
	std::cout << "please entre the number of workers in sob city" << std::endl;
	std::cin >> sharq::sob::workers;
	std::cout << "please entre the number of familes in sob city" << std::endl;
	std::cin >> sharq::sob::familes;
	std::cout << "please entre the number of students in sob city" << std::endl;
	std::cin >> sharq::sob::students;
	std::cout << std::endl;
	
	while(1)
	{
		std::cout << "==== ==== ==== ==== " << std::endl;
		std::cout << std::endl;
		std::cout << "what do you want to do " << std::endl;
		std::cout << "to print data of city put : 1" << std::endl;
		std::cout << "to edit data of city put : 2" << std::endl;
		std::cout << "to print the number of all students put : 3" <<std::endl;
		std::cout << "to print the number of all workers put : 4" <<std::endl;
		std::cout << "to print the number of all familes put : 5" <<std::endl;
		std::cout << "to print the number of all people put : 6" <<std::endl;
        std::cout << "to delete data of city put : 7" << std::endl;		
		std::cin >> option;
	
		switch(option)
		{
			case 1:
				   std::cout << "which city is you want" << std::endl;
				   std::cout << "zag city put : 1" << std::endl;
				   std::cout << "hah city put : 2" << std::endl;
				   std::cout << "sob city put : 3" << std::endl;
				   std::cin >> city;
				   switch(city)
				   {
					   case 1:
							  sharq::zag::print();
					   break;
					   case 2:
							  sharq::hah::print();
					   break;
					   case 3:
							  sharq::sob::print();
					   break;
					   default :
					   break;
				   }
			break;
			
			case 2:
				   std::cout << "which city is you want" << std::endl;
				   std::cout << "zag city put : 1" << std::endl;
				   std::cout << "hah city put : 2" << std::endl;
				   std::cout << "sob city put : 3" << std::endl;
				   std::cin >> city;
				   switch(city)
				   {
					   case 1:
							  sharq::zag::edit();
					   break;
					   case 2:
							  sharq::hah::edit();
					   break;
					   case 3:
							  sharq::sob::edit();
					   break;
					   default :
					   break;
				   }
			break;
			
			case 3:
			       sharq::students_nums();
			break; 
			case 4:
			       sharq::workers_nums();
			break;
			case 5:
			       sharq::familes_nums();
			break;
			case 6:
			       sharq::people_nums();
			break;
			case 7:
			       std::cout << "which city is you want" <<std::endl;
				   std::cout << "zag city put : 1" << std::endl;
				   std::cout << "hah city put : 2" << std::endl;
				   std::cout << "sob city put : 3" << std::endl;
				   std::cin >> d_city;
				   switch(d_city)
				   {
					   case 1:
					          sharq::delete_zag();
					   break;
					   case 2:
					          sharq::delete_hah();
					   break;
					   case 3:
					          sharq::delete_sob();
					   break;
					   default:
					   break;
				   }
			default :
			break;
		}
	}
	
	return 0;
}