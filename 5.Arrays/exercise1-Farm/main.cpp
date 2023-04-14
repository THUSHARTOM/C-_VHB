#include<iostream>

using namespace std;

int main()
{
    int a[50];
    for(int i=0;i<=50;i++)
    {
        a[i] = i+1;
        
    }

    for(int i =0; i<50; i++)
    {
        cout<<"AnimalNumber["<<a[i]<<"]"<<endl;
    }
}