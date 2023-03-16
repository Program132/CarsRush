cmake_minimum_required(VERSION 3.24)
project(CarsRush)

set(CMAKE_CXX_STANDARD 23)

add_executable(CarsRush main.cpp src/GameMotor/GameMotor.cpp src/GameMotor/GameMotor.h src/Vehicule/Vehicule.cpp src/Vehicule/Vehicule.h src/Position/Position.cpp src/Position/Position.h)