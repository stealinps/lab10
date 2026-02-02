#include <iostream>
#include <fstream>
#include <cstdlib>
using namespace std;
#include <string>
int main() {
    string studID;
    ifstream inputFile("studAnswers.txt", ios::in);
    if (!inputFile) {
        cerr << "File could not be opened \n";
        exit(1);
    }
    ofstream outputFile("studResults.txt", ios::app);
    if (!outputFile) {
        cerr << "File could not be opened \n";
        exit(1);
    }
    int i;
    int mark = 0;
    char studans[10];
    char ans[10] = { 'A','C','D','A','A','B','B','D','C','D' };
    while (inputFile >> studID >> studans[0] >> studans[1] >> studans[2] >> studans[3] >> 
        studans[4] >> studans[5] >> studans[6] >> studans[7] >> studans[8] >> studans[9]) {
        for (i = 0; i < 10; i++) {
            if (studans[i] == ans[i]) {
                mark++;
            }
        }
        outputFile << studID << " total marks is " << mark;
    }
}
