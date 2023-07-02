
#include <iostream>
using namespace std;

const int FOOT_TO_INCH = 12;
const float INCH_TO_METER = 0.0254;
const double KILLOGRAM_TO_POUND = 2.2;

int main(void)
{
	int height_foot,height_inch;
	double weight_pound,height,weight,BMI;
	cout << "Please enter your height foot:";
	cin >> height_foot;
	cout << "Please enter your height inch:";
	cin >> height_inch;
	cout << "Please enter your weight in pounds:";
	cin >> weight_pound;

	height = (height_foot * FOOT_TO_INCH + height_inch) * INCH_TO_METER;
	weight = weight_pound / KILLOGRAM_TO_POUND;
	BMI = weight / (height * height);
	cout << "Your BMI is " << BMI << endl;


	return 0;
}
