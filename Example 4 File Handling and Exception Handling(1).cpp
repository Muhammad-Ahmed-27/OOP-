#include <iostream>
#include <fstream>
using namespace std;

int main() {
    int marks;
    try {
        ofstream outfile("Students.txt");
        for (int i = 0; i < 5; i++) {
            cout << "Enter marks of Student " << (i + 1) << ": ";
            cin >> marks;
            if (marks < 0 || marks > 100) {
                throw "Invalid marks";
            }
            outfile << marks << " ";
            cout << "Position of Student " << (i + 1) << " marks: " << outfile.tellp() << endl;
        }
        outfile.close();

        ifstream infile("Students.txt");
        ofstream outfile1("Average.txt");

        for (int i = 0; i < 5; i++) {
            infile >> marks;
            if (marks < 0 || marks > 100) {
                throw "Invalid marks read from file";
            }
            double avg = marks / 100.0; // use 100.0 for floating-point division
            outfile1 << "Marks: " << marks << " Avg: " << avg << endl;
        }

        infile.close();
        outfile1.close();
    }
    catch (const char* ex) {
        cout << ex << endl;
    }

    return 0;
}
