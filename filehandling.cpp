#include <iostream>
#include <fstream>  
using namespace std;

int main() {
       ofstream outFile("sample.txt");  

   
    outFile << "Hello, this is a file handling example in C++.\n";
    outFile << "We are writing and reading from a file.\n";

    
    outFile.close();

    cout << "Data written to file successfully.\n";

    
    ifstream inFile("sample.txt");

    string line;
    cout << "\nReading data from file:\n";

   
    while (getline(inFile, line)) {
        cout << line << endl;
    }

    
    inFile.close();

    return 0;
}
