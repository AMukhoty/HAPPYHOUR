#include <iostream>
#include <string>
using namespace std;

class Novel
{
    public:
    int book_no;
    string barcode;
    float price;
};
class Non_Fiction: public Novel
{
    public:
    string type;
    string author;
    void display()
    {
        cout<<"Book number: "<<book_no<<endl;
        cout<<"Barcode number: "<<barcode<<endl;
        cout<<"Type: "<<type<<endl;
        cout<<"Author: "<<author<<endl;
        cout<<"Price: "<<price<<endl;  
    }
};
class Fiction: public Novel
{
    public:
    string author;
    string type;
    void input()
    {
        cout<<"Enter book number: "<<endl;
        cin>>book_no;
        cout<<"Enter barcode number: "<<endl;
        cin>>barcode;
        cout<<"Enter the price: "<<endl;
        cin>>price;
        cout<<"Enter the type: "<<endl;
        cin>>type;
        cout<<"Enter the author's name: "<<endl;
        cin>>author;
    }
    void display()
    {
        cout<<"Book number: "<<book_no<<endl;
        cout<<"Barcode number: "<<barcode<<endl;
        cout<<"Type: "<<type<<endl;
        cout<<"Author: "<<author<<endl;
        cout<<"Price: "<<price<<endl; 
        cout<<"Thanks for choosing us! Keep shopping with us!"<<endl;
    }
};
int main()
{
    int ch;
    string name;
        cout<<"Welcome to Global Book Store!"<<endl;
        cout<<"Press 1 for Non-fiction and 2 for Fiction: "<<endl;
        cin>>ch;
        cout<<"Enter your name: "<<endl;
        cout<<"Welcome Mr./Mrs."<<name<<endl;
        cin>>name;
        if(ch==1)
        {
            Non_Fiction ob;
            cout<<"Enter book number: ";
            cin>>ob.book_no;
            cout<<"Enter barcode number: ";
            cin>>ob.barcode;
            cout<<"Enter the price: ";
            cin>>ob.price;
            cout<<"Enter the type: ";
            cin>>ob.type;
            cout<<"Enter the author's name: ";
            cin>>ob.author;
            ob.display();
            if(ob.price>300)
            {
                cout<<"You got extra discount worthy 5%!!"<<endl;
                ob.price-=(ob.price*5)/100;
                cout<<"You got to pay: "<<ob.price<<endl;
            }
        }
        else if(ch==2)
        {
            Fiction obj;
            cout<<"Enter book number: ";
            cin>>obj.book_no;
            cout<<"Enter barcode number: ";
            cin>>obj.barcode;
            cout<<"Enter the price: ";
            cin>>obj.price;
            cout<<"Enter the type: ";
            cin>>obj.type;
            cout<<"Enter the author's name: ";
            cin>>obj.author;
            obj.display();
            if(obj.price>300)
            {
                cout<<"You got extra discount worthy 5%!!"<<endl;
                obj.price-=(obj.price*5)/100;
                cout<<"You got to pay: "<<obj.price<<endl;
            }
        }
        else
        {
            cout<<"Wrong choice!";
        }
}