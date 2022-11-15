#include<iostream>
using namespace std;
class complex{
public:
	int real;
	int imaginary;
	void getdata()
	{
		cin>>real;
		cin>>imaginary;
	}
	void putdata()
	{
		cout<<real<<"+";
		cout<<imaginary<<"i";
	}
	complex add(complex x,complex y,complex w)
	{
		complex z;
		z.real=x.real+y.real+w.real;
		z.imaginary=x.imaginary+y.imaginary+w.imaginary;
		return z;
	}
	complex sub(complex x,complex y)
	{
		complex z;
		z.real=x.real-y.real;
		z.imaginary=x.imaginary-y.imaginary;
		return z;
	}
};
int main()
{
	complex c1,c2,c3,c4,c5;
	c1.getdata();
	c2.getdata();
	c4.getdata();
	c3=c3.add(c1,c2,c4);
	c5=c5.sub(c1,c2);
	c3.putdata();
	cout<<"\n";
	c5.putdata();
}
