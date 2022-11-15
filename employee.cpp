#include<iostream>
using namespace std;
class employee {
public:
string name;
int yoj;
string address;

};
int main()
{
employee e1,e2,e3;
cout<<"Name\tYearofJoining\tAddress\n";
e1.name="Robert";
cout<<e1.name<<"\t";
e1.yoj=1994;
cout<<e1.yoj<<"\t";
e1.address="\tAluva\n";
cout<<e1.address;
e2.name="Sam";
cout<<e2.name<<"\t";
e2.yoj=2000;
cout<<e2.yoj<<"\t";
e2.address="\tTrissur\n";
cout<<e2.address;
e3.name="John";
cout<<e3.name<<"\t";
e3.yoj=1999;
cout<<e3.yoj<<"\t";
e3.address="\tShornnur\n";
cout<<e3.address<<"\t";
}
