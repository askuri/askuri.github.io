cmake_minimum_required(VERSION 3.10)
project(memtest)

set(CMAKE_CXX_STANDARD 17)

add_executable(memtest lib.cpp)

# linker flags
# enable embind with --bind flag
#set_target_properties(memtest PROPERTIES LINK_FLAGS "--bind --emrun -s ALLOW_MEMORY_GROWTH=1")
set_target_properties(memtest PROPERTIES LINK_FLAGS "--bind --emrun -s TOTAL_MEMORY=500MB")
