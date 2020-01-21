#pragma once

#include "core.h"

namespace Unixity {
	class UNIXITY_API Application
	{
	public:
		Application();
		virtual ~Application();

		void Run();
	};


	Application* CreateApplication();

}

