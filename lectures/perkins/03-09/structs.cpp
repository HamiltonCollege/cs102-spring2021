// object-oriented programming (OOP)
// structures (struct)

#include <iostream>
#include <cmath>

// A struct is more powerful than an array because it can
// hold a variety of data types:
struct Point {
    char label;
    float x;
    float y;
};

// structs can be passed to functions like usual:
float dist(Point a, Point b) {
    return std::sqrt((a.x - b.x) * (a.x - b.x) + (a.y - b.y) * (a.y - b.y));
}

// structs can be returned from functions:
Point midpoint(Point a, Point b) {
    Point mid = {'M', 0.0, 0.0};
    mid.x = (a.x + b.x) / 2;
    mid.y = (a.y + b.y) / 2;
    return mid;
}

int main() {
    int x = 0;
    Point p1 = {'A', 2.0, 4.0};
    Point p2 = {'B', 3.0, 3.0};
    Point p3 = {'C', 5.5, -1.5};

    std::cout << "Point " << p1.label << " is at (";
    std::cout << p1.x << ", " << p1.y << ")" << std::endl;

    std::cout << "Point " << p3.label << " is at (";
    std::cout << p3.x << ", " << p3.y << ")" << std::endl;

    float d = dist(p1, p3);
    std::cout << "The distance between them is: " << d << std::endl;

    Point mid = midpoint(p1, p3);
    std::cout << "The midpoint is: (" << mid.x << ", " << mid.y << ")";
    std::cout << std::endl;

    mid = midpoint(p1, p2);
    std::cout << "The midpoint is: (" << mid.x << ", " << mid.y << ")";
    std::cout << std::endl;

    return 0;
}
