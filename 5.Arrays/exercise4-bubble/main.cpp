#include<iostream>

using namespace std;

int main()
{
    int unsorted[10] , sorted[2], temp;

    // initialise 10 integers
    // print them out
    cout<<"Enter 10 digits to be sorted"<<endl;
    for(int i =0; i<10; i++)
    {
        cin>>unsorted[i];
    }

    for(int i=0; i<10-1; i++)
    {
        for(int j = i+1; j<10; j++)
        {
            if(unsorted[i]>unsorted[j])
            {
                temp = unsorted[i];
                unsorted[i] = unsorted[j];
                unsorted[j] = temp;
            }
        }
    }
    cout<<endl;
    for(int i =0; i<10; i++)
    {
        cout<<unsorted[i]<<",";
    }
}