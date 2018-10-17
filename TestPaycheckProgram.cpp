#include <iostream>
#include <iomanip>
using namespace std;
//Function prototypes
void printDescription();
void computePaycheck(float, int, float&, float&);
int main()
{
float payRate;
float grossPay;
float netPay;
int hours;
cout << setprecision(2) << fixed;
cout << "Welcome to the Pay Roll Program" << endl;
//Call to description function
printDescription();
cout << "Please input the pay per hour" << endl;
cin >> payRate;
cout << endl << "Please input the number of hours worked" << endl;
cin >> hours;
cout << endl << endl;
//Call to computePaycheck function
// Fill in the code to output grossPay and netPay
computePaycheck(payRate, hours, grossPay, netPay);
cout << "The gross pay is: $" << grossPay <<endl;
cout << "The net pay is: $" << netPay << endl;
return 0;
}
void printDescription() // The function heading
{
cout << "************************************************" << endl << endl;
cout << "This program takes two numbers (payRate & hours)" << endl;
cout << "and multiplies them to get gross pay " << endl;
cout << "it then calculates net pay by subtracting 15%" << endl;
cout << "************************************************" << endl << endl;
}
// *********************************************************************
// computePaycheck
//
// task: This function takes rate and time and multiples them to
// get gross pay and then finds net pay by subtracting 15%.
// data in: pay rate and time in hours worked
// data out: the gross and net pay
//
// ********************************************************************
void computePaycheck(float rate, int time, float  &gross,float  &net)
{
float a;
gross = rate * time;
a = 0.15 * gross;
net = gross - a;
}
