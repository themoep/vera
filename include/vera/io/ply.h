#pragma once

#include "vera/scene.h"

namespace vera {

bool loadPLY(const std::string& _filename, Scene* _scene, bool _verbose);

}