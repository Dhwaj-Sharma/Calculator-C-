#include<iostream>
using namespace std;
class arithmatic
{
    public:
    void add()
    {
        double a,b,c;
        cout<<"ADDITION OF TWO NUMBERS";
        cout<<"\n\n\nEnter the number 1: ";
        cin>>a;
        cout<<"\nEnter the number 2: ";
        cin>>b;
        c=a+b;
        cout<<"\n\nSUM= "<<c;
    }
    void sub()
    {
        double a,b,c;
        cout<<"SUBSTRACTION OF TWO NUMBERS";
        cout<<"\n\n\nEnter the number 1: ";
        cin>>a;
        cout<<"\nEnter the number 2: ";
        cin>>b;
        c=a-b;
        cout<<"\n\nSUB= "<<c;
    }
    void mul()
    {
        double a,b,c;
        cout<<"MULTIPLICATION OF TWO NUMBERS";
        cout<<"\n\n\nEnter the number 1: ";
        cin>>a;
        cout<<"\nEnter the number 2: ";
        cin>>b;
        c=a*b;
        cout<<"\n\nMUL= "<<c;
    }
    void div()
    {
         double a,b,c;
        cout<<"DIVISION OF TWO NUMBERS";
        cout<<"\n\n\nEnter the number 1: ";
        cin>>a;
        cout<<"\nEnter the number 2: ";
        cin>>b;
        c=a/b;
        cout<<"\n\nQNT= "<<c;       
    }
};
int main()
{
    a:
        int i;
        cout<<"\n*************";
        cout<<"\n****ENTER THE VALUE****";
        cout<<"\n*************";
        cout<<"\n\n\t1-->ADDITION";
        cout<<"\n\t2-->SUBSTRACTION";
        cout<<"\n\t3-->MULTIPLICATION";
        cout<<"\n\t4-->DIVISION";
        cout<<"\n\t0-->EXIT";
        cout<<"\n\n\tVALUE= ";
        cin>>i;
        arithmatic obj;
        switch(i)
        {
            case 0:
                exit(0);
            case 1:
                obj.add();
                break;
            case 2:
                obj.sub();
                break;
            case 3:
                obj.mul();
                break;
            case 4:
                obj.div();
                break;
            default:
                break;
        }
    goto a;    
}
