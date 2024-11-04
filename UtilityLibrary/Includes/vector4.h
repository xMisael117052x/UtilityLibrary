#pragma once
#include <iostream>
#include <cmath>


class
    Vector4
{
public:
    float x, y, z, w; 

   
    Vector4() :
        x(0), y(0), z(0), w(0) { }

    
    Vector4(float x, float y, float z, float w) :
        x(x), y(y), z(z), w(w) { }

    
    Vector4
        operator+(const Vector4& other) const {
        return Vector4(x + other.x, y + other.y, z + other.z, w + other.w);
    }

   
    Vector4
        operator-(const Vector4& other) const {
        return Vector4(x - other.x, y - other.y, z - other.z, w - other.w);
    }

   
    Vector4
        operator*(float scalar) const {
        return Vector4(x * scalar, y * scalar, z * scalar, w * scalar);
    }

    
    float
        magnitude() const {
        return std::sqrt(x * x + y * y + z * z + w * w);
    }

    
    Vector4
        normalize() const {
        float mag = magnitude();
        if (mag == 0) {
            return Vector4(0, 0, 0, 0);
        }
        return Vector4(x / mag, y / mag, z / mag, w / mag);
    }
};
#pragma once
