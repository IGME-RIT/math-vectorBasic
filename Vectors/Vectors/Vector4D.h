/*
Title: Vector Mathematics
File Name: Vector4D.h
Copyright © 2016
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

#ifndef _VECTOR_4D_H
#define _VECTOR_4D_H

#include <iostream>
#include <math.h>

// A three dimensional vector.
// Has a x, y, z and w component.

struct Vector4D
{
	float x, y, z, w;
	
	Vector4D();
	Vector4D(float x, float y, float z, float w);
};

// Negation of the vector -v such that v + (-v) = 0
Vector4D operator-(Vector4D);

// Componentwise vector addition
Vector4D operator+(Vector4D, Vector4D);

// Componentwise vector subtraction
Vector4D operator-(Vector4D, Vector4D);

// Scalar multiplication of Vector
Vector4D operator*(float, Vector4D);

// Scalar multiplication is commutative
Vector4D operator*(Vector4D, float);

// Scalar division of Vector
Vector4D operator/(Vector4D, float);

// Testing equality of Vectors
bool operator==(Vector4D, Vector4D);

// Testing inequality of Vectors
bool operator!=(Vector4D, Vector4D);

// Dot product of 2 Vectors
float Dot(Vector4D, Vector4D);

// Projection of Vector a and b
Vector4D Project(Vector4D, Vector4D);

// Rejection of a from b
Vector4D Reject(Vector4D, Vector4D);

// Cross product of 2 Vectors according to the right hand side
Vector4D Cross(Vector4D, Vector4D);

// Magnitude of the Vector
float Magnitude(Vector4D);

// Print the vector
std::ostream& operator<<(std::ostream& os, Vector4D);

#endif // !_VECTOR_4D_H
