#include <iostream>

class Singleton
{
public:
	static Singleton& Get() 
	{ 
		static Singleton* s_Instance;
		return *s_Instance;
	}
	void Hello() { std::cout << "Hello" << std::endl; }

};

void Function1()
{
	static int i = 0;
	i++;
	std::cout << i << std::endl;
}

int main()
{
	Function1();
	Function1();
	Function1();
	Singleton::Get().Hello();
	std::cin.get();
}