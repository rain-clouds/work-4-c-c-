#pragma once
class Canvas {
private:
    char matrix[128][128];
    int lines, columns;
public:
    
    // calls clear
    Canvas(int lines, int columns);

    void set_pixel(int x, int y, char value);

    // tuples of x, y, value
    void set_pixels(int count, ...);
    void clear();
    void print() const;
};