#include "Renderer.h"

#include "Walnut/Random.h"

void Renderer::OnResize(uint32_t width, uint32_t height)
{
	if (m_Image)
	{
		if (m_Image->GetWidth() == width && m_Image->GetHeight() == height) return;

		m_Image->Resize(width, height);
	}
	else
	{
		m_Image = std::make_shared<Walnut::Image>(width, height, Walnut::ImageFormat::RGBA);
	}

	delete[] m_ImageData;
	m_ImageData = new uint32_t[width * height];
}

void Renderer::Render()
{


	for (uint32_t i = 0; i < m_Image->GetWidth() * m_Image->GetHeight(); i++)
	{
		m_ImageData[i] = Walnut::Random::UInt();
		m_ImageData[i] |= 0xff000000;
	}

	m_Image->SetData(m_ImageData);
}
