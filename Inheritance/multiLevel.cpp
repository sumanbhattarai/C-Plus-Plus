#include<iostream>
using namespace std ;

class A
{
public:
    A()
    {
        cout<<"Constructor of A . " << endl ;
    }
    ~A()
    {
        cout<<"Destuctor of A . " << endl ;
    }
};

class B : public A
{
public:
    B()
    {
        cout<<"Constructor of B . " << endl ;
    }
    ~B()
    {
        cout<<"Destuctor of B . " << endl ;
    }
};

class C : public B
{
public:
    C()
    {
        cout<<"Constructor of C . " << endl ;
    }
    ~C()
    {
        cout<<"Destuctor of C . " << endl ;
    }
};


int main()
{
    C c ;
    return 0;
}
