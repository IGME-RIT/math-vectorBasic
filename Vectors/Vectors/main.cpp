/*
Title: Basic Vector operations
File Name: main.cpp
Copyright @2018
Author: Parth Contractor
Written under the supervision of David I. Schwartz, Ph.D., and
supported by a professional development seed grant from the B. Thomas
Golisano College of Computing & Information Sciences
(https://www.rit.edu/gccis) at the Rochester Institute of Technology.
This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 3 of the License, or (at
your option) any later version.
This program is distributed in the hope that it will be useful, but
WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
General Public License for more details.
You should have received a copy of the GNU General Public License
along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "Vector2D.h"
#include "Vector3D.h"
#include "Vector4D.h"
#include <iostream>

int main()
{
	Vector2D a = Vector2D(1, 2);
	Vector2D b = Vector2D(3, 4);

	Vector3D c = Vector3D(8, 10, 2);
	Vector3D d = Vector3D(1, 4, 9);

	float s = 10.0f;
	float s1 = 5.0f;

	std::cout << "=====================THE 2D VECTORS===================" << std::endl;

	std::cout << "Addition of two vectors " << a << " & " << b << std::endl;
	std::cout << "Answer : " << a + b << std::endl;

	std::cout << "Subtraction of two vectors " << a << " & " << b << std::endl;
	std::cout << "Answer : " << a - b << std::endl;

	std::cout << "Scalar multiplication of vector " << a << " by " << s << std::endl;
	std::cout << "Answer : " << s * a << std::endl;

	std::cout << "Division of vector " << b << " by scalar number " << s << std::endl;
	std::cout << "Answer : " << b / s << std::endl;

	std::cout << "Equality of vectors " << a << " and " << b << std::endl;
	if (a == b)
	{
		std::cout << "Equal" << std::endl;
	}
	else
	{
		std::cout << "Not Equal" << std::endl;
	}

	std::cout << "The dot product of 2 vectors " << a << " & " << b << std::endl;
	std::cout << "Answer : " << Dot(a, b) << std::endl;

	std::cout << "Projection of a: " << a << " on b: " << b << std::endl;
	std::cout << Project(a, b) << std::endl;

	std::cout << "Rejection of a: " << a << " on b: " << b << std::endl;
	std::cout << Reject(a, b) << std::endl;

	std::cout << "The magnitude of a: ";
	std::cout << Magnitude(a) << std::endl;

	std::cout << "The magnitude of b: ";
	std::cout << Magnitude(b) << std::endl;

	std::cout << "=====================THE 3D VECTORS===================" << std::endl;

	std::cout << "Addition of two vectors " << c << " & " << d << std::endl;
	std::cout << "Answer : " << c + d << std::endl;

	std::cout << "Subtraction of two vectors " << c << " & " << d << std::endl;
	std::cout << "Answer : " << c - d << std::endl;

	std::cout << "Scalar multiplication of vector " << d << " by " << s1 << std::endl;
	std::cout << "Answer : " << s1 * d << std::endl;

	std::cout << "Division of vector " << c << " by scalar number " << s1 << std::endl;
	std::cout << "Answer : " << c / s1 << std::endl;

	std::cout << "Equality of vectors " << c << " and " << d << std::endl;
	if (c == d)
	{
		std::cout << "Equal" << std::endl;
	}
	else
	{
		std::cout << "Not Equal" << std::endl;
	}

	std::cout << "The dot product of 2 vectors " << c << " & " << d << std::endl;
	std::cout << "Answer : " << Dot(c, d) << std::endl;

	std::cout << "The cross product 2 vectors " << c << " & " << d << std::endl;
	std::cout << "Answer : " << Cross(c, d) << std::endl;

	std::cout << "The cross product 2 vectors " << d << " & " << c << std::endl;
	std::cout << "Answer : " << Cross(d, c) << std::endl;

	std::cout << "Projection of c: " << c << " on d: " << d << std::endl;
	std::cout << Project(c, d) << std::endl;

	std::cout << "Rejection of c: " << c << " on b: " << d << std::endl;
	std::cout << Reject(c, d) << std::endl;

	std::cout << "The magnitude of c: ";
	std::cout << Magnitude(c) << std::endl;

	std::cout << "The magnitude of d: ";
	std::cout << Magnitude(d) << std::endl;

	std::cin.get();
}