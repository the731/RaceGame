#include "game.h"

#include <Windows.h>
#include <conio.h>
#include <ctime>

Game::Game():
            isGameOver(false)
          , gameSpeed(DEFAULT_GAME_SPEED)
{
    car = new Car();
    barrier = new RegularBarrier();
}

void Game::start()
{
    while(!isGameOver)
    {
        changeBarrierPosition();
        changeCarPosition();
        GameField::getInstance()->refreshField();
        GameField::getInstance()->setCarPosition(car);
        GameField::getInstance()->setBarrierPosition(barrier);
        GameField::getInstance()->draw();
        collapseCheck();
        Sleep(gameSpeed);
        clearScreen();
    }
}

void Game::changeCarPosition()
{
while (_kbhit())
{
    switch (_getch())
    {
    case INCREASE_SPEED:
        if(gameSpeed <= MAXIMUM_GAME_SPEED)
        {
            break;
        }
        else
        {
            gameSpeed -= SPEED_CHANGE_STEP;
            break;
        }

    case DECREASE_SPEED:
        if(gameSpeed >= MINIMUM_GAME_SPEED)
        {
            break;
        }
        else
        {
            gameSpeed += SPEED_CHANGE_STEP;
            break;
        }

    case MOVE_CAR_LEFT:
        if(car->getYPosition() - ONE_STEP <= BEGIN_INDEX)
        {
            break;
        }
        else
        {
            car->setPosition(car->getXPosition(), car->getYPosition() - ONE_STEP);
            break;
        }

    case MOVE_CAR_RIGHT:
        if(car->getYPosition() + ONE_STEP >= END_INDEX)
        {
            break;
        }
        else
        {
            car->setPosition(car->getXPosition(), car->getYPosition() + ONE_STEP);
            break;
        }

    case SET_GAME_OVER:
            isGameOver = true;
            break;
        }
    }
}

void Game::changeBarrierPosition()
{
    if(barrier->getXPosition() + ONE_STEP > END_INDEX)
    {
        barrier->setPosition(ONE_STEP, barrier->getYPosition() + ONE_STEP);
    }
    barrier->setPosition(barrier->getXPosition() + ONE_STEP, barrier->getYPosition());
}

Game::~Game()
{
    delete car;
    delete barrier;
}

void Game::clearScreen()
{
    HANDLE hOut;
    COORD Position;
    hOut = GetStdHandle(STD_OUTPUT_HANDLE);
    Position.X = 0;
    Position.Y = 0;
    SetConsoleCursorPosition(hOut, Position);
}

void Game::collapseCheck()
{
    for(int  i = BEGIN_INDEX; i < barrier->getType(); i++)
    {
        if(car->getXPosition() == barrier->getXPosition() && car->getYPosition() == barrier->getYPosition() + i)
        {
            isGameOver = true;
        }
    }
}
