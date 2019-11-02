cmake_minimum_required(VERSION 3.10)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_EXTENSIONS OFF)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set_property(GLOBAL PROPERTY USE_FOLDERS ON)

project(gh-actions)

######################
# warnings
if(MSVC)
    set(MY_WARNING_FLAGS "") # the default is fine here
else()
    set(MY_WARNING_FLAGS "-Wall -Wextra -Wno-unused-variable")
endif()

######################
# sanitizers
option(SAN_THREAD "Sanitize thread" OFF)

set(MY_SAN_FLAGS "")

if (SAN_THREAD)
    if(MSVC)
        set(MY_SAN_FLAGS "") # todo
    else()
        set(MY_SAN_FLAGS "-fno-omit-frame-pointer -fsanitize=thread")
    endif()
endif()

######################
# flags
set(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} ${MY_SAN_FLAGS} ${MY_WARNING_FLAGS}")
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} ${MY_SAN_FLAGS} ${MY_WARNING_FLAGS}")


######################
# subdirectories
add_subdirectory(code)

enable_testing()
add_subdirectory(test)
