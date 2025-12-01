#include <iostream>
#include <algorithm>
#include "Game.h"
#include "Screen.h"
#include "IRenderable.h"
#include "Charimg.h"
#include "RenderedImage.h"
#include "Vector2.h"
#include <memory> 

int globx = 0;
char mod = 25;
char dir = 1;
char adder = 49;
char dira = 1;

static char gener1() {
    return (globx++ % mod) + adder;
}

int main()
{

    std::vector<char> x1(120 * 30);

    Vector2 Sizes{ 120,30 };
    Screen MyScreen;
    
    while (true) {
        std::generate(x1.begin(), x1.end(), gener1);

        Charimg picture (Sizes, x1);
        RenderedImage ResultImage (picture);

        MyScreen.repaint(ResultImage);
        Sleep(100);
        globx++;
        if (mod > 35) {
            dir = -1;
        }
        else if (mod < 25) {
            dir = 1;
        }
        if (adder > 63) {
            dira = -1;
        }
        else if (adder < 32) {
            dira = 1;
        }
        adder += dira;
        mod += dir;

    }
    return 0;
}
