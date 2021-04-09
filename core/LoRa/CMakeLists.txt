

add_compile_options("-Wno-error=restrict")

add_library(LoRa LoRa.cpp Print.cpp Stream.cpp WString.cpp)
target_include_directories(LoRa PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})
target_include_directories(LoRa PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/..)
