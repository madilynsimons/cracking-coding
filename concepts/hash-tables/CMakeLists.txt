cmake_minimum_required (VERSION 3.9.1)
project (HashTable)

set(SRC hash_table.cc)
set(HASHTABLE_EXECUTABLE hash_table.exe)
set(CMAKE_INSTALL_PREFIX /home/madilynsimons/Documents/cracking-coding/concepts/hash-tables)

add_executable(${HASHTABLE_EXECUTABLE} ${SRC})

install(TARGETS ${HASHTABLE_EXECUTABLE} DESTINATION bin)
