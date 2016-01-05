// GameTest.cpp : Defines the entry point for the console application.
//

#include <iostream>
#include <stdio.h>

#include "SimpleGE.h"

#include "myLevel.h"

int WINAPI WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, LPSTR lpCmdLine, int nCmdShow) {
    // System Initialize
    auto system = SystemController::getInstance();
    system->init(hInstance, nCmdShow);

    // Level One
<<<<<<< HEAD
    auto level = LevelZero::create();
	//auto level = LevelSuccess::create();
	//auto level = LevelFaile::create();

=======
    //auto level = LevelOne::create();
    auto level = LoadingLevel::create();
>>>>>>> 6796733aa2a52888b87f31c25ddc3386c9ffd7c7
    system->setCurrentLevel(level);

    // GameStart
    system->start();

    // System Exit
    system->exit();

    return 0;
}