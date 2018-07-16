cmake_minimum_required (VERSION 3.9.1)
project (Chapter1)

set(CMAKE_INSTALL_PREFIX /home/madilynsimons/Documents/cracking-coding/interview-questions/ch1)

add_executable(is_unique.exe is_unique.cc)

install(TARGETS is_unique.exe DESTINATION bin)
