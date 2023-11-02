
#
# Project setup
#

cmake_minimum_required(VERSION 3.10)

project(kiraz-hw1)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS ON)

if (CMAKE_CXX_COMPILER_ID STREQUAL "GNU")
    set(IS_CC_GCC TRUE)

elseif(CMAKE_CXX_COMPILER_ID STREQUAL "Clang" AND "${CMAKE_CXX_SIMULATE_ID}" STREQUAL "MSVC")
    set(IS_CC_CLANG TRUE)
    set(IS_CC_CLANG_CL TRUE)

elseif(CMAKE_CXX_COMPILER_ID STREQUAL "AppleClang")
    set(IS_CC_CLANG TRUE)
    set(IS_CC_CLANG_APPLE TRUE)

elseif(CMAKE_CXX_COMPILER_ID STREQUAL "Clang")
    set(IS_CC_CLANG TRUE)

elseif("${CMAKE_CXX_COMPILER_ID}" STREQUAL "MSVC")
    set(IS_CC_MSVC TRUE)

else()
    message(FATAL_ERROR "Unrecognized compiler ${CMAKE_CXX_COMPILER_ID}")

endif()

add_compile_options(
    -Werror=return-type
    -Werror=non-virtual-dtor
    -Werror=suggest-override
)

if (IS_CC_GCC)
    add_compile_options(
        -Werror=return-local-addr
    )

elseif(IS_CC_CLANG)
    add_compile_options(
        -Werror=return-stack-address
    )

endif()


#
# Flex/Bison boilerplate
#

find_package(BISON REQUIRED)
find_package(FLEX REQUIRED)

if (WIN32)
    set (ADDITIONAL_FLEX_FLAGS "--wincompat")
else()
    set (ADDITIONAL_FLEX_FLAGS "")
endif()

#
# Common Code
#

# Own files
include_directories(${CMAKE_CURRENT_SOURCE_DIR})

add_library(kiraz STATIC
    fmt/chrono.h
    fmt/core.h
    fmt/format.cc
    fmt/std.h
    fmt/printf.h
    fmt/format-inl.h
    fmt/ostream.h
    fmt/ranges.h
    fmt/xchar.h
    fmt/color.h
    fmt/format.h
    fmt/compile.h
    fmt/args.h
    fmt/os.cc
    fmt/os.h

    # TODO: Add your token classes here

    kiraz/token/Base.cc
    kiraz/token/Base.h

    kiraz/token.h
)

include(test.cmake)

# Generated files
file(MAKE_DIRECTORY ${CMAKE_CURRENT_BINARY_DIR}/gen/include/kiraz/lexer)
include_directories(${CMAKE_CURRENT_BINARY_DIR}/gen/include)

#
# Homework 1
#

FLEX_TARGET(HW1
    ${CMAKE_CURRENT_SOURCE_DIR}/hw1.l
    ${CMAKE_CURRENT_BINARY_DIR}/gen/hw1-lexer.cc
    DEFINES_FILE ${CMAKE_CURRENT_BINARY_DIR}/gen/include/kiraz/lexer/hw1.hpp
    COMPILE_FLAGS ${ADDITIONAL_FLEX_FLAGS}
)

# no bison target
#ADD_FLEX_BISON_DEPENDENCY(HW1_FLEX HW1_BISON)

add_executable(hw1 hw1.cc ${FLEX_HW1_OUTPUTS})
target_link_libraries(hw1 PUBLIC kiraz ${FLEX_LIBRARIES})
