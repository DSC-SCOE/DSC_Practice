#include<iostream>
using namespace std;
void area()
{
    int length; int breadth; int area;
    cout<<"Enter length and breath ";
    cin>>length; cin>>breadth;
    area=length*breadth;
    cout<<"\nArea of rectangle = "<<area<<" ";
}
void circle()
{
int radius;
double result;
cout<<"Enter radius ";
cin>>radius;
result=3.14*radius*radius;
cout<<"Area =  "<<result<<" ";
}
int main()
{
int choice;
while(1)
{
cout<<"\n1.Area of rectange\n";
cout<<"2.Area of circle\n";
cout<<"3.Exit\n";
cout<<"Enter choice";
cin>>choice;
switch(choice)
{
case 1:area();
break;
case 2:circle();
break;
case 3:exit(1);
default:cout<<"wrong input\n";
  }
 }
return 0;
}
