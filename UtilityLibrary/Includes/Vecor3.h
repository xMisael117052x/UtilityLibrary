#pragma once
#include <iostream>
#include <cmath>


class
    Vector3
{
public:
    float x, y, z; 

   
    Vector3() :
        x(0), y(0), z(0) { }

   
    Vector3(float x, float y, float z) :
        x(x), y(y), z(z) { }

    
    Vector3
        operator+(const Vector3& other) const {
        return Vector3(x + other.x, y + other.y, z + other.z);
    }

    
    Vector3
        operator-(const Vector3& other) const {
        return Vector3(x - other.x, y - other.y, z - other.z);
    }

    Vector3
        operator*(float scalar) const {
        return Vector3(x * scalar, y * scalar, z * scalar);
    }

  
    float
        magnitude() const {
        return std::sqrt(x * x + y * y + z * z);
    }

   
    Vector3
        normalize() const {
        float mag = magnitude();
        if (mag == 0) {
            return Vector3(0, 0, 0);
        }
        return Vector3(x / mag, y / mag, z / mag);
    }
};

