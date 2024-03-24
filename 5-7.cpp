#include<iostream>
using namespace std;

int main(void)
{
	int grade=-1,
		i,
		record[6] = { 0,0,0,0,0,0 };

	while (grade != 8)
	{
		cout << "Input your grade,if you want to end please enter 8>>>";
		cin >> grade;

		if (grade == 0)
		{
			++record[0];
		}
		else if (grade == 1)
		{
			++record[1];
		}
		else if (grade == 2)
		{
			++record[2];
		}
		else if (grade == 3)
		{
			++record[3];
		}
		else if (grade == 4)
		{
			++record[4];
		}
		else if (grade == 5)
		{
			++record[5];
		}
		else 
		{
			break;
		}
	}

	cout << endl;

	for (i = 0; i < 6; ++i)
	{
		cout << record[i] << " grade(s) of " << i << endl;
	}
	
	system("pause");
	return(0);

}