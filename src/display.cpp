#include <iostream>
#include "window.h"
#include "display.h"

Display::Display() {
    init();
    window = new Window();
}
void Display::init() {
    for (int y = 0; y < MAX_HEIGHT; y++) {
        for (int x = 0; x < MAX_WIDTH; x++) {
            displayArray[x][y] = false;
        }
    }
}
void Display::update() {
    for (int y = 0; y < MAX_HEIGHT; y++) {
        for (int x = 0; x < MAX_WIDTH; x++) {
            displayArray[x][y] = false;
        }
    }
    if (window != nullptr) {
        int minX, maxX, minY, maxY;
        minX = window->getXPos();
        minY = window->getYPos();
        maxX = minX + window->getWidth();
        maxY = minY + window->getHeight();
        for (int y = minY; y < maxY; y++) {
            for (int x = minX; x < maxX; x++) {
                displayArray[x][y] = true;
            }
        }
    }
}
void Display::draw() {
    std::cout << "\x1B[2J\x1B[H";
    for (int y = 0; y < MAX_HEIGHT; y++) {
        for (int x = 0; x < MAX_WIDTH; x++) {
            std::cout << (displayArray[x][y] == true ? 1 : 0);
        }
        std::cout << std::endl;
    }

}
void Display::setWindow(Window& win) {
    window = &win;
}

