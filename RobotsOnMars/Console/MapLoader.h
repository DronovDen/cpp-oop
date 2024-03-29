#pragma once
#include "../World/Cell.h"
#include "../World/GameArea.h"
#include <fstream>

class MapLoader
{
public:
    MapLoader(std::string fileName);

    GameArea Load() const;

private:
    static CellType ConvertCellTypes(char symb);

    std::string mapFile;
};