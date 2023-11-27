#include <fmt/core.h>
#include <string>

int main() {
#if defined(NDEBUG)
  const auto buildType = "Release";
#else
  const auto buildType = "Debug";
#endif

  fmt::println("Hello {}/{} {}", "{{ name }}", "{{ version }}", buildType);
  return 0;
}
