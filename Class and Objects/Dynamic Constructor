#include<iostream>
using namespace std ;

class A
{
private:
    int *ptr ;
public:
    A()
    {
        ptr = new int ;
        *ptr = 10 ;

    }
    A(int x)
    {
        ptr = new int ;
        *ptr = x ;
    }
    int display()
    {
        return (*ptr) ;


    }
};
int main()
{
    A a1 , a2(2) ;
    cout<<"Value of a1 ptr is : " << a1.display() << endl ;
    cout<<"Value of a2 ptr is : " << a2.display() << endl ;
    return 0 ;
}
