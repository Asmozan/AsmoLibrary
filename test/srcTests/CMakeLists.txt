file(GLOB SRCS *.cpp)

ADD_EXECUTABLE(runTests ${SRCS})

TARGET_LINK_LIBRARIES(runTests
    libsrc
    GTest::Main
)

add_test(NAME runTests
         COMMAND runTests)
