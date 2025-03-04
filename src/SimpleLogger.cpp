#include "SimpleLogger.h"
SimpleLogger::SimpleLogger(char *filepath)
{
    this->filepath = filepath;
    std::filesystem::create_directories(std::filesystem::path(filepath).parent_path());
}

SimpleLogger::~SimpleLogger()
{
    delete filepath;
}

void SimpleLogger::Log(char *data)
{
    std::ofstream fileStream(filepath, std::fstream::app);
    fileStream << data << "\n";
    fileStream.close();
}