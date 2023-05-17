#include <iostream>
#include <string>
using namespace std;

class Hospital 
{
    private:
	
	/*patient number*/
    int Patient_no;
    int M;
	/*doctor number*/
    int Doctors_no;
	/*nurses number*/
    int Nurses_no;
	/*rooms number */
    int Available_Rooms;
    public:
	/* construct */
	Hospital()
	{
		cout << "hello" << endl;
		Patient_no = 0;
		Available_Rooms = 50;
	}
    string name;
	/*data of patient*/
     typedef struct patient
    {   
        string Patient_Name;
        int Patient_ID;
        string status;
        string gender;
    }Patient;
	
	/*number of struct of patients*/
    Patient Patients[50];
	
	/*set data of a new patient*/
    void AddPatient(string Patient_Name,int Patient_ID,string status,string gender)
    {
        Patients[Patient_ID-1].Patient_ID= Patient_ID;
        Patients[Patient_ID-1].Patient_Name= Patient_Name;
        Patients[Patient_ID-1].status= status;
        Patients[Patient_ID-1].gender= gender;
        Patient_no++;
        Available_Rooms--;
    }
	
	/* print data of patient*/
    void ViewPatient(int ID)
    {   
        int temp = -1;
        for(int i=0;i<50;i++)
        {
            if(Patients[i].Patient_ID==ID)
            {
                temp = i;
                break;
            }
        }
        if(temp!=-1)
        {
            cout<< "Patient ID is :"<<Patients[temp].Patient_ID<<endl;
            cout<< Patients[temp].gender<<endl;
            cout<< Patients[temp].Patient_Name<<endl;
            cout<< Patients[temp].status<<endl;

        }
        else
        {
            cout<<"ID doesn't exists!!"<<endl;
        }

    }
    /* set number of doctors*/
    void Set_Doctor_no(int Doctor)
    {
        if (Doctor<10)
        {
            Doctors_no = Doctor;
        }
    }
	
	/*set nurses number */
    void Set_Nurse_no(int Nurse)
    {
        if (Nurse<10)
        {
            Nurses_no = Nurse;
        }
    }
   
   /* print data of the hospital*/
    void display_data(void)
    {   
       cout<< "Total number of patients is: "<<Patient_no<<endl;
       cout<< "Total number of doctors is:  "<<Doctors_no<<endl;
       cout<< "Total number of nurses is:   "<<Nurses_no<<endl;
       cout<< "Available Rooms number is:   "<<Available_Rooms<<endl;
    }
};
int main()
{    
    /*create object */
    Hospital hospital1;
    hospital1.name="Negm Hosptial";
    hospital1.Set_Doctor_no(5);
    hospital1.Set_Nurse_no(9);
    string Patient_Name;
    int Patient_ID;
    string status;
    string gender;
    int flag=0,choice1;
    while (1)
    {   
        system("color b");
        cout<<"1)Add new Patient" <<endl;
        cout<<"2)View Patient Data" <<endl;
        cout<<"3)View Hospital Data" <<endl;
        cout<<"4)Exit" <<endl;
        cout<<"Choice :";
        cin >> choice1;
        switch (choice1)
        {
        case 1: cout<<"Enter Patients Name: ";
                cin >> Patient_Name;
                cout<< "Enter Patients ID: ";
                cin >> Patient_ID;
                cout<< "Enter Patients Status: ";
                cin >> status;
                cout<< "Enter Patients Gender: ";
                cin >> gender;
                cout<< "Data added successfully "<<endl;
                system("cls");
                hospital1.AddPatient(Patient_Name,Patient_ID,status,gender);
            break;
        case 2: cout<<"Enter Patients ID: " <<endl;
                cin >> Patient_ID;
                hospital1.ViewPatient(Patient_ID);
        break;
        case 3: hospital1.display_data();
        break;
        case 4: flag=1;
        break;
        default: 
            break;
        }
        if(flag==1)
        {
            break;
        }
    }
    return 0;
}
