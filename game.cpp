#include "game.h"

#include <Windows.h>
#include <conio.h>
#include <ctime>

Game::Game():
            isGameOver_(false)
          , gameSpeed_(DEFAULT_GAME_SPEED)
{
    car_ = new Car();
    barrier_ = new RegularBarrier();
}

void Game::start()
{
    while(!isGameOver_)
    {
        changeBarrierPosition();
        changeCarPosition();
        GameField::getInstance().refreshField();
        GameField::getInstance().setCarPosition(car_);
        GameField::getInstance().setBarrierPosition(barrier_);
        GameField::getInstance().draw();
        collapseCheck();
        Sleep(gameSpeed_);
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
        if(gameSpeed_ <= MAXIMUM_GAME_SPEED)
        {
            break;
        }
        else
        {
            gameSpeed_ -= SPEED_CHANGE_STEP;
            break;
        }

    case DECREASE_SPEED:
        if(gameSpeed_ >= MINIMUM_GAME_SPEED)
        {
            break;
        }
        else
        {
            gameSpeed_ += SPEED_CHANGE_STEP;
            break;
        }

    case MOVE_CAR_LEFT:
        if(car_->getYPosition() - ONE_STEP <= BEGIN_INDEX)
        {
            break;
        }
        else
        {
            car_->setPosition(car_->getXPosition(), car_->getYPosition() - ONE_STEP);
            break;
        }

    case MOVE_CAR_RIGHT:
        if(car_->getYPosition() + ONE_STEP >= END_INDEX)
        {
            break;
        }
        else
        {
            car_->setPosition(car_->getXPosition(), car_->getYPosition() + ONE_STEP);
            break;
        }

    case SET_GAME_OVER:
            isGameOver_ = true;
            break;
        }
    }
}

void Game::changeBarrierPosition()
{
    if(barrier_->getXPosition() + ONE_STEP > END_INDEX)
    {
        barrier_->setPosition(ONE_STEP, barrier_->getYPosition() + ONE_STEP);
    }
    barrier_->setPosition(barrier_->getXPosition() + ONE_STEP, barrier_->getYPosition());
}

Game::~Game()
{
    delete car_;
    delete barrier_;
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
    for(int  i = BEGIN_INDEX; i < barrier_->getType(); i++)
    {
        if(car_->getXPosition() == barrier_->getXPosition() && car_->getYPosition() == barrier_->getYPosition() + i)
        {
            isGameOver_ = true;
        }
    }
}
