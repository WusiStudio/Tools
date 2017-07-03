cmake_minimum_required(VERSION 3.9.0)

project(ToolsTest)

add_executable(uuid_test uuid/uuid_test.cpp)
add_executable(strExt_test strExt/strExt_test.cpp)
add_executable(log_test log/log_test.cpp)

#输出路径
set(EXECUTABLE_OUTPUT_PATH ${CMAKE_SOURCE_DIR}/build/bin)



#设置编译选项-------------------------------------------
IF(WIN32)
    # DEBUG RELEASE
    SET(CMAKE_CXX_FLAGS_DEBUG "$ENV{CXXFLAGS} -std=c++11 -Wall")
    SET(CMAKE_CXX_FLAGS_RELEASE "$ENV{CXXFLAGS} -std=c++11 -Wall")

ELSEIF(APPLE)
    SET(CMAKE_CXX_FLAGS_DEBUG "$ENV{CXXFLAGS} -m64 -std=c++11 -O0 -Wall -g")
    SET(CMAKE_CXX_FLAGS_RELEASE "$ENV{CXXFLAGS} -m64 -std=c++11 -O3 -Wall")

ELSEIF(UNIX)
    target_link_libraries(uuid_test uuid)
    target_link_libraries(strExt_test uuid)
    target_link_libraries(log_test uuid)
    SET(CMAKE_CXX_FLAGS_DEBUG "$ENV{CXXFLAGS} -m64 -std=c++11 -O0 -Wall -g")
    SET(CMAKE_CXX_FLAGS_RELEASE "$ENV{CXXFLAGS} -m64 -std=c++11 -O3 -Wall")
ENDIF()