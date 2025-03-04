#include "SimpleLogger.h"

SimpleLogger::SimpleLogger(char *filepath)
{
    this->filepath = filepath;
}

SimpleLogger::~SimpleLogger()
{
    delete filepath;
}

void SimpleLogger::Log(char *data)
{
    std::ofstream fileStream(filepath, std::fstream::app);
    fileStream << data << std::endl;
    fileStream.close();
}