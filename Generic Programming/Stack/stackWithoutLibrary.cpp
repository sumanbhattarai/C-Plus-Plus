#include<iostream>
using namespace std ;

template<class T>
class Mystack
{
private:
    T data[100] ;
    int top ;
public:
    Mystack()
    {
        top = 0 ;
    }
    void push (T a)
    {
        if(top==100)
        {
            cout<<"Stack is full " << endl ;
        }
        data[top++] =a ;
    }
    T pop()
    {
        if(top==0)
        {
            cout<<"Stack is empty" << endl;
            return -1 ;
        }
        return data[--top] ;
    }
};

int main()
{
    Mystack <int>stack ;
    stack.push(100) ;
    stack.push(50);
    int a = stack.pop();
    cout<<a<<endl ;
    a = stack.pop() ;

    cout<<a << endl ;
    cout<<stack.pop();
    return 0 ;
}
