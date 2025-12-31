/*Write a program that opens employee. txt file for input and salary. txt file for 
output. Read all records from the input file that consists of string employeeNum, 
integer totalHours and floating-point salaryPerHour. The program should 
calculate the total salary for each employee which is based on the totalHours and 
salaryPerHour. Then, write all of the employees' details (including the total 
salary for each employee) to the output file. Finally calculate the total salary for all 
employees and append the calculated value to the output file.*/


#include <iostream>
#include <fstream>
using namespace std;
int main() {
    string employeeNum;
    int totalHours;
    float salaryPerHour;
    double totalSalary;
    double grandTotal=0;

    ifstream inputFile("employee.txt", ios::in);
    if (!inputFile) {
        cerr << "File could not be opened \n";
        exit(1);
    }
    ofstream outputFile("salary.txt", ios::app);
    if (!outputFile) {
        cerr << "File could not be opened \n";
        exit(1);
    }
  
    while (inputFile >> employeeNum >> totalHours >> salaryPerHour) {
        totalSalary = totalHours * salaryPerHour;
        grandTotal += totalSalary;
        outputFile << "Employee Number: " << employeeNum << endl;
        outputFile << "Total Hours: " << totalHours << endl;
        outputFile << "Salary Per Hour: " << salaryPerHour << endl;
        outputFile << "Total Salary: " << totalSalary << endl;
        outputFile << "------------------------" << endl;
    }
    outputFile << "Grand Total Salary: " << grandTotal << endl;

    inputFile.close();
    outputFile.close();
}
