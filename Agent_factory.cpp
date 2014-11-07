#include "Agent_factory.h"
#include "Geometry.h"
#include "Soldier.h"
#include "Peasant.h"
#include "Utility.h"

using std::string;

const string soldier_name_c = "Soldier";
const string peasant_name_c = "Peasant";

Agent* create_agent(const string& name, const string& type,
                    Point location)
{
    if(type == soldier_name_c) {
        return new Soldier(name, location);
    }
    else if(type == peasant_name_c) {
        return new Peasant(name, location);
    }
    else {
        throw Error("Trying to create agent of unknown type!");
    }
}