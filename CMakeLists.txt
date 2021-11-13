cmake_minimum_required(VERSION 3.20)
project(OPVjezbe)

set(CMAKE_CXX_STANDARD 14)

include_directories(vjezba2, vjezba3)

add_executable(OPVjezbe
        vjezba1/vjezba1_zad1_antonio_sabic.cpp
        vjezba1/vjezba1_zad2_antonio_sabic.cpp
        vjezba1/vjezba1_zad3_antonio_sabic.cpp
        vjezba1/vjezba1_zad4_antonio_sabic.cpp
        vjezba2/vector.cpp
        vjezba2/vector.hpp
        vjezba2/zad1.cpp
        vjezba2/zad2.cpp
        vjezba2/zad3.cpp
        vjezba2/zad4.cpp
        vjezba3/unos.h
        vjezba3/unos.cpp
        vjezba3/zad2.cpp
        vjezba3/print.h
        vjezba3/print.cpp vjezba3/zad3.cpp vjezba3/zad4.cpp vjezba3/zad5.cpp vjezba3/zad6.cpp vjezba5/point.cpp vjezba5/point.h vjezba5/zad1.cpp vjezba5/zad2.cpp vjezba5/gun.cpp vjezba5/gun.h vjezba5/target.cpp vjezba5/target.h vjezba5/trajectory.cpp vjezba5/trajectory.h vjezba5/game.cpp vjezba5/game.h vjezba5/constants.h)
