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
        vjezba3/print.cpp vjezba3/zad3.cpp vjezba3/zad4.cpp vjezba3/zad5.cpp vjezba3/zad6.cpp vjezba5/point.cpp vjezba5/point.h vjezba5/zad1.cpp vjezba5/zad2.cpp vjezba5/gun.cpp vjezba5/gun.h vjezba5/target.cpp vjezba5/target.h vjezba5/trajectory.cpp vjezba5/trajectory.h vjezba5/game.cpp vjezba5/game.h vjezba5/constants.h vjezba6/HangmanModel.cpp vjezba6/HangmanModel.h vjezba6/HangmanView.cpp vjezba6/HangmanView.h vjezba6/HangmanController.cpp vjezba6/HangmanController.h vjezba6/constants.h vjezba6/zad.cpp vjezba7/board.cpp vjezba7/board.h vjezba7/point.cpp vjezba7/point.h vjezba7/view.cpp vjezba7/view.h vjezba7/controller.cpp vjezba7/controller.h vjezba7/vj7.cpp vjezba8/timer.cpp vjezba8/timer.h vjezba8/main.cpp vjezba9/vj9zad2.cpp vjezba9/game/Game.cpp vjezba9/game/Game.h vjezba9/players/Player.cpp vjezba9/players/Player.h vjezba9/players/HumanPlayer.cpp vjezba9/players/HumanPlayer.h vjezba9/players/ComputerPlayer.cpp vjezba9/players/ComputerPlayer.h vjezba9/zivotinje/Zivotinja.cpp vjezba9/zivotinje/Zivotinja.h vjezba9/zivotinje/kukci/Kukac.cpp vjezba9/zivotinje/kukci/Kukac.h vjezba9/zivotinje/pauci/Pauk.cpp vjezba9/zivotinje/pauci/Pauk.h vjezba9/zivotinje/ptice/Ptica.cpp vjezba9/zivotinje/ptice/Ptica.h vjezba9/zivotinje/kukci/Mrav.cpp vjezba9/zivotinje/kukci/Mrav.h vjezba9/zivotinje/pauci/Tarantula.cpp vjezba9/zivotinje/pauci/Tarantula.h vjezba9/zivotinje/ptice/Galeb.cpp vjezba9/zivotinje/ptice/Galeb.h vjezba9/vj9zad1.cpp vjezba9/zivotinje/Brojac.cpp vjezba9/zivotinje/Brojac.h vjezba9/game/game_constants.h vjezba10/vj10.cpp vjezba10/Stack.cpp vjezba10/Stack.h)
