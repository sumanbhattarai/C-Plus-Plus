#include<iostream>
using namespace std ;

class B ;
class A
{
private:
    int x ;
public:
    void setter()
    {
        cout<<"Enter value of x : " << endl ;
        cin >> x ;

    }
    friend int maxx(A,B);

};

class B
{
private:
    int y ;
public:
    void setter()
    {
        cout<<"Enter value of y: " << endl ;
        cin >> y;

    }
    friend int maxx(A,B);

};

int maxx(A obj1 , B obj2)
{
    int  new1 = obj1.x ;
    int new2 = obj2.y ;
    if(new1>new2)
    {
        return new1 ;
    }
    else
    {
        return new2 ;
    }

}


int main()
{
    A a ;
    B b ;
    a.setter();
    b.setter();
    cout<<"Max number is : "<< maxx( a, b);
    return 0 ;
}


