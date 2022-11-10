#include <iostream>

class Log
{
public:
	const int LogLevelError = 0;
	const int LogLevelWarning = 1;
	const int LogLevelInfo = 2;
private:
	int m_LogLevel = LogLevelInfo;
public:
	void SetLevel(int level)
	{
		m_LogLevel = level;
	}

	void Info(const char* message)
	{
		if (m_LogLevel >= LogLevelInfo)
			std::cout << "[Info]£º" << message << std::endl;
	}

	void Warn(const char* message)
	{
		if (m_LogLevel >= LogLevelWarning)
			std::cout << "[WARNING]£º" << message << std::endl;
	}

	void Error(const char* message)
	{
		if(m_LogLevel >= LogLevelError)
			std::cout << "[Error]£º" << message << std::endl;
	}
};

int main() 
{
	Log log;
	log.SetLevel(log.LogLevelWarning);
	log.Warn("Hello!");
	log.Error("Hello!");
	log.Info("Hello!");
	std::cin.get();
	return 0;
}