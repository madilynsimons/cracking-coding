cmake_minimum_required (VERSION 3.9.1)
project (ArrayList)

set(SRC array_list.cc)
set(HASHTABLE_EXECUTABLE array_list.exe)
set(CMAKE_INSTALL_PREFIX /home/madilynsimons/Documents/cracking-coding/concepts/array-list)

add_executable(${HASHTABLE_EXECUTABLE} ${SRC})

install(TARGETS ${HASHTABLE_EXECUTABLE} DESTINATION bin)
