#pragma once

#include <string>
#include <vector>

#ifdef _WIN32
#define {{ name }}_EXPORT __declspec(dllexport)
#else
#define {{ name }}_EXPORT
#endif

{{ name }}_EXPORT void {{ name }}();

{{ name }}_EXPORT
void {{ name }}_print_vector(const std::vector<std::string>& strings);
