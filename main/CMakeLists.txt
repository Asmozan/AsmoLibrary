set(Main_SRCS
    main.cpp
)

add_executable(ASMLibrary
    ${Main_SRCS}
)

# Specify here the libraries this program depends on
target_link_libraries(ASMLibrary
    libsrc
)

install(TARGETS ASMLibrary DESTINATION bin)
