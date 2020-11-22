cmake_minimum_required(VERSION 3.17)
project(2D_Transformation)

set(CMAKE_CXX_STANDARD 14)

add_executable(${PROJECT_NAME} main.cpp stroke.cpp stroke.h util.h shape/shape.h shape/persegi.cpp shape/belahKetupat.cpp shape/jajarGenjang.cpp util.cpp util.h transformation/transformation.h transformation/rotasi.cpp shape/shape.cpp shape/trapesium.cpp shape/segitiga.cpp shape/lingkaran.cpp karya/karya.cpp karya/karya.h karya/bunga.cpp)
target_link_libraries(${PROJECT_NAME} Xbgi X11 m)
target_compile_options(${PROJECT_NAME} PRIVATE -Wno-everything)