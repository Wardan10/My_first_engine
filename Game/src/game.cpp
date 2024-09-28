#include<game_engine.h>

class test :public Engine::Application
{
public:
	test()
	{

	}
	~test()
	{

	}
};

Engine::Application* Engine::CreateApplication()
{
	return new test;
}