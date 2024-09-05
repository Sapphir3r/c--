

#include <iostream>
#include <conio.h>

using namespace std;

float GetLengthFromUser();
float GetWidthFromUser();
float CalculateArea(float width, float length);
void DisplayArea(float area);

int main()
{
	float length=GetLengthFromUser();
	float width = GetWidthFromUser();
	float area = CalculateArea(width,length);
	DisplayArea(area);
	
	(void)_getch();
	return 0;
}
float GetLengthFromUser()
{
	float length = 0;
	cout << "Enter the length of the rectangle:";
	cin >> length;
	return length;
	
}
float GetWidthFromUser() 
{
	float width = 0;
	cout << "Enter the width of the rectangle:";
	cin >> width;
	return width;
}
float CalculateArea(float width, float length) { float area = width * length; return area; }
void DisplayArea(float area) { cout << "The area of the rectangle is :" << area; }