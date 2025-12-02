module;

// This crashes the compiler:
#include "Foo.h"

// This does not (at least not in the ~5000 builds that I did):
// #include <hyprland/src/managers/KeybindManager.hpp>

export module example;
