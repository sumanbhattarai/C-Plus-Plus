#include<iostream>
using namespace std ;

class A
{
private:
    int x ;
public:
    void setter(int a)
    {
        x= a ;
    }
    int getter()
    {
        return x ;
    }
};

class B
{
public:
    A obj ;
    void display()
    {
    obj.setter(10) ;
    cout<<"Value of x is : " << obj.getter() << endl ;
    }

};

int  main()
{
    B obj2 ;
    obj2.display();
    return 0 ;
}
