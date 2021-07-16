#include <iostream>

// function Demonstration Function
// prints out a useful message

void DemonstrationFunction()
{
  std::cout << "\n\nYay::In Demo Function\n\n";
}

//
int main() {
    using namespace std;
    cout << "My World.\n";
    cout << "Here is 5: " << 5 << "\n";
    cout << "The manipulator endl ";
    cout << "writes a new line to the screen.";
    cout << endl;
    cout << "Here is the sum of 8 and 5:\t";
    cout << 8 + 5 << endl;
    cout << "Here is a fraction: \t\t";
    cout << (float) 5/8 << endl;
    cout << "And a very very big number:\t";
    cout << (double) 7000*7000 << endl;
    cout << "Chandan Jhunjhunwal\n";
    cout << "A C++ Programmer.";
    cout << "Going into DemonstrationFunction From main";
    DemonstrationFunction();
    cout << "Out of DemonstrationFunction, back to main\n";
    return 0;
}