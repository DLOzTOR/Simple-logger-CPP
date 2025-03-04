#include <iostream>
#include <fstream>
#include <filesystem>

class SimpleLogger
{
private:
public:
    char *filepath;
    SimpleLogger(char *filepath);
    ~SimpleLogger();
    void Log(char *data);
};
