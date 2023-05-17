#include <iostream>
#include <string>
using namespace std ;
class school
{
	private :
	int max_num_stu;
	int num_stu;
	int num_teach;
	
	public :
	string name;
	void set_max_num(int m_students)
	{
		max_num_stu = m_students;
	}
	
	void set_name(string nnn)
	{
		name = nnn;
	}
	
	void set_num_stu(int n_students)
	{
		num_stu = n_students;
	}
	
	void set_num_tea(int n_teach)
	{
		num_teach = n_teach;
	}
	
	void add_student(void)
	{
		num_stu = num_stu + 1;
	}
	
	void add_teacher(void)
	{
		num_teach = num_teach + 1;
	}
	int get_num_stu(void)
	{
		return num_stu;
	}
	
	int get_m_number(void)
	{
		return max_num_stu;
	}
	
	void print_data(void)
	{
		std::cout << "number of students = " << num_stu << std::endl;
		std::cout << "number of teachers = " << num_teach << std::endl;
		std::cout << "number of max_num_stu = " << max_num_stu << std::endl;
		std::cout << "school name " << name << std::endl;
	}
	
};

int main()
{
	school c1;
	school c2;
	c1.set_num_tea(0);
	c1.set_max_num(200);
	c1.set_name("negm");
	c1.add_teacher();
	c1.add_teacher();
	c1.add_teacher();
	c1.add_teacher();
	c1.add_teacher();
	c1.add_teacher();
	c1.add_teacher();
	c1.add_teacher();
	c1.add_teacher();
	c1.add_teacher();
	c1.add_teacher();
	c1.add_teacher();
	
	
	c1.set_num_stu(100);
	
	c1.print_data();
	
	return 0;
}