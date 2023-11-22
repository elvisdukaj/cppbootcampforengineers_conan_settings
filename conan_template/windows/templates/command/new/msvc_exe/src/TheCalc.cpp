#include "{{ name }}.hpp"
#include <print>

void {{ name }}() {

#ifdef NDEBUG
  std::println("{{ name }}/{{ version}}: Hello World Release!");
#else
  std::println("{{ name }}/{{ version}}: Hello World Debug!");
#endif

// ARCHITECTURES
#ifdef _M_X64
  std::println("  {{ name }}/{{ version}}: _M_X64 defined");
#endif

#ifdef _M_IX86
  std::println("  {{ name }}/{{ version}}: _M_IX86 defined");
#endif

#ifdef _M_ARM64
  std::println("  {{ name }}/{{ version}}: _M_ARM64 defined");
#endif

#if __i386__
  std::println("  {{ name }}/{{ version}}: __i386__ defined");
#endif

#if __x86_64__
  std::println("  {{ name }}/{{ version}}: __x86_64__ defined";
#endif

#if __aarch64__
  std::println("  {{ name }}/{{ version}}: __aarch64__ defined");
#endif

// Libstdc++
#if defined _GLIBCXX_USE_CXX11_ABI
  std::println("  {{ name }}/{{ version}}: _GLIBCXX_USE_CXX11_ABI {}", _GLIBCXX_USE_CXX11_ABI);
#endif

// MSVC runtime
#if defined(_DEBUG)
#if defined(_MT) && defined(_DLL)
  std::println("  {{ name }}/{{ version}}: MSVC runtime: MultiThreadedDebugDLL");
#elif defined(_MT)
  std::println("  {{ name }}/{{ version}}: MSVC runtime: MultiThreadedDebug");
#endif
#else
#if defined(_MT) && defined(_DLL)
  std::println("  {{ name }}/{{ version}}: MSVC runtime: MultiThreadedDLL");
#elif defined(_MT)
  std::println("  {{ name }}/{{ version}}: MSVC runtime: MultiThreaded");
#endif
#endif

// COMPILER VERSIONS
#if _MSC_VER
  std::println("  {{ name }}/{{ version}}: _MSC_VER{}", _MSC_VER);
#endif

#if _MSVC_LANG
  std::println("  {{ name }}/{{ version}}: _MSVC_LANG{}", _MSVC_LANG);
#endif

#if __cplusplus
  std::println("  {{ name }}/{{ version}}: __cplusplus{}", __cplusplus);
#endif

#if __INTEL_COMPILER
  std::println("  {{ name }}/{{ version}}: __INTEL_COMPILER{}", __INTEL_COMPILER);
#endif

#if __GNUC__
  std::println("  {{ name }}/{{ version}}: __GNUC__{}", __GNUC__);
#endif

#if __GNUC_MINOR__
  std::println("  {{ name }}/{{ version}}: __GNUC_MINOR__{}", __GNUC_MINOR__);
#endif

#if __clang_major__
  std::println("  {{ name }}/{{ version}}: __clang_major__{}", __clang_major__);
#endif

#if __clang_minor__
  std::println("  {{ name }}/{{ version}}: __clang_minor__{}", __clang_minor__);
#endif

#if __apple_build_version__
  std::println("  {{ name }}/{{ version}}: __apple_build_version__{}", __apple_build_version__);
#endif

  // SUBSYSTEMS

#if __MSYS__
  std::println("  {{ name }}/{{ version}}: __MSYS__{}", __MSYS__);
#endif

#if __MINGW32__
  std::println("  {{ name }}/{{ version}}: __MINGW32__{}", __MINGW32__);
#endif

#if __MINGW64__
  std::println("  {{ name }}/{{ version}}: __MINGW64__{}", __MINGW64__);
#endif

#if __CYGWIN__
  std::println("  {{ name }}/{{ version}}: __CYGWIN__{}", __CYGWIN__);
#endif
}

void {{ name }}_print_vector(const std::vector<std::string> &strings) {
  for (const auto& str : strings) {
    std::println("{{ name }}/{{ version}} {}", str);
  }
}
