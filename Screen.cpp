#include "Screen.h"

Screen::Screen() {
	this->handle_out = GetStdHandle(STD_OUTPUT_HANDLE);
}

Vector2 Screen::update_size() {
    return Vector2(this->size_x, this->size_y);
}

void Screen::repaint(std::unique_ptr<IRenderable> image) {
    COORD bufferSize = { image.get()->get_image().get_width(), image.get()->get_image().get_height()};
    COORD bufferCoord = { 0, 0 };
    SMALL_RECT writeRegion = { 0, 0, image.get()->get_image().get_width() - 1, image.get()->get_image().get_height() - 1 };

    DWORD written;

    // Write entire console screen at once
    WriteConsoleOutputCharacterA(
        this->handle_out,
        image.get()->get_image(),
        image.get()->get_image().get_characters_amount(),
        bufferCoord,
        &written
    );
}