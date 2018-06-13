/*
Title: Vector Mathematics
File Name: Vector4D.cpp
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

#ifndef _VECTOR_4D_CPP
#define _VECTOR_4D_CPP
#include "Vector4D.h"

Vector4D::Vector4D()
	: x(0), y(0), z(0), w(0)
{
}

Vector4D::Vector4D(float x, float y, float z, float w)
	: x(x), y(y), z(z), w(w)
{
}

Vector4D operator-(Vector4D v)
{
	return Vector4D(-v.x, -v.y, -v.z, -v.w);
}

Vector4D operator+(Vector4D v1, Vector4D v2)
{
	return Vector4D(v1.x + v2.x, v1.y + v2.y, v1.z + v2.z, v1.w + v2.w);
}

Vector4D operator-(Vector4D v1, Vector4D v2)
{
	return Vector4D(v1.x - v2.x, v1.y - v2.y, v1.z - v2.z, v1.w - v2.w);
}

Vector4D operator*(float s, Vector4D v)
{
	return Vector4D(s * v.x, s * v.y, s * v.z, s * v.w);
}

Vector4D operator*(Vector4D v, float s)
{
	return s * v;
}

Vector4D operator/(Vector4D v, float s)
{
	return (1.0f / s) * v;
}

bool operator==(Vector4D v1, Vector4D v2)
{
	return ((v1.x == v2.x) && (v1.y == v2.y) && (v1.z == v2.z) && (v1.w == v2.w));
}

bool operator!=(Vector4D v1, Vector4D v2)
{
	return !(v1 == v2);
}

float Dot(Vector4D v1, Vector4D v2)
{
	return v1.x * v2.x + v1.y * v2.y + v1.z * v2.z + v1.w * v2.w;
}

Vector4D Project(Vector4D a, Vector4D b)
{
	return (Dot(a, b) / Dot(b, b)) * b;
}

Vector4D Reject(Vector4D a, Vector4D b)
{
	return a - Project(a, b);
}

float Magnitude(Vector4D v)
{
	return sqrtf(Dot(v, v));
}

std::ostream& operator<<(std::ostream& os, Vector4D v)
{
	os << "(" << v.x << ", " << v.y << ", " << v.z << ", " << v.w << ")";
	return os;
}
#endif // !_VECTOR_4D_CPP