#pragma once
#include "ReadFile.h"

class WriteFile : public IWorker
{
public:
    void work(std::vector<std::string> params, std::string &text);
    size_t GetNumberOfParams() { return 1; };
    WriteFile() = default;
    BLOCK_TYPE GetBlockType() { return BLOCK_TYPE::OUTPUT; };
};