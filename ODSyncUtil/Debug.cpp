#include "Debug.hpp"



DebugClass& DebugClass::getInstance()
{
    static DebugClass instance;
    return instance;
}

void DebugClass::Write(const WCHAR* format, ...)
{
    SYSTEMTIME st;
    GetLocalTime(&st);
    WCHAR timestamp[100];
    swprintf(timestamp, 100, L"%04d-%02d-%02d %02d:%02d:%02d.%03d: ", st.wYear, st.wMonth, st.wDay, st.wHour, st.wMinute, st.wSecond, st.wMilliseconds);

    va_list args;
    va_start(args, format);
    WCHAR buffer[4096];
    vswprintf(buffer, sizeof(buffer), format, args);
    va_end(args);

    std::wstring message = std::wstring(timestamp) + buffer;

    if (isToStdOutput)
    {
        wprintf(L"%s", message.c_str());
    }
    else
    {
        OutputDebugStringW(message.c_str());
    }
}

DebugClass::DebugClass() : isToStdOutput(false),
    ignoreQuota(false) {}
