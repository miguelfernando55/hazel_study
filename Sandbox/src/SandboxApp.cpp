#include <Hazel.h>

class Sandbox : public Hazel::Application
{
public:
	Sandbox();
	~Sandbox();

private:

};

Sandbox::Sandbox()
{
}

Sandbox::~Sandbox()
{
}

// To be defined in client.
Hazel::Application* Hazel::CreateApplication()
{
	return new Sandbox();
}