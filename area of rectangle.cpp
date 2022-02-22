#include<iostream>
using namespace std;

class rectangle
{
    private : 
    int length,breadth;

    public:
    void getrect()
    {
        cout<<"enter the Length"<<endl;
        cin>>length;
        cout<<"Enter the breadth"<<endl;
        cin>>breadth;
    }

    void calarea()
    {
        cout<<"Area of rectangle = "<<length*breadth;
    }

};

int main()
{
    rectangle r1;
    r1.getrect();
    r1.calarea();
}