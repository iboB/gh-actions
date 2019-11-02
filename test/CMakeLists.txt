add_executable(test-sum t-sum.cpp)
target_link_libraries(test-sum mylib)
set_target_properties(test-sum PROPERTIES FOLDER test)
add_test(NAME sum COMMAND $<TARGET_FILE:test-sum>)
