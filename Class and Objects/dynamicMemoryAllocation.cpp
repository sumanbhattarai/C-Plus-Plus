#include<iostream>
using namespace std ;

class A
{
public:
    A()
    {
        cout<<"Constructor called."<< endl ;
    }
    ~A()
    {
        cout<<"Destructor called. " << endl ;
    }
};

int main()
{
    A *obj = new A[3] ;
    delete []obj ;
    return 0 ;
}
