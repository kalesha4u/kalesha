#include<iostream>
int  disp(int ,int);
int disp(int a,int b)
{
    int c;
    c=a+b;
    return c;
}
int main()
{
    int d;
    d=disp(110,220);
    std::cout<<d<<std::endl;
}