cmake_minimum_required(VERSION 3.9.0)

project(ToolsTest)

add_executable(uuid_test uuid/uuid_test.cpp)

#输出路径
set(EXECUTABLE_OUTPUT_PATH ${PROJECT_ROOT_DIR}/../build/bin)

# #设置编译选项-------------------------------------------
# IF(WIN32)
#     # DEBUG RELEASE
#     SET(CMAKE_CXX_FLAGS_DEBUG "$ENV{CXXFLAGS} -std=c++11 -Wall")
#     SET(CMAKE_CXX_FLAGS_RELEASE "$ENV{CXXFLAGS} -std=c++11 -Wall")

# ELSEIF(APPLE)
#     SET(CMAKE_CXX_FLAGS_DEBUG "$ENV{CXXFLAGS} -m64 -std=c++11 -O0 -Wall -g")
#     SET(CMAKE_CXX_FLAGS_RELEASE "$ENV{CXXFLAGS} -m64 -std=c++11 -O3 -Wall")

# ELSEIF(UNIX)
#     SET(CMAKE_CXX_FLAGS_DEBUG "$ENV{CXXFLAGS} -m64 -std=c++11 -O0 -Wall -g")
#     SET(CMAKE_CXX_FLAGS_RELEASE "$ENV{CXXFLAGS} -m64 -std=c++11 -O3 -Wall")
# ENDIF()