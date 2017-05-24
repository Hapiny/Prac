#pragma once
#include "FileController.h"

class AdminInterface
{
public:
    void add_document() const;
private:
    FileController file_ctrl;
};