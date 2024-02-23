#ifndef DEBUG_HPP
#define DEBUG_HPP

#include <cstdarg>
#include <cwchar>
#include <windows.h>
#include <string>

class DebugClass
{
public:
    static DebugClass& getInstance();

    void Write(const WCHAR* format, ...);

    bool isToStdOutput;
    bool ignoreQuota;

private:
    DebugClass();
    DebugClass(const DebugClass&) = delete;
    DebugClass& operator=(const DebugClass&) = delete;
};

#define Debug DebugClass::getInstance()

#endif // DEBUG_HPP
