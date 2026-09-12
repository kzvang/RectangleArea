
// Ka Zoua Vang
// Assignment 2
// Rectangle Area 

#include <iostream>
#include <conio.h>

using namespace std;

int GetLengthFromUser()
{
	int returnValue;
	cout << "Enter the length of the rectangle: ";
	cin >> returnValue;
	return returnValue;
}

int GetWidthFromUser()
{
	int returnValue;
	cout << "Enter the width of the rectangle: ";
	cin >> returnValue;
	return returnValue;
}

int CalculateArea(int length, int width)
{
	int returnValue;
	returnValue = length * width;
	return returnValue;
}

void DisplayArea(int area)
{
	cout << "The area of the rectangle is: " << area << ".\n";
}

int main()
{
	int length, width, area;

	length = GetLengthFromUser();
	width = GetWidthFromUser();
	area = CalculateArea(length, width);
	DisplayArea(area);

    (void)_getch();
    return 0;
}