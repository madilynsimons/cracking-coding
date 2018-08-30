cmake_minimum_required (VERSION 3.9.1)
project (Chapter1)

set(CMAKE_INSTALL_PREFIX /home/madilynsimons/Documents/cracking-coding/interview-questions/ch1)

add_executable(is_unique.exe is_unique.cc)
add_executable(check_permutation.exe check_permutation.cc)
add_executable(urlify.exe urlify.cc)
add_executable(palindrome_permutation.exe palindrome_permutation.cc)
add_executable(one_away.exe one_away.cc)
add_executable(matrix_rotate.exe matrix_rotate.cc)

set(EXECUTABLES is_unique.exe
                check_permutation.exe
                urlify.exe
                palindrome_permutation.exe
                one_away.exe
                matrix_rotate.exe)

install(TARGETS ${EXECUTABLES} DESTINATION bin)
