add_library(mylib
    mylib/sum.hpp
    mylib/sum.cpp
)

target_include_directories(mylib
    INTERFACE
        .
)
