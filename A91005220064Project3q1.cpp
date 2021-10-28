#include <iostream>
#include <string>
using namespace std;

class Car
{
    public:
    int model_no;
    string reg_no, color;
};
class Two_wheeler: public Car
{
    public:
    int mileage;
    void display()
    {
        cout<<"Model number: "<<model_no<<endl;
        cout<<"Registration number: "<<reg_no<<endl;
        cout<<"Color: "<<color<<endl;
        cout<<"Mileage: "<<mileage<<endl;
    }
};
class Four_wheeler: public Car
{
    public:
    int mileage;
    string type;
    void display()
    {
        cout<<"Model number: "<<model_no<<endl;
        cout<<"Registration number: "<<reg_no<<endl;
        cout<<"Color: "<<color<<endl;
        cout<<"Mileage: "<<mileage<<endl;
        cout<<"Type: "<<type<<endl;
    }
};
int main()
{
    int ch;
    cout<<"What do you want to buy?(2/4 wheeler):";
    cout<<"Press 1 for 2 wheeler, 2 for 4 wheeler: ";
    cin>>ch;
    if(ch==1)
    {
        Two_wheeler ob;
        cout<<"Enter the model no.: ";
        cin>>ob.model_no;
        cout<<"Enter the registration number: ";
        cin>>ob.reg_no;
        cout<<"Pick your color: ";
        cin>>ob.color;
        cout<<"Enter the mileage: ";
        cin>>ob.mileage;
        if(ob.mileage>=60 && ob.mileage<=110)
        {
            if(ob.model_no>=1500 && ob.model_no<=2000)
            {
                cout<<"The car is available!"<<endl;
                ob.display();
            }
        }
    }
    else if(ch==2)
    {
        Four_wheeler obj;
        cout<<"Enter the model no.: ";
        cin>>obj.model_no;
        cout<<"Enter the registration number: ";
        cin>>obj.reg_no;
        cout<<"Pick your color: ";
        cin>>obj.color;
        cout<<"Enter the mileage: ";
        cin>>obj.mileage;
        cout<<"Enter the type(petrol/diesel): ";
        cin>>obj.type;
        if(obj.mileage>=90 && obj.mileage<=300)
        {
            if(obj.model_no>=2500 && obj.model_no<=3000)
            {
                if(obj.type.compare("Petrol") || obj.type.compare("petrol")|| obj.type.compare("Diesel") || obj.type.compare("diesel"))
                {
                    cout<<"The car is available!"<<endl;
                    obj.display();
                }
                
            }
        }
    }
}