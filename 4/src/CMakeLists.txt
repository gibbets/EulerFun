set(BINARY Euler_4)

set(CMAKE_ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib)
set(CMAKE_LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib)
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin)

add_executable(${BINARY}_run 
    lpp.h
    lpp.cpp
    main.cpp
)

add_library(${BINARY}_lib STATIC 
    lpp.h
    lpp.cpp
)
