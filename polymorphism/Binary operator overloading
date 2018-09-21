#include<iostream>
using namespace std ;

class A
{
private:
    int x  ;
public:
    A()
    {
        x = 0 ;
    }
    A (int m)
    {
        x = m ;
    }
    void disp()
    {
        cout<< " Value of x is : " << x << endl ;
    }
    A operator + (A w)
    {
        A temp ;
        temp.x = x + w.x ;
        return temp ;
    }
};

int main()
{
    A a(10) , b(20) , c;
    c = a + b;

    c.disp();
    return 0 ;


}
