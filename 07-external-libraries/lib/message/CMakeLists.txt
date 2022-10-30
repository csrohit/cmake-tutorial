add_library(message "")

target_sources(message
    PRIVATE
        ${CMAKE_CURRENT_LIST_DIR}/Message.cpp
    PUBLIC
        ${CMAKE_CURRENT_LIST_DIR}/Message.hpp
)

target_include_directories(message
    PUBLIC
        ${CMAKE_CURRENT_LIST_DIR}
)




