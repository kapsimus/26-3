#include <iostream>
#include "window.h"

constexpr int MAX_HEIGHT = 50;
constexpr int  MAX_WIDTH = 80;

Window::Window() {
    posX = 0;
    posY = 0;
    height = 10;
    width = 10;
}
void Window::setHeight(int h) {
    h = (h < 0) ? 0 : h;
    h = (h + posY > MAX_HEIGHT - 1) ? MAX_HEIGHT - 1 : h;
    height = h;
}
void Window::setWidth(int w) {
    w = (w < 0) ? 0 : w;
    w = (w + posY > MAX_WIDTH - 1) ? MAX_WIDTH - 1 : w;
    width = w;
}
void Window::setPosX(int x) {
    x = (x < 0) ? 0 : x;
    x = (x > MAX_WIDTH - 1) ? MAX_WIDTH - 1 : x;
    posX = x;
}
void Window::setPosY(int y) {
    y = (y < 0) ? 0 : y;
    y = (y > MAX_HEIGHT - 1) ? MAX_HEIGHT - 1 : y;
    posY = y;
}
int Window::getHeight() {
    return height;
}
int Window::getWidth() {
    return width;
}
int Window::getXPos() {
    return posX;
}
int Window::getYPos() {
    return posY;
}
void Window::move(int x, int y) {
    setPosX(posX + x);
    setPosY(posY + y);
    std::cout << "X = " << posX << ", Y = " << posY << std::endl;
}
void Window::resize(int w, int h) {
    setWidth(w);
    setHeight(h);
    std::cout << "Width = " << width << ", Height = " << height << std::endl;
}

