/*
 Owen Neros
 C++ Fall 2022
 Due: Sep 28, 2022
 Lab 3 User and File I/O
 
 */

#include <iostream>
#include <fstream>
#include <cmath>

void userinput();
void mean();
void stde();
void inputs();
void outputs();


using namespace std;

string inputFileName = "/Users/owenneros/Desktop/input.dat3";
string readIn;
string outFileName = "/Users/owenneros/Desktop/output.dat9";

int firstnumber;
int secondnumber;
int thirdnumber;
int fourthnumber;

float sum = 0.0, average, s1, s2, sd;

int main()
{
    userinput();
    mean();
    stde();
        
        cout << "\nThe average of the numbers that you have picked is: " << average;

        cout << "\nThe standard deviation of the integers that you have picked is: " << sd << endl << endl;
    
    inputs();
    cout << firstnumber << endl;
    mean();
    cout << average << endl;
    stde();
    cout << sd << endl;
    outputs();
    return 0;
}

void inputs()
{
    firstnumber = 0;
    secondnumber = 0;
    thirdnumber = 0;
    fourthnumber = 0;
    
        ifstream inFile;
        inFile.open(inputFileName);
        
        if(!inFile)
        {
            cout << "Can not open input File" << endl;
        }
         
    inFile >> firstnumber >> secondnumber >> thirdnumber >> fourthnumber;
}
void outputs()
{
        ofstream outFile;
        
        outFile.open(outFileName);
        outFile << firstnumber << " " << secondnumber << " " << thirdnumber << " "<< fourthnumber << endl << "The average of the integers is: " << average << endl << "The standard deviation of the integers is: " << sd;
}
    
    
void userinput(){
    cout << "Please enter any integer as your first number: ";
    cin >> firstnumber;
    cout << "Please enter any integer as your second number: ";
    cin >> secondnumber;
    cout << "Please enter any integer as your third number: ";
    cin >> thirdnumber;
    cout << "Please enter any integer as your fourth number: ";
    cin >> fourthnumber;
    cout << "\nThe four integers that you picked are: " << firstnumber << ", " << secondnumber << ", " << thirdnumber << ", " << fourthnumber;
}

void mean()
{
    sum = 0.0;
    average = 0.0;
    sum = firstnumber + secondnumber + thirdnumber + fourthnumber;
    average = sum/4;
}

void stde()
{
    s1 = 0.0;
    s2 = 0.0;
    sd = 0.0;
    s1 = pow((firstnumber - average),2) + pow((secondnumber - average),2) + pow((thirdnumber - average),2) + pow((fourthnumber - average),2);
    s2 = s1/4;
    sd = sqrt(s2);
}
