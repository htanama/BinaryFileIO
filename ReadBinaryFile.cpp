/*
ReadBinaryFile.cpp - This program will read a binary file
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
