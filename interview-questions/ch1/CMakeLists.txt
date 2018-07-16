cmake_minimum_required (VERSION 3.9.1)
project (Chapter1)

set(CMAKE_INSTALL_PREFIX /home/madilynsimons/Documents/cracking-coding/interview-questions/ch1)

add_executable(is_unique.exe is_unique.cc)
add_executable(check_permutation.exe check_permutation.cc)
add_executable(urlify.exe urlify.cc)

set(EXECUTABLES is_unique.exe
                check_permutation.exe
                urlify.exe)

install(TARGETS ${EXECUTABLES} DESTINATION bin)
