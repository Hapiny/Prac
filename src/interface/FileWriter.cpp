#include "FileWriter.h"
#include <iostream>
#include <fstream>

FileWriter::FileWriter(std::string filename) 
    : filename(filename) {}

void FileWriter::add_line(std::string str) const
{
    std::ofstream out(filename,std::ios::out|std::ios::app);
    out << str;
}