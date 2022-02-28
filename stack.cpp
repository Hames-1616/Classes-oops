#include<iostream>
using namespace std;

class stack
{
    private :
    int s[5];
    int top;

    public:
    stack():top(-1)
    {

    }


    void push(int var)
    {
        if(top>4)
        {
            cout<<"Overflow condition"<<endl;
        }
        else
        {
            s[++top]=var;
        }
    }



    int pop()
    {
        if(top<0)
        {
            cout<<"Underflow Condition"<<endl;
        }
        else
        {
            return s[top--];
        }
    }
};
int main()
{
    stack s1;
    s1.push(10);
    s1.push(15);
    s1.push(25);
 
    cout<<s1.pop()<<endl;
    cout<<s1.pop()<<endl;
    cout<<s1.pop()<<endl;
    
  

}