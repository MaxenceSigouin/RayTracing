#pragma once

#include "Walnut/Image.h"

#include <memory>

class Renderer
{
public:
	Renderer() = default;

	void Render();
private:
	std::shared_ptr < Walnut::Image> m_Image;
};