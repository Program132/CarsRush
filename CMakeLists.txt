cmake_minimum_required(VERSION 3.24)
project(CarsRush)

set(CMAKE_CXX_STANDARD 23)

add_executable(CarsRush main.cpp src/GameInfo/GameInfo.cpp src/GameInfo/GameInfo.h src/Vehicule/Vehicule.cpp src/Vehicule/Vehicule.h src/Position/Position.cpp src/Position/Position.h src/GameManager/GameManager.cpp src/GameManager/GameManager.h src/Move/Move.cpp src/Move/Move.h src/EndGame/EndGame.cpp src/EndGame/EndGame.h)