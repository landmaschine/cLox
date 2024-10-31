#pragma once

#include "object.h"
#include "vm.h"
#include "chunk.h"

bool compile(const char* source, Chunk* chunk);