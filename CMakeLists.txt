cmake_minimum_required(VERSION 3.1)

project(lvgl_fb)

include_directories(. ${PROJECT_SOURCE_DIR}/squareline/ ${PROJECT_SOURCE_DIR}/squareline2/ ${PROJECT_SOURCE_DIR}/ui/)
add_subdirectory(lvgl)
add_subdirectory(lv_drivers)

add_definitions(-DEMULINUX)

file(GLOB_RECURSE UI_SOURCES ./ui/*.c)
file(GLOB_RECURSE UI_GEN_SOURCES ./squareline/*.c ./squareline2/*.c)

add_executable(${PROJECT_NAME} main.c mouse_cursor_icon.c ${UI_SOURCES} ${UI_GEN_SOURCES} )
# target_link_libraries(${PROJECT_NAME} PRIVATE lvgl lvgl::examples lvgl::demos lvgl::drivers)
target_link_libraries(${PROJECT_NAME})
