#pragma once

#ifdef HZ_PLATFORM_WINDOWS

extern Hazel::Application* Hazel::CreateApplication();

int main(int argc, char** argv)
{
	Hazel::Log::Init();
	HZ_CORE_WARN("Initialized level");
	int a = 5;
	HZ_INFO("Variable a = {0}", a);


	auto app = Hazel::CreateApplication();
	app->Run();
	delete app;
}
#endif