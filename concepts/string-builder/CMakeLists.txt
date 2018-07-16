cmake_minimum_required (VERSION 3.9.1)
project (StringBuilder)

set(SRC string_builder.cc)
set(HASHTABLE_EXECUTABLE string_builder.exe)
set(CMAKE_INSTALL_PREFIX /home/madilynsimons/Documents/cracking-coding/concepts/string-builder)

add_executable(${HASHTABLE_EXECUTABLE} ${SRC})

install(TARGETS ${HASHTABLE_EXECUTABLE} DESTINATION bin)
