#include <iostream>
#include <fstream>
using namespace std;

// Structure to store data
struct Person {
    string name;
    int age;
};

int main() {
    // 1. Creating fstream, ifstream, and ofstream objects
    ifstream inFile; // Input file stream
    ofstream outFile; // Output file stream
    fstream ioFile;  // Input/output file stream

    // 2. Understanding ios::<> modes
    // Open a file for writing in binary mode
    outFile.open("output.txt", ios::out | ios::binary);

    // Open a file for reading and writing (ate mode, seek to the end)
    ioFile.open("data.txt", ios::in | ios::out | ios::ate);

    // 3. Printing eof(), fail(), bad(), good(), clear()
    if (inFile.fail()) {
        cout << "Failed to open input file." << endl;
    }

    // 4. Reading file character by character
    char ch;
    while (inFile.get(ch)) {
        cout << ch;
    }

    // 5. Writing file character by character
    outFile << "Hello, World!" << endl;

    // 6. Creating Structure to read and write from a file
    Person person;
    person.name = "John";
    person.age = 30;

    outFile.write(reinterpret_cast<char*>(&person), sizeof(Person));

    // 7. Using seekp, seekg, tellp, tellg functions
    ioFile.seekg(0, ios::end); // Seek to the end of the file
    streampos endPosition = ioFile.tellg(); // Get the current position (end)

    ioFile.seekp(0, ios::beg); // Seek to the beginning of the file
    streampos beginPosition = ioFile.tellp(); // Get the current position (beginning)

    cout << "File size: " << endPosition - beginPosition << " bytes" << endl;

    // Close files
    inFile.close();
    outFile.close();
    ioFile.close();

    return 0;
}
