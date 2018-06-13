/*
Title: Basic Vector operations
File Name: Vector2D.h
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

#ifndef _VECTOR_2D_H
#define _VECTOR_2D_H

#include <iostream>
#include <math.h>

// A two dimensional vector.
// Has a x and y component.

struct Vector2D
{
	float x, y;

	// Intitialize Vector to zero vector
	Vector2D();

	Vector2D(float x, float y);
};

// Negation of the vector -v such that v + (-v) = 0
Vector2D operator-(Vector2D);

// Componentwise vector addition
Vector2D operator+(Vector2D, Vector2D);

// Componentwise vector subtraction
Vector2D operator-(Vector2D, Vector2D);

// Scalar multiplication of Vector
Vector2D operator*(float, Vector2D);

// Scalar multiplication is commutative
Vector2D operator*(Vector2D, float);

// Scalar division of Vector
Vector2D operator/(Vector2D, float);

// Testing equality of Vectors
bool operator==(Vector2D, Vector2D);

// Testing inequality of Vectors
bool operator!=(Vector2D, Vector2D);

// Dot product of 2 Vectors
float Dot(Vector2D, Vector2D);

//Projection of Vector a onto b
Vector2D Project(Vector2D, Vector2D);

//Rejection of a from b
Vector2D Reject(Vector2D, Vector2D);

//Magnitude of Vector
float Magnitude(Vector2D);

// Print the vector
std::ostream& operator<<(std::ostream& os, Vector2D);

#endif // !_VECTOR_2D_H
