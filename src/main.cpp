#include <iostream>
#include <string>
#include "window.h"
#include "display.h"

int main()
{
    std::string op;
    Display* display = new Display();
    Window* window = new Window();
    display->setWindow(*window);
    do {
        std::cout << "Enter command (move, resize, display, close): ";
        std::cin >> op;
        if (op == "move") {
            int dx = 0, dy = 0;
            std::cout << "Enter offset (dX, dY):" << std::endl;
            std::cin >> dx >> dy;
            window->move(dx, dy);
        }
        if (op == "resize") {
            int sx = 0, sy = 0;
            std::cout << "Enter size (width, height):" << std::endl;
            std::cin >> sx >> sy;
            window->resize(sx, sy);
        }
        if (op == "display") {
            display->update();
            display->draw();
        }
    } while (op != "close");
    delete display;
    delete window;
}
