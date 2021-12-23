#pragma once
#include "AutoMode.h"
#include "../Robot/Collector.h"
#include "../Robot/Sapper.h"

class AutoGrab : public AutoMode
{
public:
    AutoGrab() = default;
    ~AutoGrab() = default;
    //void GetPath(vector<Coordinates>& path, Robot* robot, const Coordinates& coord);
    //void ImplenmentPath(vector<Coordinates>& path, Robot* robot);
    bool Execute(Robot* robot);
    bool Step(Robot* robot);
    void ImplementPath(Robot *robot, const std::deque<Direction> &path);
    void Defuse(Robot *robot); //sapper picks up bombs
    void Collect(Robot *robot); //collector picks up diamonds
    //virtual void RenderPath() override;
};
