#include <iostream>
#include <fstream>

using namespace std;

int main() {
//	ofstream MyFile("filename.txt");
  // Write to the file
//  	MyFile << "Files can be tricky, but it is fun enough!";
//	  for(int i=0;i<1000;i++){
//  		MyFile << "Writing to the file for "<<i<<"th time"<<endl;
//	  }

  // Close the file
//  	MyFile.close();

    string myText;

    // Open the file for reading
    ifstream MyReadFile("filename.txt");

    // Check if the file is opened successfully
    if (!MyReadFile) {
        cerr << "Unable to open file filename.txt";
        return 1; // Exit with an error code
    }

    // Read and output the file line by line
    while (getline(MyReadFile, myText)) {
        cout << myText << endl; // Add a newline after each line
    }

    // Close the file
    MyReadFile.close();

    return 0;
}
