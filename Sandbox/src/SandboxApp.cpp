#include "Unixity.h"

class Sandbox : public Unixity::Application
{
public:
	Sandbox()
	{

	}

	~Sandbox()
	{

	}
};

Unixity::Application* Unixity::CreateApplication()
{
	return new Sandbox();
}