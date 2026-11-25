#include<iostream.h>
#include<conio.h>
class sum
{
public:
int n1,n2,r;
void input()
{
cout<<"Enter Value for n1 & n2 ";
cin>>n1>>n2;
}
void operation()
{
r = n1 + n2;
}
void display()
{
cout<<"The Result :"<< r;
}
};
void main()
{
sum s;
s.input();
s.operation();
s.display();
getch();
}


