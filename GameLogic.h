//
// Created by jan.wendler on 20.05.2022.
//

#ifndef TETRIS__GAMELOGIC_H_
#define TETRIS__GAMELOGIC_H_

#include "Frame.h"
#include "InputHandler.h"
class GameLogic
{
public:
	enum status
	{
		ok,
		errorInputHandler,
		errorFrame,

	};
	GameLogic(const InputHandler& inputHandler, Display::Frame* frame);
	status update();

private:
	BlockHandler* _blockHandler;
	InputHandler& _inputHandler;
};

#endif//TETRIS__GAMELOGIC_H_
