/*
Title: Basic Vector operations
File Name: Vector3D.h
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

#ifndef _VECTOR_3D_H
#define _VECTOR_3D_H

#include <iostream>
#include <math.h>

// A three dimensional vector.
// Has a x, y and z component.

struct Vector3D
{
	float x, y, z;

	// Initialize vector to zero vector
	Vector3D();

	Vector3D(float x, float y, float z);
};

// Negation of the vector -v such that v + (-v) = 0
Vector3D operator-(Vector3D);

// Componentwise vector addition
Vector3D operator+(Vector3D, Vector3D);

// Componentwise vector subtraction
Vector3D operator-(Vector3D, Vector3D);

// Scalar multiplication of Vector
Vector3D operator*(float, Vector3D);

// Scalar multiplication is commutative
Vector3D operator*(Vector3D, float);

// Scalar division of Vector
Vector3D operator/(Vector3D, float);

// Testing equality of Vectors
bool operator==(Vector3D, Vector3D);

// Testing inequality of Vectors
bool operator!=(Vector3D, Vector3D);

// Dot product of 2 Vectors
float Dot(Vector3D, Vector3D);

// Projection of Vector a and b
Vector3D Project(Vector3D, Vector3D);

// Rejection of a from b
Vector3D Reject(Vector3D, Vector3D);

// Cross product of 2 Vectors according to the right hand side
Vector3D Cross(Vector3D, Vector3D);

// Magnitude of the Vector
float Magnitude(Vector3D);

// Calculates the volume of parallelpiped defined by a,b and c
float scalarTriple(Vector3D, Vector3D, Vector3D);

// Print the vector
std::ostream& operator<<(std::ostream& os, Vector3D);

#endif // !_VECTOR_3D_H
