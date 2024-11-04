#pragma once
#include <iostream>
#include <cmath>


class
    Vector2 {
public:
    float x, y; 

   
    Vector2()
        : x(0), y(0) { }

   
    Vector2(float x, float y) :
        x(x), y(y) { }

    
    Vector2
        operator+(const Vector2& other) const {
        return Vector2(x + other.x, y + other.y);
    }

    
    Vector2
        operator-(const Vector2& other) const {
        return Vector2(x - other.x, y - other.y);
    }

    
    Vector2
        operator*(float scalar) const {
        return Vector2(x * scalar, y * scalar);
    }

    
    float
        magnitude() const {
        return std::sqrt(x * x + y * y);
    }

    
    Vector2
        normalize() const {
        float mag = magnitude();
        if (mag == 0) {
            return Vector2(0, 0);
        }
        return Vector2(x / mag, y / mag);
    }
}; #pragma once
