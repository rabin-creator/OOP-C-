// name space 
// std namespace contain objects, member function for e.g Cin Cout etc.. which are used in program for input and output
#include<iostream>
// for defining that we are using the member of std they are cin or cout
using namespace std;
int main()
{
    
    cout<<"hello world this is my first cpp prgm"<<endl;
    int i,y;
    char d;
    cin>>i>>y>>d;
    cout<<endl<<"entered value is "<<i;
    cout<< endl << "second value is "<<y;
    cout<< endl << " the entered character is "<<d;
    return 0;
}