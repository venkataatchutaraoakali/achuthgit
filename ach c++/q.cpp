#include <iostream>
#include <fstream>
#include <string>

// Structure to read and write from/to a file
struct Person {
    std::string name;
    int age;
};

int main() {
    // Creating fstream, ifstream, and ofstream objects
    std::fstream file("data.txt", std::ios::in | std::ios::out | std::ios::binary);

    // Checking if the file is open
    if (!file.is_open()) {
        std::cerr << "Failed to open the file." << std::endl;
        return 1;
    }

    // Understanding ios::<> modes:
    // app - Append to the end of the file.
    // binary - Treat the file as a binary file.
    // in - Open for reading.
    // out - Open for writing.
    // ate - Move to the end of the file immediately after opening.
    // trunc - Truncate the file if it exists.
    // nocreate - Do not create the file if it doesn't exist.
    // noreplace - Do not open an existing file for writing.

    // Checking the file's state
    if (file.eof()) {
        std::cout << "EOF flag is set." << std::endl;
    }
    if (file.fail()) {
        std::cout << "Fail flag is set." << std::endl;
    }
    if (file.bad()) {
        std::cout << "Bad flag is set." << std::endl;
    }
    if (file.good()) {
        std::cout << "Good flag is set." << std::endl;
    }

    // Clearing flags
    file.clear();

    // Reading from the file character by character
    char c;
    while (file.get(c)) {
        std::cout << c;
    }
    
    // Rewind to the beginning of the file
    file.seekg(0, std::ios::beg);

    // Reading from the file using the >> operator (assuming a space-separated file)
    std::string name;
    int age;
    while (file >> name >> age) {
        std::cout << "Name: " << name << ", Age: " << age << std::endl;
    }

    // Writing to the file character by character
    file.seekp(0, std::ios::end); // Move to the end of the file
    file.put('\n'); // Add a new line
    file << "Alice 25" << std::endl;
    file << "Bob 30" << std::endl;

    // Using the structure to write data
    Person person1{"Charlie", 35};
    file.write(reinterpret_cast<char*>(&person1), sizeof(Person));

    // Move to the beginning to read the structure
    file.seekg(0, std::ios::beg);
    Person person2;
    file.read(reinterpret_cast<char*>(&person2), sizeof(Person));
    std::cout << "Name: " << person2.name << ", Age: " << person2.age << std::endl;

    // Close the file
    file.close();

    return 0;
}
