#include<iostream>
#include<cstring>

using namespace std;
class Game
{
    public:
    int i;
    void f1()
    {
        cout<<"enter no of teams participating in the tournament:"<<endl;
        cin>>i;

    }
};
class GroupStage:public Game
{
    public:
    int x;
    void f2()
    {   
        x=i/2;
        cout<<"no of teams in the Group Stages are:"<<x<<endl;

    }
};
class Qualifiers:public GroupStage
{
    public:
    int temp;
    void f3()
    {   temp=x/2;
        cout<<"No of teams in the Qualifiers  are:"<<temp<<endl;
        
    }
};
class SemiFinals:public Qualifiers
{
    public:
    int k;
    void f4()
    {   
        k=temp/2;
        cout<<"No of teams in the Semi Finals  are: "<<k<<endl;
        
    }
};
class Finals:public SemiFinals
{
    public:
    int q;
    string x,p;
    void f5()
    {   
        q=k/2;
        cout<<"enter the name of the fianlists"<<endl;
        cin>>x;
        cin>>p;
        
    }
};
class Winners:public Finals
{
    public:
    string w;
    void f6()
    {   
        cout<<"The"<<q<<"Finalists are:"<<x<<"\t"<<"and"<<"\t"<<p<<endl;
        cout<<"Enter the name of the winner"<<endl;
        cin>>w;
    }
};
int main()
{   
    Winners  w;
    w.f1();
    w.f2();
    w.f3();
    w.f4();
    w.f5();
    w.f6();
    
    return 0;
}



