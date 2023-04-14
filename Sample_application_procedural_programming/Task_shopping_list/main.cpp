#include<iostream>

using namespace std;

float price[10];
int item_no=0;
string items[10]={}, sorted_items[10]={}; 

void new_item()
{
    if(item_no<=10)
    {
    cout<<"\n Enter the item \n";
    cin>>items[item_no];
    cout<<"\n Enter the price \n";
    cin>>price[item_no];
    item_no++;
    cout<<"Thank you! \n";
    }
    else
    {
        cout<<"\n The cart is full \n";
    }
}

void show_items()
{
    for(int i =0; i<item_no; i++)
    {
        cout<<items[i]<<"\t\t\t\t"<<price[i]<<endl;
    }
    cout<<endl;
}

void ascending()
{
    int temp_price;
    string item_name;
    for(int i=0; i<item_no; i++)
    {
        sorted_items[i] = items[i];
    }
    
    for(int i=0; i<item_no-1; i++)
    {
        for(int j = i+1; j<item_no; j++)
        {
            if (price[i]> price[j])
            {
                item_name = sorted_items[i];
                temp_price = price[i];
                sorted_items[i] = sorted_items[j];
                price[i] = price[j];
                sorted_items[j] = item_name;
                price[j] = temp_price;
            }
        }
    }
    
    
}

int main()
{   
    int i = 100;
    
    bool flag = true;

    

    while(flag)
    {   
        cout<<"\n Please select from the menu below \n"<<endl;
        if(item_no==0)
        {
            cout<<"[1]. Add new item"<<endl;
        }
        else
        {
            cout<<"[1]. Add new item \t\t\t\t No: of items - "<<item_no<<endl;
        }
        cout<<"[2]. Show items"<<endl;
        cout<<"[3]. Sort items"<<endl;
        cout<<"[0]. Exit \n"<<endl;

        cin>>i;
        cout<<endl;

        switch (i)
        {
        case 0:
            cout<<"Thank you for playing \n";
            flag = false;
            break;
        case 1:
        
            new_item();
            break;

        case 2:
            if(item_no==0)
            {
                cout<<"\n Currenlty there are no items in the list \n";
            }
            else
            {
                cout<<"\n Items in the list are - \n";
                show_items();
            }
            break; 

        case 3:
        
            if(item_no==0)
            {
                cout<<"\n Currenlty there are no items in the list \n";
            }
            else
            {   
                ascending();
                cout<< "Here is the ascending order items w.r.t price  \n";

                for(int i = 0; i<item_no; i++)
                {
                    cout<<items[i]<<" - "<<price[i]<<endl;
                }
            }
            break;
                   
        default:
            cout<<"Entered value does not exist in the menu";
            break;
        }
        
    }
}