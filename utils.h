#pragma once
#ifndef UTILS_H
#define UTILS_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

#define _USE_MATH_DEFINES
#include <tgmath.h>
#include <windows.h>

#define UTF() SetConsoleOutputCP(CP_UTF8); SetConsoleCP(CP_UTF8)

#define length(array) sizeof(array)/sizeof(array[0])
#endif