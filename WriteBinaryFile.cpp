/*
WriteBinaryFile.cpp - This program will write a file to binary
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
	strcpy(p1.name, "Adam");
	p1.age = 20;

	strcpy(p2.name, "John");
	p2.age = 28; 
	
	strcpy(p3.name, "Matt");
	p3.age = 35;

	std::ofstream myfile;
	
	myfile.open("person.dat", std::ios::binary | std::ios::out);

	//ofstream &write( void *buffer, streamsize n);
	myfile.write((char*)&p1, sizeof(person));
	myfile.write((char*)&p2, sizeof(person));
	myfile.write((char*)&p3, sizeof(person));

	myfile.close();

	return 0;
}
