#pragma once
#pragma comment(lib, "littlehooker.lib")
#include <littlehooker/littlehooker.h>
#include <time.h>
#include "cpp_string.h"
#include "logger.h"
#include "mc/network.h"
#include "mc/actor.h"
#include "mc/level.h"
#include "mc/db_storage.h"

bool init_hooks(void);
