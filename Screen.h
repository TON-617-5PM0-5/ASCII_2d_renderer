#pragma once

#include "Vector2.h"
#include "IRenderable.h"
#include <windows.h>
#include <memory>

class Screen
{
private:
	HANDLE handle_out;
	Vector2 cached_screen_size;
	std::unique_ptr<IRenderable> rendered_image;

public:
	void repaint(std::unique_ptr<IRenderable> image);
	void repaint();
	Vector2 update_size();
	Screen();
};

