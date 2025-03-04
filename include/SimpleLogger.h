#include <iostream>
#include <fstream>

class SimpleLogger
{
private:
public:
    char *filepath;
    SimpleLogger(char *filepath);
    ~SimpleLogger();
    void Log(char *data);
};
