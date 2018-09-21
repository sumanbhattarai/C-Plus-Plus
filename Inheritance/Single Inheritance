#include<iostream>
using namespace std ;

class A
{
    private:
    int x ;
protected:
    int y ;
public:
    int z ;
public:
    A()
    {
        cout<<"Costructor of base class " << endl ;
    }
    void setter(int m , int n , int p) ;
    int getx()
    {
        return x ;
    }

    ~A()
    {
        cout<<"Destructor of derived class " << endl ;
    }

};

void A :: setter(int m , int n , int p)
{
    x = m ;
    y = n ;
    z= p ;
}

class B : public A
{
public:

    B()
    {
        cout<<"constructor of derived class  " << endl ;
    }

    void display()
    {
        int sum = z + y + getx() ;
        cout<<"Sum is : " << sum << endl ;
    }
    ~B()
    {
        cout<<"Destructor of derived class " << endl ;
    }
};

int main()
{
    B b ;
    b.setter(10 , 20 , 30);
    b.display();
    return 0 ;

}
