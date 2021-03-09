#include <iostream>
#include <cmath>

// a struct (structure) is a data type that acts like an array
// but can hold items of more than one data type
struct Point {
    char label;
    float x;
    float y;
};

// we can pass structs to functions:
float dist(Point a, Point b) {
    return std::sqrt((a.x - b.x)*(a.x - b.x) + (a.y - b.y)*(a.y - b.y));
}

// we can return structs from functions:
Point midpoint(Point a, Point b) {
    Point mid;
    mid.label = 'M';
    mid.x = (a.x + b.x) / 2.0;
    mid.y = (a.y + b.y) / 2.0;
    return mid;
}

int main() {
    Point p1 = {'A', 2.0, 4.0};
    std::cout << p1.label << " is a point at (" << p1.x << ", " << p1.y << ")";
    std::cout << std::endl;

    Point p2 = {'B', 3.0, 5.0};
    std::cout << p2.label << " is a point at (" << p2.x << ", " << p2.y << ")";
    std::cout << std::endl;

    std::cout << "the distance from " << p1.label << " to " << p2.label;
    std::cout << " is: " << dist(p1, p2);
    std::cout << std::endl;

    Point mid = midpoint(p1, p2);

    std::cout << "the midpoint between " << p1.label << " and " << p2.label;
    std::cout << " is (" << mid.x << ", " << mid.y << ")";
    std::cout << std::endl;

    return 0;
}
