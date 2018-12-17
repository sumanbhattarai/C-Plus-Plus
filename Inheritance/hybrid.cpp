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

class C : public A
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

class D : public B , public C
{
    public:
    D()
    {
        cout<<"Constructor of D . " << endl ;
    }
    ~D()
    {
        cout<<"Destuctor of D . " << endl ;
    }

};


int main()
{
    D d ;
    return 0;
}
