#include "SimpleLogger.h"

int main()
{
    std::cout << "is_runing" << std::endl;
    SimpleLogger *logger = new SimpleLogger("logs/log.txt");
    SimpleLogger *logger1 = new SimpleLogger("log.txt");
    std::cout << logger->filepath;
    logger->Log("someText");
    logger1->Log("someText");

    delete logger;
}