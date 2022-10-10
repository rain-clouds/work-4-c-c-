#define _CRT_SECURE_NO_WARNINGS
#include "canvas.h"
#include "printer.h"
int main() {
    Printer::print_add(5, 6);
    Printer::print_add(5, 6, 7);
    // Printer::print_add(5.0, 6, 7); doesn't compile, why?
    Printer::print_add(5.0, 6.0);
    Printer::print_add(5.0, 6.0, 7.0);

    Canvas canvas(7, 80);
    canvas.set_pixels(4, 3, 19, 95, 4, 23, 92, 4, 60, 95, 2, 59, 95);
    canvas.set_pixels(5, 1, 14, 95, 1, 60, 47, 3, 7, 47, 1, 4, 95, 3, 23, 47);
    canvas.set_pixels(5, 4, 57, 46, 1, 5, 95, 4, 21, 47, 1, 21, 95, 4, 2, 95);
    canvas.set_pixels(3, 5, 4, 95, 2, 27, 95, 3, 1, 47);
    canvas.set_pixels(4, 1, 20, 95, 1, 52, 95, 1, 29, 47, 2, 54, 92);
    canvas.set_pixels(3, 3, 26, 95, 5, 3, 95, 2, 26, 95);
    canvas.set_pixels(3, 2, 22, 92, 1, 31, 47, 2, 8, 47);
    canvas.set_pixels(3, 5, 0, 47, 1, 19, 95, 4, 59, 95);
    canvas.set_pixels(3, 4, 56, 95, 1, 11, 95, 4, 4, 44);
    canvas.set_pixels(5, 3, 50, 47, 4, 9, 92, 2, 7, 96, 4, 49, 95, 3, 27, 47);
    canvas.set_pixels(4, 0, 46, 95, 2, 20, 95, 2, 17, 47, 5, 2, 95);
    canvas.set_pixels(3, 3, 54, 47, 4, 42, 47, 1, 8, 95);
    canvas.set_pixels(5, 2, 52, 95, 4, 17, 95, 5, 39, 47, 3, 52, 47, 3, 29, 47);
    canvas.set_pixels(5, 0, 59, 95, 2, 44, 47, 4, 16, 92, 4, 12, 95, 3, 56, 47);
    canvas.set_pixels(4, 3, 58, 47, 4, 53, 47, 1, 13, 95, 4, 3, 95);
    canvas.set_pixels(3, 3, 25, 47, 1, 6, 95, 4, 55, 47);
    canvas.set_pixels(3, 4, 14, 47, 0, 60, 95, 3, 20, 47);
    canvas.set_pixels(4, 2, 62, 92, 0, 30, 95, 4, 28, 47, 2, 13, 95);
    canvas.set_pixels(5, 4, 1, 92, 1, 50, 95, 4, 44, 47, 3, 9, 47, 3, 5, 47);
    canvas.set_pixels(5, 3, 18, 47, 4, 18, 95, 3, 45, 47, 4, 50, 95, 0, 31, 95);
    canvas.set_pixels(4, 2, 12, 95, 3, 48, 47, 4, 19, 95, 2, 51, 95);
    canvas.set_pixels(4, 2, 46, 47, 4, 41, 95, 2, 2, 47, 4, 40, 95);
    canvas.set_pixels(4, 5, 41, 95, 5, 42, 95, 4, 58, 95, 2, 19, 95);
    canvas.set_pixels(3, 1, 28, 95, 3, 16, 47, 3, 59, 95);
    canvas.set_pixels(4, 3, 12, 95, 5, 40, 95, 3, 22, 47, 4, 48, 92);
    canvas.set_pixels(5, 2, 57, 47, 1, 45, 40, 1, 46, 95, 4, 26, 44, 1, 18, 95);
    canvas.set_pixels(4, 1, 3, 95, 2, 5, 95, 1, 47, 41, 2, 15, 92);
    canvas.set_pixels(4, 4, 24, 95, 4, 20, 95, 1, 61, 95, 3, 4, 95);
    canvas.set_pixels(5, 4, 6, 47, 2, 30, 47, 1, 27, 95, 3, 43, 47, 4, 10, 95);
    canvas.set_pixels(3, 1, 26, 95, 4, 13, 95, 1, 53, 95);
    canvas.set_pixels(3, 3, 15, 47, 1, 25, 95, 1, 58, 47);
    canvas.set_pixels(5, 3, 13, 47, 5, 1, 95, 3, 51, 95, 3, 60, 47, 1, 51, 95);
    canvas.set_pixels(4, 2, 10, 47, 4, 61, 47, 4, 52, 95, 4, 25, 95);
    canvas.set_pixels(5, 2, 4, 95, 4, 11, 95, 3, 3, 47, 3, 62, 47, 2, 24, 47);
    canvas.set_pixels(5, 1, 12, 95, 4, 27, 95, 3, 11, 47, 2, 60, 95, 5, 5, 47);
    canvas.set_pixels(3, 5, 43, 47, 4, 51, 95, 2, 49, 47);

    canvas.print();
}