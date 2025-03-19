#include <stdio.h>

// Define a struct for a point in 2D space
typedef struct {
    int x;
    int y;
} Point;

// Function that takes a Point struct by value
void movePointByValue(Point p, int dx, int dy) {
    p.x += dx; // These modifications
    p.y += dy; // will not persist outside this function
}

// Function that takes a pointer to a Point struct
void movePointByPointer(Point *p, int dx, int dy) {
    p->x += dx; // These modifications
    p->y += dy; // will persist outside this function
}

int main() {
    Point point1 = {10, 20};
    Point point2 = {10, 20};

    // Move point1 by value
    movePointByValue(point1, 3, 4);
    printf("After movePointByValue: point1 = (%d, %d)\n", point1.x, point1.y); // No change

    // Move point2 by pointer
    movePointByPointer(&point2, 3, 4);
    printf("After movePointByPointer: point2 = (%d, %d)\n", point2.x, point2.y); // Changes reflected

    return 0;
}
