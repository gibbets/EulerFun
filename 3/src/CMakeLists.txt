set(BINARY Euler_3)

set(CMAKE_ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib)
set(CMAKE_LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib)
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin)

add_executable(${BINARY}_run 
    primefactor.h
    primefactor.cpp
    main.cpp
)

add_library(${BINARY}_lib STATIC 
    primefactor.h
    primefactor.cpp
)
