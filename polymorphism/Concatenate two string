#include<iostream>
#include<string.h>
using namespace std ;


class Add
{
private:
    char s[50];
public:
    void setter()
    {
        cout<<"Enter a word : " <<  endl ;
        cin >> s ;
    }
    Add operator + (Add obj)
    {
        Add temp ;
        strcpy(temp.s , s) ;
        strcat(temp.s , obj.s) ;
        return temp ;
    }
    void disp()
    {
        cout<< "String is : " << s << endl;
    }
};


int main()
{
    Add a , b , c ;
    a.setter();
    b.setter();
    c = a + b ;
    c.disp();
    return 0 ;
}
