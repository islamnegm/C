#include <iostream>
#include <string>

using namespace std;
/*class*/
class Student
{
    public:
    int age ;
    int anything ;
    Student(int a,int b):age(a),anything(b)
    {

    } 
/* -- operator*/
    Student operator --(int)
    {
        int temp1 = age - 1;
        int temp2 = anything -1;
        return Student(temp1,temp2);
    }
/* -- operator*/
    Student operator --()
    {
        int temp1 = age -1;
        int temp2 = anything -1;
        return Student(temp1,temp2);
    }
/* ++ operator*/
    Student operator ++(int)
    {
        int temp1 = age +1;
        int temp2 = anything +1;
        return Student(temp1,temp2);
    }
/* ++ operator*/
    Student operator ++()
    {
        int temp1 = age +1;
        int temp2 = anything +1;
        return Student(temp1,temp2);
    }
/* + operator*/
    Student operator +(Student input)
    {
        int temp1_age = age;
        int temp1_anything = anything;

        int temp2_age = input.age;
        int temp2_anything = input.anything;

        int temp1 = temp1_age + temp2_age;
        int temp2 = temp1_anything + temp2_anything;
        return Student(temp1,temp2);
    }
/* + operator*/
    Student operator -(Student input)
    {
        int temp1_age = age;
        int temp1_anything = anything;

        int temp2_age = input.age;
        int temp2_anything = input.anything;

        int temp1 = temp1_age - temp2_age;
        int temp2 = temp1_anything - temp2_anything;
        return Student(temp1,temp2);
    }

    Student operator *(Student input)
    {
        int temp1_age = age;
        int temp1_anything = anything;

        int temp2_age = input.age;
        int temp2_anything = input.anything;

        int temp1 = temp1_age * temp2_age;
        int temp2 = temp1_anything * temp2_anything;
        return Student(temp1,temp2);
    }

    Student operator /(Student input)
    {
        int temp1_age = age;
        int temp1_anything = anything;

        int temp2_age = input.age;
        int temp2_anything = input.anything;

        int temp1 = temp1_age / temp2_age;
        int temp2 = temp1_anything / temp2_anything;
        return Student(temp1,temp2);
    }

    ~Student()
    {
    }
};

int main()
{
    Student S1(5,3);
    Student S2 = S1++;

    Student S3 = S1--;
              
    Student S4 = (S1 * S2) + S3 / S1 + S2;

    cout << "Age      : " << S4.age      << endl;
    cout << "Anything : " << S4.anything << endl;
    return 0;
}