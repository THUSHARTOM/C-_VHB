#include<iostream>

using namespace std;

int main()
{
    float a,b;

    char C;
    cout<<"Enter two numbers with operator in between"<<endl;
    cin>>a>>C>>b;
    // cout<<"Enter second number"<<endl;
    // cin>>b;
    
    // cout<<"Enter the operation to be executed"<<endl;
    // cin>>C;
    cout<<endl<<endl;
    switch (C)
    {
    case '*':
        cout<<"a*b = "<<a*b<<endl;
        break;
    case '+':
        cout<<"a+b = "<<a+b<<endl;
        break;
    case '-':
        cout<<"a-b = "<<a-b<<endl;
        break;
    case  '/':
        if (b==0)
        {
            cout<<"Sorry, Division by zero is not possible"<<endl;
        }
        else
        {
        cout<<"a/b = "<<a/b<<endl;
        }
        break;
    
    
    default:
        cout<<"IDK the operator"<<endl;
    }
    system("pause");
    return 0;

}