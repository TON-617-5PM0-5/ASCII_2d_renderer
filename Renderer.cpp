#include "Renderer.h"

Vector2 Renderer::get_output_size() {
	return this->output_size;
}

void Renderer::update_output_size() {
	// Screen must be done.
}

DrawingQueue Renderer::get_sorted_drawing_queue() {
	DrawingQueue sorted_buffer = this->drawing_queue;
	std::sort(sorted_buffer.begin(), sorted_buffer.end(), [](IRenderable* a, IRenderable* b) { return a->get_z_index() > b->get_z_index();});
	return sorted_buffer;
}
// Draws everything you have put into drawing_queue
void Renderer::render() {
	DrawingQueue render_pipeline = this->get_sorted_drawing_queue(); // Yeah I know it is not a pipeline, but I like this name, what will you do?
	
	for (int index = 0; index < render_pipeline.size(); ++index) {
		IRenderable* rendered_item = render_pipeline.at(index);
		// Renderable is not ready, so I cannot do this one;
	}
	
}