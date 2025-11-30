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

static char gener1() {
    return (globx++ % 25) + 49;
}

int main()
{

    std::vector<char> x1(120 * 30);

    Vector2 Sizes{ 120,30 };
    Screen MyScreen;
    
    while (true) {
        std::generate(x1.begin(), x1.end(), gener1);

        //Charimg* picture = new Charimg(Sizes, x1);
        //IRenderable* ResultImage = new RenderedImage(*picture);

        Charimg picture (Sizes, x1);
        RenderedImage ResultImage (picture);

        MyScreen.repaint(ResultImage);
        Sleep(10);
        globx++;
    }
    return 0;
}
