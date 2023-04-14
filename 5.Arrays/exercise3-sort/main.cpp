#include <iostream>
#include <cstdlib>

using namespace std;


int sort(string names[],int number)
{
	string temp = "";
	for(int i=0; i<number-1; i++)
	{
		for(int j=i+1; j<number ; j++)
		{
			if (names[i]>names[j])
			{
			temp = names[i];
			names[i] = names[j];
			names[j] = temp;
			}
		}
	}
	return 0;
}

int main(int argc, char *argv[])
{
	int number = 5;
	string names[5];
	cout << "Please enter 5 names:" << endl;
	for (int i = 0; i < 5; i++) 
	{
		cout << "Name " << i+1 << ": ";
		cin >> names[i];
	}
	sort(names, number);

	for(int i =0; i<number ; i++)
	{
		cout<<endl<<names[i]<<endl;
	}

system("PAUSE");
return 0;
}