//
// Created by jan.wendler on 20.05.2022.
//

#ifndef TETRIS__VIEW_H_
#define TETRIS__VIEW_H_

#include "Frame.h"

namespace Display
{
	class View
	{
	public:
		View(int height, int width, int fps, bool isFullscreen);
		int render();

	private:
		int _height = 0;
		int _width = 0;
		int _fps= 0;
		bool _isRunning = false;
		Frame frame;
	};
}


#endif//TETRIS__VIEW_H_
