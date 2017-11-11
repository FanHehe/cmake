include_directories(${project_source_dir}/libhello)
set(app_src main.c)
add_executable(hello ${app_src})
target_link_libraries(hello libhello)
