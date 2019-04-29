//
// Created by Riley on 14-Apr-19.
//
#ifndef CLUEGAME_SHAPE_H
#define CLUEGAME_SHAPE_H

#include <iostream>
#include <cmath>
using namespace std;

struct color {
    double red;
    double green;
    double blue;
};

struct point {
    int x;
    int y;
};

// Abstract parent class
class Shape {
public:
    // Constructors
    Shape();
    Shape(color f);
    Shape(point p);
    Shape(color f, point p);

    // getters
    // will call calculate_area
    virtual double get_area();
    // will call calculate_perimeter
    virtual double get_perimeter();
    virtual color get_fill() const;
    virtual point get_position() const;
    virtual int get_x() const;
    virtual int get_y() const;
    // call set_position
    // delta_x and delta_y can be any value
    virtual void move(int delta_x, int delta_y);

    // setters
    // red, green, and blue should each be in range [0,1]
    virtual void set_fill(color f);
    virtual void set_fill(double r, double g, double b);
    // position should be in range of size of window
    virtual void set_position(point p);
    virtual void set_position(int x_pos, int y_pos);

    // method to draw shape
    // pure virtual
    virtual void draw() const = 0;

    // pure virtual method to detect if the shape
    // overlaps with a point
    virtual bool overlap(const point &p) const = 0;
    virtual bool overlap(int x, int y) const = 0;
protected:
    color fill;
    point position;
    double area;
    double perimeter;
    // helper methods that will be overridden in child classes
    // pure virtual methods are explicitly undefined using = 0
    virtual void calculate_area() = 0;
    virtual void calculate_perimeter() = 0;
};

class Circle : public Shape {
    // position is the center of the circle
private:
    double radius;
    virtual void calculate_area() override;
    virtual void calculate_perimeter() override;
public:
    // Constructors
    Circle();
    Circle(double r);
    Circle(color f);
    Circle(point p);
    Circle(double r, color f, point p);

    // getter
    virtual double get_radius() const;

    // setter
    virtual void set_radius(double r);
    /**
    * requires:none
    * modifies:none
    * effects:draws circle graphic
    */
    virtual void draw() const override;
    /**
    * requires:point / x,y coordinate / rectangle / circle
    * modifies:none
    * effects:returns boolean true if point overlaps with circle
    */
    virtual bool overlap(const point &p) const override;
    virtual bool overlap(int x, int y) const override;
    virtual bool overlap(const Circle &c) const;
    // horizontal line segment
    virtual bool overlap_horizontal(int x1, int y1, int x2) const;
    // vertical line segment
    virtual bool overlap_vertical(int x1, int y1, int y2) const;

};

class Rectangles : public Shape {
    // position will represent the
    // top left corner of the Rectangle
private:
    double width;
    double height;
    virtual void calculate_area() override;
    virtual void calculate_perimeter() override;
public:
    // Constructors
    Rectangles();
    Rectangles(double w, double h);
    Rectangles(color f);
    Rectangles(point p);
    Rectangles(double w, double h, color f, point p);

    // getters
    virtual double get_width() const;
    virtual double get_height() const;

    // setters
    // want width to be >= 0
    virtual void set_width(double w);
    // want height to be >= 0
    virtual void set_height(double h);
    virtual void set_dimensions(double w, double h);
    /**
     * requires:none
     * modifies:none
     * effects:draws rectangle graphic
     */
    virtual void draw() const override;
    /**
     * requires:point / x,y coordinate / rectangle / circle
     * modifies:none
     * effects:returns boolean true if point overlaps with rectangle
     */
    virtual bool overlap(const point &p) const override;
    virtual bool overlap(int x, int y) const override;
    virtual bool overlap(const Rectangles &r) const;
    virtual bool overlap(const Circle &c) const;
};

#endif //CLUEGAME_SHAPE_H
