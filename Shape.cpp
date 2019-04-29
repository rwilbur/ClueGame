//
// Created by Riley on 14-Apr-19.
//

#include "Shape.h"
#include "graphics.h"

Shape::Shape() : area(0), perimeter(0) {
    // default color: black
    fill = {0, 0, 0};
    // default position: (0, 0)
    position = {0, 0};
}

Shape::Shape(color f) : fill(f), area(0), perimeter(0) {
    position = {0, 0};
}

Shape::Shape(point p) : position(p), area(0), perimeter(0) {
    fill = {0, 0, 0};
}

Shape::Shape(color f, point p) : fill(f),
                                 position(p),
                                 area(0),
                                 perimeter(0) {
}

double Shape::get_area() {
    calculate_area();
    return area;
}

double Shape::get_perimeter() {
    calculate_perimeter();
    return perimeter;
}

color Shape::get_fill() const {
    return fill;
}

point Shape::get_position() const {
    return position;
}

int Shape::get_x() const {
    return position.x;
}

int Shape::get_y() const {
    return position.y;
}

void Shape::move(int delta_x, int delta_y) {
    // if delta_x and/or delta_y are negative,
    // will subtract from position
    set_position(position.x + delta_x, position.y + delta_y);
}

// red, green, and blue should each be in range [0,1]
void Shape::set_fill(color f) {
    if (f.red > 1) {
        f.red = 1;
    } else if (f.red < 0) {
        f.red = 0;
    }
    if (f.green > 1) {
        f.green = 1;
    } else if (f.green < 0) {
        f.green = 0;
    }
    if (f.blue > 1) {
        f.blue = 1;
    } else if (f.blue < 0) {
        f.blue = 0;
    }
    fill = f;
}

void Shape::set_fill(double r, double g, double b) {
    if (r > 1) {
        r = 1;
    } else if (r < 0) {
        r = 0;
    }
    if (g > 1) {
        g = 1;
    } else if (g < 0) {
        g = 0;
    }
    if (b > 1) {
        b = 1;
    } else if (b < 0) {
        b = 0;
    }
    fill = {r, g, b};
}

void Shape::set_position(point p) {
    // position should be in range of size of window
    position = p;
}

void Shape::set_position(int x_pos, int y_pos) {
    position = {x_pos, y_pos};
}

void Circle::calculate_area() {
    area = 3.14 * radius * radius;
}

void Circle::calculate_perimeter() {
    perimeter = 2.0 * 3.14 * radius;
}

Circle::Circle() : Shape(), radius(0) {
}

Circle::Circle(double r) : Shape() {
    set_radius(r);
}

Circle::Circle(color f) : Shape(f), radius(0) {
}

Circle::Circle(point p) : Shape(p), radius(0) {
}

Circle::Circle(double r, color f, point p) : Shape(f, p) {
    set_radius(r);
}

double Circle::get_radius() const {
    return radius;
}

void Circle::set_radius(double r) {
    if (r < 0) {
        radius = 0;
    } else {
        radius = r;
    }
}

void Circle::draw() const {
    glBegin(GL_TRIANGLE_FAN);
    // set the color to the color saved in the Circle object
    glColor3f(fill.red, fill.green, fill.blue);
    glVertex2i(position.x, position.y);
    for (int i = 0; i <= 365; ++i) {
        double radian = i * 3.14 / 180.0;
        glVertex2i(position.x+radius*cos(radian),
                   position.y+radius*sin(radian));
    }
    glEnd();

}


bool Circle::overlap(const point &p) const {
    return overlap(p.x, p.y);
}

bool Circle::overlap(int x, int y) const {
    // if the distance between the point and the center
    // of the circle is <= radius, then it overlaps.
    // Pythagorean Theorem
    double distance = sqrt((x-position.x)*(x-position.x)+
                           (y-position.y)*(y-position.y));
    return (distance <= radius);
}

bool Circle::overlap(const Circle &c) const {
    // distance between two center points
    double distance = sqrt((c.position.x-position.x)*(c.position.x-position.x)+
                           (c.position.y-position.y)*(c.position.y-position.y));
    // if that distance is < the sum of the radii,
    // then the circles overlap
    return (distance < (radius + c.radius));
}

bool Circle::overlap_horizontal(int x1, int y1, int x2) const {
    // either one of the end points overlaps
    // or the y value is in range and one of the x values
    // is to the left of the center and one is to the right
    if (overlap(x1, y1) || overlap(x2, y1)) {
        return true;
    }
    if (y1 >= (position.y-radius) && y1 <= (position.y+radius)
        && ((x1 < position.x && x2 > position.x) ||
            (x1 > position.x && x2 < position.x))) {
        return true;
    }
    return false;
}

bool Circle::overlap_vertical(int x1, int y1, int y2) const {
    // either one of the end points overlaps
    // or the x value is in range and one of the y values
    // is above the center and one is below
    if (overlap(x1, y1) || overlap(x1, y2)) {
        return true;
    }
    if (x1 >= (position.x-radius) && x1 <= (position.x+radius)
        && ((y1 < position.y && y2 > position.y) ||
            (y1 > position.y && y2 < position.y))) {
        return true;
    }
    return false;
}

void Rectangles::calculate_area() {
    area = height * width;
}

void Rectangles::calculate_perimeter() {
    perimeter = 2.0 * height + 2.0 * width;
}

Rectangles::Rectangles() : Shape(), width(0), height(0) {
}

Rectangles::Rectangles(double w, double h) : Shape() {
    // NOT including width and height in initializer list
    // because we want to check for valid values
    // so we call a setter instead
    set_dimensions(w, h);
}

Rectangles::Rectangles(color f) : Shape(f), width(0), height(0) {
}

Rectangles::Rectangles(point p) : Shape(p), width(0), height(0) {
}

Rectangles::Rectangles(double w, double h, color f, point p) : Shape(f, p) {
    set_dimensions(w, h);
}

double Rectangles::get_width() const {
    return width;
}

double Rectangles::get_height() const {
    return height;
}

void Rectangles::set_width(double w) {
    if (w < 0) {
        w = 0;
    }
    width = w;
}

void Rectangles::set_height(double h) {
    if (h < 0) {
        h = 0;
    }
    height = h;
}

void Rectangles::set_dimensions(double w, double h) {
    set_width(w);
    set_height(h);
}

void Rectangles::draw() const {
    glColor3f(fill.red, fill.green, fill.blue);
    glBegin(GL_QUADS);
    // top left corner
    glVertex2i(position.x, position.y);
    // bottom left corner
    glVertex2i(position.x, position.y + height);
    // bottom right corner
    glVertex2i(position.x + width, position.y + height);
    // top right corner
    glVertex2i(position.x + width, position.y);
    glEnd();
}

bool Rectangles::overlap(const point &p) const {
    // this is not recursive
    // this calls the other overlap method
    return overlap(p.x, p.y);
}

bool Rectangles::overlap(int x, int y) const {
    return (x >= position.x && x <= (position.x + width) &&
            y >= position.y && y <= (position.y + height));
}

bool Rectangles::overlap(const Rectangles &r) const {
    if (position.x > r.position.x+r.width) {
        // this is to the right of r
        return false;
    }
    if (r.position.x > position.x+width) {
        // r is to the right of this
        return false;
    }
    if (position.y > r.position.y+r.height) {
        // this is under r
        return false;
    }
    if (r.position.y > position.y+height) {
        // r is under this
        return false;
    }
    return true;
}

bool Rectangles::overlap(const Circle &c) const {
    // is overlapping if the center of the circle is inside
    // the rectangle or one of the rectangle's edges overlaps
    // with the circle
    if (overlap(c.get_x(), c.get_y())) {
        return true;
    }
    if (c.overlap_horizontal(position.x, position.y, position.x + width) || // top
        c.overlap_horizontal(position.x, position.y + height, position.x + width) || // bottom
        c.overlap_vertical(position.x, position.y, position.y + height) || // left
        c.overlap_vertical(position.x + width, position.y, position.y + height)) { // right
        return true;
    }
    return false;
}
