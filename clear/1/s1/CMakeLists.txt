aux_source_directory(. dir_srcs)
message(${dir_srcs})
add_executable(hello ${dir_srcs})
