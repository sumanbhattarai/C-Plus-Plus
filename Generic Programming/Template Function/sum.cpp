#include<iostream>
using namespace std ;

template <class T>
T sum(T & x , T &y)
{
    T sum ;
    sum = x + y ;
    return sum ;
}
int main()
{
    int a = 2 , b = 5 ;
    float c = 1.5 , d = 2.1 ;
    cout<<"Sum is : " << sum(a,b) << endl ;
    cout<<"Sum is : " << sum(c,d) << endl ;
    return 0 ;
}
