#include<iostream>
using namespace std;

double convertToMPH(int ,int);
double convertToMPH(double);


int main(void) {
	int second, minute;
	double MPH , KPH;

	cout << "Please enter the minute >>";
	cin >> minute;
	cout << "Please enter the second >>";
	cin >> second;
	

	MPH = convertToMPH(second, minute);
	KPH = convertToMPH(MPH);

	cout << "mph >>> " << MPH << "  kph >>> " << KPH << endl;

	system("pause");
	return(0);
}

double convertToMPH(int second, int minute)
{
	double MPH;
	MPH = minute + (second / 60.0);
	return(MPH);
}

double convertToMPH(double MPH) 
{
	double KPH;
	KPH = MPH * 1.61;
	return(KPH);
}