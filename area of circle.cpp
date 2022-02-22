#include<iostream>
using namespace std;
class circle
{
    private :
    int radius;

    public:

    void getinput()
    {
        cout<<"Enter the radius of the circle"<<endl;
        cin>>radius;
    }

    void printarea()
    {
        cout<<"Area of circle = "<<3.14*radius*radius;
    }
};

int main()
{
    circle c1;
    c1.getinput();
    c1.printarea();
}