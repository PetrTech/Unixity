#pragma once

#ifdef UX_PLATFORM_WINDOWS

extern Unixity::Application* Unixity::CreateApplication();

	int main(int argc, char** argv)
	{
		auto app = Unixity::CreateApplication();
		app->Run();
		delete app;
	}
#endif
