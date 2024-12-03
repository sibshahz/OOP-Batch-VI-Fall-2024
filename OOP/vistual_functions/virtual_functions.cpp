#include <iostream>
using namespace std;

class Shape {
protected:
    char _type;

public:
    Shape() {}
    virtual void draw() {
        cout << "Shape\n";
    }
    virtual int calcArea() {
        return 0;
    }
    char getType() {
        return _type;
    }
};

class Line : public Shape {
public:
    Line(int p1, int p2) {
        // Use p1 and p2 if needed
    }
    void draw() override {
        cout << "Line\n";
    }
};

class Circle : public Shape {
public:
    Circle(int center, double radius) {
        // Use center and radius if needed
    }
    void draw() override {
        cout << "Circle\n";
    }
    int calcArea() override {
        return 0; // Placeholder
    }
};

class Triangle : public Shape {
public:
    Triangle(Line l1, Line l2, double angle) {
        // Use l1, l2, and angle if needed
    }
    void draw() override {
        cout << "Triangle\n";
    }
    int calcArea() override {
        return 0; // Placeholder
    }
};

void drawShapes(Shape* _shape[], int size) {
    for (int i = 0; i < size; i++) {
        if (_shape[i] != nullptr) {
            _shape[i]->draw();
        }
    }
}

int main() {
    Shape* _shape[10] = { nullptr }; // Initialize to nullptr

    int p1 = 5;
    int p2 = 10;

    _shape[1] = new Line(p1, p2);
    _shape[2] = new Circle(p1, 15);

    drawShapes(_shape, 10);

    // Clean up allocated memory
    for (int i = 0; i < 10; i++) {
        delete _shape[i];
    }

    return 0;
}
