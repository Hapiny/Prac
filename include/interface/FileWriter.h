#pragma once
#include <string>

class FileWriter
{
public:
    FileWriter(std::string);
    void add_line(std::string) const;
private:
    std::string filename;
};