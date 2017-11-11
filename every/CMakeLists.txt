project(hello)

add_executable (hello main.cpp)
add_library(foo SHARED foo.cpp)
target_link_libraries(hello foo)
set_target_properties (hello PROPERTIES OUTPUT_NAME "foo")
