#include<iostream>
#include<cstdlib>
#include<ctime>

// ;

using namespace std;

int main()
{
    int x, guess;
    srand(time(NULL));
    x = (rand()%100)+1;
    cout<<x<<endl;

    for(int i=0; i<6; i++)
    {
        cout<<"Guess your num - ";
        cin>>guess;
        if (guess<x)
        {
            cout<<"Guess above"<<endl;
        }
        else if(guess>x)
        {
            cout<<"Guess below"<<endl;
        } 
        else
        {
            cout<<"Correct guess!"<<endl;
            return 0;
        }
    }

    cout<<"You Failed. Try again";
    
    return 0;
} // namespace std;


