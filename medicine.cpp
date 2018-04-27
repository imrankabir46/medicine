#include<iostream>
using namespace std;

class Patient
{
private:
    string name;
    int age;
    string address;

public:
    void getData()
    {
        cout<<"Enter Patient's Name"<<endl;
        cin>>name;
        cout<<"Enter Patient's Age"<<endl;
        cin>>age;
        cout<<"Enter Patient's Address"<<endl;
        cin>>address;
    }
    void showData()
    {
        cout<<"\nPatient's Name : "<<name;
        cout<<"\nPatient's Age : "<<age;
        cout<<"\nPatient's Address : "<<address;
    }
};
