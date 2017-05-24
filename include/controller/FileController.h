#pragma once
#include "FileWriter.h"
#include <memory>

class FileController
{
public:
    FileController(std::string = "doc_types.txt");
    void add_atribute(std::string) const;
private:
    std::shared_ptr<FileWriter> writer;
};