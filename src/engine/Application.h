#pragma once
#include"core.h"

namespace Engine {
	class ENGINE_API Application
	{
	public:
		Application();
		~Application();
		void Run();
	};
	Application* CreateApplication();
}
