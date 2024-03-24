#include<iostream>
#include<cmath>
using namespace std;

int main(void)
{
	int table[4][6] = { {3,1,5,2,1,5},
					    {4,2,1,4,2,4},
						{3,1,2,4,4,1},
						{5,1,4,2,4,2} };
	int movie1,
		movie2,
		movie3,
		rating1,
		rating2,
		rating3,
		i,
		column;
	double value[4],
		min;

	cout << "Enter the three movie you want >>> ";
	cin >> movie1 >> movie2 >> movie3;

	cout << "Enter the ratings of those movies >>> ";
	cin >> rating1 >> rating2 >> rating3;

	for (i = 0; i < 4; ++i)
	{
		value[i]=sqrt((rating1 - table[i][(movie1 - 100)]) * (rating1 - table[i][(movie1 - 100)]) + 
					  (rating2 - table[i][movie2 - 100]) * (rating2 - table[i][movie2 - 100]) + 
					  (rating3 - table[i][movie3 - 100]) * (rating3 - table[i][movie3 - 100]));
	}
	
	min = value[0];
	column = 0;

	for (i = 1; i < 4; ++i)
	{
		if (value[i] < min)
		{
			min = value[i];
			column = i;
		}
	}
	
	for (i = 0; i < 6; ++i)
	{
		if (i !=( movie1 - 100) && i != (movie2 - 100) && i != (movie3 - 100))
		{
			cout << "The predict of movie " << i + 100 << " is >>>" << table[column][i] << endl;
		}
	}
	
	system("pause");
	return(0);
}