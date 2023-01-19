#pragma once

#include "Walnut/Image.h"

#include <memory>

class Renderer
{
public:
	Renderer() = default;

	void OnResize(uint32_t width, uint32_t height);
	void Render();
private:
	std::shared_ptr < Walnut::Image> m_Image;
	uint32_t* m_ImageData = nullptr;
};