#include "FileController.h"

FileController::FileController(std::string filename)
    : writer(std::shared_ptr<FileWriter>(new FileWriter(filename))) {}

void FileController::add_atribute(std::string new_atr) const
{
    writer->add_line(new_atr + " ");
}