#include<iostream>
using namespace std ;

class A
{
private:
    int real , imag ;
public:
    A()
    {
        real = 0 ;
        imag = 0 ;
    }
    A(int x , int y )
    {
        real = x ;
        imag = y ;
    }

    A operator + ( A obj)
    {
        A temp ;
        temp. real = real + obj.real ;
        temp.imag = imag + obj.imag ;
        return temp ;
    }
    void disp()
    {
        cout<< real << "+i" << imag << endl ;
    }
};

int main()
{
    A a(10 , 20) , b(30 , 40) ,c ;
    c = a + b;
    c.disp();
    return 0 ;
}
