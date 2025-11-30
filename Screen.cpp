#include "Screen.h"

Screen::Screen() {
	this->handle_out = GetStdHandle(STD_OUTPUT_HANDLE);
}

Vector2 Screen::update_size() {
    return Vector2(this->size_x, this->size_y);
}

void Screen::repaint(IRenderable& image) {
    this->update_size();
    COORD bufferSize = { image.get_image().get_width(), image.get_image().get_height()};
    COORD bufferCoord = { 0, 0 };
    SMALL_RECT writeRegion = { 0, 0, image.get_image().get_width() - 1, image.get_image().get_height() - 1 };

    DWORD written;

    // Write entire console screen at once
    WriteConsoleOutputCharacterA(
        this->handle_out,
        image.get_image(),
        image.get_image().get_characters_amount(),
        bufferCoord,
        &written
    );
}