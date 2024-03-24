#include<iostream>
using namespace std;

int main(void)
{
	int PIN[10] = { 0,1,2,3,4,5,6,7,8,9 },
		NUM[10],
		actual[6] = { 2,0,0,2,1,2 },
		i,
		response[6];
		
	for (i = 0; i < 10; ++i)
	{
		NUM[i] = rand() % 10;
	}

	cout << "PIN : ";
	for (i = 0; i < 10; ++i)
	{
		cout << PIN[i] << " ";
	}
	cout << endl;

	cout << "NUM : ";
	for (i = 0; i < 10; ++i)
	{
		cout << NUM[i] << " ";
	}
	cout << endl;

	cout << "Enter the password >> ";
	for (i = 0; i < 6; ++i)
	{
		cin >> response[i];
	}
	
	for (i = 0; i < 6; i++)
	{
		if (NUM[actual[i]] != response[i])
		{
			break;
		}
	}

	if (i == 6)
	{
		cout << "Success" << endl;
	}
	else
	{
		cout << "Error" << endl;
	}

	system("pause");
	return(0);
}