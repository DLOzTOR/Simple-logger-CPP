#include "SimpleLogger.h"

int main()
{
    std::cout << "is_runing" << std::endl;
    SimpleLogger *logger = new SimpleLogger("log.txt");
    std::cout << logger->filepath;
    logger->Log("someText\n");
    delete logger;
}