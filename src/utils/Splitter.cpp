#include "Splitter.h"

#include <iostream>

Splitter::Splitter(char splitter) : splitter(splitter) {}

std::vector<std::string> Splitter::split(const std::string & str) const {
    std::vector<std::string> res;
    size_t pos = 0;
    size_t find = 0;
    std::string tmp;
    while ( (find = str.find(splitter, pos)) != std::string::npos) {
    	tmp = str.substr(pos, find - pos);
        if (!tmp.empty()) res.push_back(tmp);
        pos = find + 1;
    }
    tmp = str.substr(pos);
    if (!tmp.empty()) res.push_back(tmp);

    return res;
}