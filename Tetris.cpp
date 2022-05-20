//
// Created by jan.wendler on 20.05.2022.
//

#include "Tetris.h"
bool Tetris::isRunning = false;

int Tetris::start()
{
	isRunning = true;
	while(isRunning)
	{
		isRunning = false;
	}
}
