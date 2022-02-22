#include<iostream>
using namespace std;
class point
{
    private :
    float x_cord,y_cord;

    public :
    void getpoint()
    {
        cout<<"Enter the x-Coordinates"<<endl;
        cin>>x_cord;
        cout<<"ENter the y-Coordiantes"<<endl;
        cin>>y_cord;
    }
    void displaypoint()
    {
        cout<<"Coordinates of point = ("<<x_cord<<","<<y_cord<<")";
    }

};

int main()
{
    point p1;
    p1.getpoint();
    p1.displaypoint();
}