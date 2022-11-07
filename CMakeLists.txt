cmake_minimum_required(VERSION 3.1)

project(lvgl_fb)

include_directories(. ./ui ./squareline)
add_subdirectory(lvgl)
add_subdirectory(lv_drivers)

file(GLOB_RECURSE UI_SOURCES ./ui/*.c)
file(GLOB_RECURSE UI_GEN_SOURCES ./squareline/*.c)

add_executable(${PROJECT_NAME} main.c mouse_cursor_icon.c ${UI_SOURCES} ${UI_GEN_SOURCES} )
target_link_libraries(${PROJECT_NAME} PRIVATE lvgl lvgl::examples lvgl::demos lvgl::drivers)
