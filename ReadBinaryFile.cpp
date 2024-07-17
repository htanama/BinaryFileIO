/*
ReadBinaryFile.cpp - This program will read a binary file
This code is for learning purposes. 

MIT License

Copyright (c) Harry Tanama

Permission is hereby granted, free of charge, to any person obtaining
a copy of this software and associated documentation files (the 
"Software"), to deal in the Software without restriction, including 
without limitation the rights to use, copy, modify, merge, publish, 
distribute, sublicense, and/or sell copies of the Software, and to 
permit persons to whom the Software is furnished to do so, subject to 
the following conditions:

The above copyright notice and this permission notice shall be 
included in all copies or substantial portions of the Software.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, 
EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF 
MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. 
IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY 
CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER IN AN ACTION OF CONTRACT, 
TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN CONNECTION WITH THE 
SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.

*/

#include <iostream>
#include <fstream>

struct person{
	char name[30];
	int age;
};

int main()
{
	person p1, p2, p3;

	std::ifstream inFile;
	inFile.open("person.dat", std::ios::binary | std::ios::in);
	inFile.read((char*)&p1, sizeof(person));	
	inFile.read((char*)&p2, sizeof(person));	
	inFile.read((char*)&p3, sizeof(person));	

	std::cout << p1.name << " " << p1.age << "\n";	
	std::cout << p2.name << " " << p2.age << "\n";	
	std::cout << p3.name << " " << p3.age << "\n";	

	return 0;
}
