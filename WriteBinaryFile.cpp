/*
WriteBinaryFile.cpp - This program will write a file to binary
This code is for learning purposes. 

Copyright (C) 2024  Harry Tanama

This program is free software; you can redistribute it and/or
modify it under the terms of the GNU General Public License
as published by the Free Software Foundation; either version 2
of the License, or (at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program; if not, write to the Free Software
Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA  02110-1301, USA.
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
