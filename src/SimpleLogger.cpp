#include "SimpleLogger.h"
SimpleLogger::SimpleLogger(char *filepath)
{
    this->filepath = filepath;
    std::filesystem::path parent = std::filesystem::path(filepath).parent_path();
    if (!parent.empty())
    {
        std::filesystem::create_directories(parent);
    }
}

SimpleLogger::~SimpleLogger()
{
    delete filepath;
}

void SimpleLogger::Log(const char *data)
{
    std::ofstream fileStream(filepath, std::fstream::app);
    fileStream << data << "\n";
    fileStream.close();
}