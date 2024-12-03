#include <iostream>
#include <fstream>
#include <sstream>
#include <string>

using namespace std;

int main() {
    // Open the file for reading
    ifstream inputFile("data.txt");

    // Check if the file opened successfully
    if (!inputFile) {
        cerr << "Unable to open file data.txt" << endl;
        return 1;
    }

    string line;

    // Read the file line by line
    while (getline(inputFile, line)) {
        stringstream ss(line);
        string header, value;

        // Process each key-value pair separated by spaces
        while (getline(ss, header, ':') && getline(ss, value, ' ')) {
            // Display the value
            cout << header << ": " << value << endl;
        }
    }

    // Close the file
    inputFile.close();

    return 0;
}
