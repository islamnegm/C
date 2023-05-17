#include<iostream>
#include<string>
using namespace std ; 
/*base class*/
class Person {
	/*private variables*/
    private : 
    string person_name ;
    int person_ID ;
    string Person_Address; 
    string Person_Gender ;
    /*public methods*/
    public :
    void set_Person_DATA(string Name,string ADDRESS, string Gender,int ID)
    {
        person_name = Name ;
        Person_Address = ADDRESS ;
        Person_Gender = Gender ;
        person_ID = ID ;
    }
	/*constructor*/
    Person(string name ,string ADDRESS ,string Gender ,int id  ):person_name(name ),person_ID(id),Person_Address(ADDRESS),Person_Gender(Gender)
    {
        
    }
	/*default constructor*/
    Person ()
    {
        cout << "No Data Avaliable "<<endl;
    }
    /*print data*/
    void Show_Person_Data()
    {
        cout<<"Name : "<<person_name<<endl;
        cout<<"Address : "<<Person_Address<<endl;
        cout<<"Gender : "<<Person_Gender<<endl;
        cout<<"ID : "<<person_ID<<endl;
    }

};
/*deliverd class*/
class Student: public Person 
{  
    /*private variables*/
    private : 
    float Gpa ; 
    string class_name;
    public :
	/*construct*/
    Student (string name ,string ADDRESS ,string Gender ,int id ,float gpa , string name_class ) 
    :Person (name , ADDRESS,Gender , id )
    {
        Gpa = gpa ;
        class_name = name_class;
    }
	/*default construct*/
    Student()
    {

    }
	/*print data*/
   void Show_Person_Data()
    {
        Person::Show_Person_Data();
        cout<<"GPa : "<<Gpa <<endl;
        cout<<"Classname :"<<class_name<<endl;
    }
	/*print data*/
    void set_Person_DATA(string Name,string ADDRESS, string Gender,int ID,float gpa,string copy_classname)
    {
		/*over write function*/
        Person::set_Person_DATA(Name,ADDRESS,Gender,ID);
        Gpa = gpa;
        class_name = copy_classname ;
    }
};

int main ()
{
    Person s2 ;
    s2.set_Person_DATA("islam","negm","Male",2970);
    Student s1 ;
    s1.set_Person_DATA("islam","negm","Male",2970,2.61,"oooooooo");
    s2.Show_Person_Data();
    s1.Show_Person_Data();
    Student s3("islam","zag","male",233432,2.7,"oooooooo");
    s3.Show_Person_Data();


}