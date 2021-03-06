#pragma once

#include "resource.h"
#include "tinyxml2.h"

BOOL system_hide(const TCHAR* _appName, TCHAR* _CommandLine, BOOL _needWait = true);
void parsexml(const CHAR* _file);
bool initPipe(PHANDLE hReadPipe, PHANDLE hWritePipe, DWORD nSize);
void process0d0d0a(void);