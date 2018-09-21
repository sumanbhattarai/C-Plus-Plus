#include<iostream>
using namespace std ;

class A
{
private:
    int x  ;
public:
    A (int m)
    {
        x = m ;
    }
    void disp()
    {
        cout<< " Value of x is : " << x << endl ;
    }
    void operator ++ ()
    {
        x = 2*x ;
    }
};

int main()
{
    A a(10) ;
    ++a ;
    a.disp();
    return 0 ;


}
