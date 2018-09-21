cmake_minimum_required (VERSION 2.8)

include_directories(SYSTEM
    ./
)
include_directories (
json/include
)

# if(CMAKE_COMPILER_IS_GNUCXX)
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11 -fsanitize=address -O1 -Wall -Wextra -Wno-unused-command-line-argument -Wshadow -Wnon-virtual-dtor -pedantic")
# endif(CMAKE_COMPILER_IS_GNUCXX)

# enum your files
add_executable(executable
  main.cpp
)


