 /* Copyright 2017. All rights reserved.		   _____   ________      _____   ________     _________
 * Author: Marcos Vazquez <mrkvr84@gmail.com>	  /     \  \_____  \    /     \  \_____  \   /   _____/
 *												 /  \ /  \  /   |   \  /  \ /  \  /   |   \  \_____  \
 * Window API (main graphics display)          	/    Y    \/    |    \/    Y    \/    |    \ /        \
 *												\____|____/\_________/\____|____/\_________//_________/
 */

#ifndef MOMOS_WINDOW_H
#define MOMOS_WINDOW_H 1

#include <GL/glew.h>
#include <GLFW/glfw3.h>

namespace MOMOS {

  // Initializes the main graphical window
  void WindowInit(unsigned int width, unsigned int height);

  // This function must be called and the end of the frame, all graphical
  // commands will be executed
  void WindowFrame();

  // Destroys the graphical window
  void WindowDestroy();

  // returns true if the window is opened, false if the window was closed
  bool WindowIsOpened();

  unsigned int WindowHeight();
  unsigned int WindowWidth();

  // must be declared by the user in order to use this library
  int main(int, char **);

  void WindowSetMouseVisibility(bool visible);

} /* MOMOS */

#endif