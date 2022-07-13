#pragma once

class Window {
    int height;
    int width;
    int posX;
    int posY;

public:
    Window();
    void setHeight(int h);
    void setWidth(int w);
    void setPosX(int x);
    void setPosY(int y);
    int getHeight();
    int getWidth();
    int getXPos();
    int getYPos();
    void move(int x, int y);
    void resize(int w, int h);
};
