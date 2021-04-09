add_library(core core.cpp)

target_link_libraries(core
	msftgsl LoRa
)

target_include_directories(core PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})

add_subdirectory(external)
add_subdirectory(LoRa)
