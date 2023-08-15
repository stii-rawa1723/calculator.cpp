#include <iostream>
using namespace std;
int main()
{
    int n1,n2;
    float n;
    cout<<"enter the numbers over operation want:";
    cin>>n1>>n2;
    char o;
    cout<<"enter the operation you want:";
    cin>>o;
    
    switch(o){
    case '+':
    n=n1+n2;
    cout<<n;
    break;
    
    case '-':
    n=n1-n2;
    cout<<n;
    break;
    
    case '/':
    n=n1/n2;
    cout<<n;
    break;
    
    case '*':
    n=n1*n2;
    cout<<n;
    break;
    
    case '%':
    n=n1%n2;
    cout<<n;
    break;
    
    default:
    cout<<"wrong operator";
    
    }
}