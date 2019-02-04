#include <iostream>

class Log {
public:
	/*const int LogLevelError = 0;
	const int LogLevelWarning = 1;
	const int LogLevelInfo = 2;*/
	enum Level {
		LevelError, LevelWarning, LevelInfo
	};
private:
	Level m_LogLevel = LevelInfo;
public: 
	void SetLevel(Level level) {
		m_LogLevel = level;
	}

	void Error(const char* msg) {
		if(m_LogLevel >= LevelError)
			std::cout << "[ERROR]: " << msg << std::endl;
	}

	void Warn(const char* msg) {
		if (m_LogLevel >= LevelWarning)
			std::cout << "[WARNING]: " << msg << std::endl;
	}

	void Info(const char* msg) {
		if (m_LogLevel >= LevelInfo)
			std::cout << "[INFO]: " << msg << std::endl;
	}
};

int main() {
	Log log; 
	log.SetLevel(Log::LevelWarning);
	log.Warn("Hello");
	log.Error("Hello");
	log.Info("Hello");
	std::cin.get();
}