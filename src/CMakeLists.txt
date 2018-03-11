set(libsrc_SRCS
        Example.hpp
        Example.cpp
        print.hpp sort.hpp)

# Declare the library
add_library(libsrc STATIC
    ${libsrc_SRCS}
)

# Specify here the include directories exported
# by this library
target_include_directories(libsrc PUBLIC
    ${CMAKE_CURRENT_SOURCE_DIR}
)
