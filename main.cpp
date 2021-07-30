#include <iostream>

// function Demonstration Function
// prints out a useful message

void DemonstrationFunction() {
    std::cout << "\n\nYay::In Demo Function\n\n";
}

int Add(int x, int y) {
    std::cout << "In Add() function\n";
    std::cout << "Received x: " << x << " and y: " << y;
    return (x+y);
}

int Subtract(int x, int y){
    std::cout << "In Substract() function\n";
    std::cout << "Received x: " << x << " and y: " << y << std::endl;
    return (x-y);
}

void SizeOfDataType(){
    std::cout << "Size of int is:\t" << sizeof(int) << " bytes.\n";
    std::cout << "Size of short is:\t" << sizeof(short) << " bytes.\n";
    std::cout << "Size of long is:\t" << sizeof(long) << " bytes.\n";
    std::cout << "Size of double is:\t" << sizeof(double) << " bytes.\n";
    std::cout << "Size of float is:\t" << sizeof(float) << " bytes.\n";
    std::cout << "Size of char is:\t" << sizeof(char) << " bytes.\n";
    std::cout << "Size of boolean is:\t" << sizeof(bool) << " bytes.\n";
}

float AreaCalculator(float width, float height) {
    return (width*height);
}

void charSet(){
    for(int i = 32; i < 128; i++){
        std::cout << "Char " << i << " = " << char(i) << std::endl;
    }
}

int main() {
    std::cout << "My World.\n";
    std::cout << "Here is 5: " << 5 << "\n";
    std::cout << "The manipulator std::endl ";
    std::cout << "writes a new line to the screen.";
    std::cout << std::endl;
    std::cout << "Here is the sum of 8 and 5:\t";
    std::cout << 8 + 5 << std::endl;
    std::cout << "Here is a fraction: \t\t";
    std::cout << (float) 5 / 8 << std::endl;
    std::cout << "And a very very big number:\t";
    std::cout << (double) 7000 * 7000 << std::endl;
    std::cout << "Chandan Jhunjhunwal\n";
    std::cout << "A C++ Programmer.";
    std::cout << "Going into DemonstrationFunction From main";
    DemonstrationFunction();
    std::cout << "Out of DemonstrationFunction, back to main\n";
    int a, b, c, d;
    std::cout << "Enter the two numbers to add\n";
//    std::cin >> a;
//    std::cin >> b;
    a = 100;
    b = 10;
    std::cout << "Calling Add()\n";
    c = Add(a,b);
    d = Subtract(a,b);
    std::cout << "\nSum is : " << c ;
    std::cout << "\nDifference is : " << d << std::endl;
    SizeOfDataType();
    float width = 2.5, length = 10.0, area;
    std::cout << "Area of rectangle with width: " << width << " and length: " << length << " = " << AreaCalculator(width, length) << std::endl;
    typedef unsigned short int USHORT;
    USHORT myWidth = 5, myLength = 10;
    USHORT myArea = myWidth*myLength;
    std::cout << "Area with USHORT: " << myArea << std::endl;
    charSet();
    std::cout << "\nExisting the program\n\a";
    return 0;
}