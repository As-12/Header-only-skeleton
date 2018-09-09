set(BENCHMARK_ENABLE_TESTING OFF CACHE BOOL "Suppressing benchmark's tests" FORCE)

add_subdirectory(benchmark)
include_directories(benchmark/include)

set(SOURCE
  bench-1.cpp
)

add_executable(run-benchmark ${SOURCE})

target_link_libraries(run-benchmark
  benchmark
  lib::myLibrary
)
