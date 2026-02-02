#include <iostream>
#include <cstdlib>
#include <fstream>
#include <string>
using namespace std;
int main() {
    ofstream outputFile("studAnswers.txt", ios::app);
    if (!outputFile) {
        cerr << "File could not be opened\n";
        exit(1);
    }
    string studID;
    char studans;
    char ans[10] = { 'A','C','D','A','A','B','B','D','C','D' };
    cout << "Enter student id :";
    cin >> studID;
    outputFile << endl << studID;
    for (int i = 0; i < 10; i++) {
        cout << "Enter answer " << (i + 1) << " :";
        cin >> studans;
        outputFile << " " << studans;
    }
}
