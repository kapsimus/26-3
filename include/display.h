#pragma once
#include "window.h"

constexpr int MAX_HEIGHT = 50;
constexpr int  MAX_WIDTH = 80;

class Display {
    bool displayArray[MAX_WIDTH][MAX_HEIGHT];
    Window* window;
public:
    Display();
    void init();
    void update();
    void draw();
    void setWindow(Window& win);
};
