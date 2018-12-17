#include<iostream>
using namespace std ;


int main()
{
    int n ;
    cout<<"Enter number of terms : " << endl ;
    cin >> n ;
    cout<<" Fibonacci terms upto " << n << " terms are : " << endl ;

int a = 0 , b = 1 , i ;
for(i = 1 ; i <= n ; i++)
{
    cout<< b << endl ;
    int next = a + b ;
    a = b ;
    b = next ;
}
return 0 ;
}
