#include "game.h"

#include <Windows.h>
#include <conio.h>
#include <ctime>

Game::Game():
            isGameOver(false)
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
        Sleep(DEFAULT_GAME_SPEED);
        clearScreen();
    }
}

void Game::changeCarPosition()
{
while (_kbhit())
{
    switch (_getch())
    {
    case 'w':
        if(car->getXPosition() - ONE_STEP <= BEGIN_INDEX)
        {
            break;
        }
        else
        {
            car->setPosition(car->getXPosition() - ONE_STEP, car->getYPosition());
            break;
        }

    case 's':
        if(car->getXPosition() + ONE_STEP >= END_INDEX)
        {
            break;
        }
        else
        {
            car->setPosition(car->getXPosition() + ONE_STEP , car->getYPosition());
            break;
        }

    case 'a':
        if(car->getYPosition() - ONE_STEP <= BEGIN_INDEX)
        {
            break;
        }
        else
        {
            car->setPosition(car->getXPosition(), car->getYPosition() - ONE_STEP);
            break;
        }

    case 'd':
        if(car->getYPosition() + ONE_STEP >= END_INDEX)
        {
            break;
        }
        else
        {
            car->setPosition(car->getXPosition(), car->getYPosition() + ONE_STEP);
            break;
        }

    case 'o':
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
