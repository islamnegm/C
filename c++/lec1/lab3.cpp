#include<iostream>
#include<string>

using namespace std ;
template<typename X1 ,typename X2 ,typename X3>
X3 sum (X1 num1, X2 num2 )
{
    return num1+num2;
}

int main ()
{
    
    cout<<"the sum of floating is  : "<<sum<int , int  , int >(3,5)<<endl;
    cout<<"the sum of integer is  : "<<sum<char , int , int>('a',2)<<endl;
    cout<<"the sum of integer is  : "<<sum<string , string , string>("hey","there")<<endl;
    cout<<"the sum of integer is  : "<<sum<double , int , double>(3.3,2)<<endl;

}