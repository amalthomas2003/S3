#include<iostream>
using namespace std;
class area
{
    public :
    int breadth,length,area;
    void setDim(int l,int b)
    {
        length=l;
        breadth=b;
     }
     
     void getArea()
     {
        area=length*breadth;
        cout<<"The area is :"<<area<<endl;
     }
     
 };
 
int main()
{
    area rect1;
    rect1.setDim(3,4);
    rect1.getArea();
 }
