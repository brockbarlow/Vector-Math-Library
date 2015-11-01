/*
Assignment : Math...
1. Create a templated class that supports 2D Vector addition and subtraction. //Done
2. Add support for 3D vectors.                                                //Done
3. Add support for magnitude of a vector.                                     //Done
4. Add support for normalizing a vector.                                      //Done
5. Add support for dot and cross product.                                     //Done
*/

#pragma once
#include <iostream>   //c++ standard library
#include <cmath>      //c++ library that allows the use of "sqrt" and "pow" math

template<typename T>
class Vec2 //template class for 2D vectors
{
public:
	T x, y; //variables

	Vec2() //Default constructor
	{
		x, y = 0;
	}
	Vec2(T a, T b) //Custom constructor
	{
		x = a;
		y = b;
	}

	Vec2 operator+(const Vec2 &other) //overload operator for addition
	{
		T newX = x + other.x;
		T newY = y + other.y;
		return Vec2(newX, newY);
	}
	Vec2 operator-(const Vec2 &other) //overload operator for subtraction
	{
		T newX = x - other.x;
		T newY = y - other.y;
		return Vec2(newX, newY);
	}
	Vec2 operator*(const Vec2 &other) //overload operator for multiplication
	{
		T newX = x * other.x;
		T newY = y * other.y;
		return Vec2(newX, newY);
	}

	//float mag2 function. This function will compute the magnitude of 2D 
	//vectors
	float mag2()
	{
		return sqrtf(x * x + y * y);
	}

	//float nor2X, nor2Y, and nor2Z function(s). These functions will compute
	//the normalise of 2D vectors. The reason for 2 normalise functions, did
	//not work when put together
	float nor2X()
	{
		float nX = x / sqrtf(x * x + y * y);
		return nX;
	}
	float nor2Y()
	{
		float nY = y / sqrtf(x * x + y * y);
		return nY;
	}

	//float dot2 function. This function will compute the dot product of 2D
	//vectors.
	float dot2()
	{
		float d2 = x + y;
		cout << d2 << endl;
		return d2;
	}

	float cro2()
	{
		float c2 = (x * y) - (y * x);
		return c2;
	}

	void print2() //prints out x and y for 2D vectors
	{
		cout << x << ", " << y << endl;
	}
};

template<typename T>
class Vec3 //template class for 3D vectors
{
public:
	T x, y, z; //variables

	Vec3() //Default constructor
	{
		x, y, z = 0;
	}
	Vec3(T a, T b, T c) //Custom constructor
	{
		x = a;
		y = b;
		z = c;
	}

	Vec3 operator+(const Vec3 &other) //overload operator for addition
	{
		T newX = x + other.x;
		T newY = y + other.y;
		T newZ = z + other.z;
		return Vec3(newX, newY, newZ);
	}
	Vec3 operator-(const Vec3 &other) //overload operator for subtraction
	{
		T newX = x - other.x;
		T newY = y - other.y;
		T newZ = z - other.z;
		return Vec3(newX, newY, newZ);
	}
	Vec3 operator*(const Vec3 &other) //overload operator for multiplication
	{
		T newX = x * other.x;
		T newY = y * other.y;
		T newZ = z * other.z;
		return Vec3(newX, newY, newZ);
	}

	//float mag3 function. This function will compute the magnitude of 3D 
	//vectors
	float mag3()
	{
		return sqrtf(x * x + y * y + z * z);
	}

	//float nor3X, nor3Y, and nor3Z function(s). These functions will compute
	//the normalise of 3D vectors. The reason for 3 normalise functions, did
	//not work when put together
	float nor3X()
	{
		float nX = x / sqrtf(x * x + y * y + z * z);
		return nX;
	}
	float nor3Y()
	{
		float nY = y / sqrtf(x * x + y * y + z * z);
		return nY;
	}
	float nor3Z()
	{
		float nZ = z / sqrtf(x * x + y * y + z * z);
		return nZ;
	}

	//float dot3 function. This function will compute the dot product of 3D
	//vectors.
	float dot3()
	{
		float d3 = x + y + z;
		cout << d3 << endl;
		return d3;
	}

	float cro3X()
	{
		float cX = (y * z) - (z * y);
		return cX;
	}
	float cro3Y()
	{
		float cY = (z * x) - (x * z);
		return cY;
	}
	float cro3Z()
	{
		float cZ = (x * y) - (y * x);
		return cZ;
	}

	void print3() //prints out x, y and z for 3D vectors
	{
		cout << x << ", " << y << ", " << z << endl;
	}
};