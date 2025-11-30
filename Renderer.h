#pragma once

#include <vector>
#include "Vector2.h"
#include "IRenderable.h"
#include <algorithm>

typedef std::vector<IRenderable*> DrawingQueue;

class Renderer {
private:
	Vector2 output_size;
	char background_symbol;
	DrawingQueue drawing_queue;
	std::vector<char> buffer;

	void update_output_size();
	DrawingQueue get_sorted_drawing_queue();
public:
	Vector2 get_output_size();
	void render();
};