#include<iostream>
using namespace std;

void input(int &hour,int &minute);//input function
void transform(char &time,int &hour,int &minute);//transform function
void output(char& time, int& hour, int& minute);//output function

int main(void) {
	int hour, minute;//input hour and minute
	char time,//P.M or A.M
		 check;//continue or stop the input

	do {
	input(hour, minute);
	transform(time, hour, minute);
	output(time, hour, minute);
	cout << "if you want to transform again,enter 'Y' or enter 'N' >>>> ";
	cin >> check;
	} while (check=='Y');
	
	system("pause");
	return(0);
}

void input(int &hour,int &minute) {

	cout << "Please enter the hour >>>";
	cin >> hour;
	cout << "Please enter the minute >>>";
	cin >> minute;
}

void transform(char& time, int& hour, int& minute) {
	if (hour <= 12)
	{
		time = 'A';
	}
	else {
		time = 'P';
		hour = hour - 12;
	}
}

void output(char& time, int& hour, int& minute) {
	if (time == 'A') {
		cout << "After the transform >> A.M. " << hour << " : " << minute << endl;
	}
	else if (time == 'P') {
		cout << "After the transform >> P.M. " << hour << " : " << minute << endl;
	}
	else {
		cout << "error" << endl;
	}
	
}
