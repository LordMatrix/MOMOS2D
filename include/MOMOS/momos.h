#ifndef MOMOS_H
#define MOMOS_H 1

#include <GL/glew.h>
#include <GLFW/glfw3.h>

namespace MOMOS {

	extern GLFWwindow* win;
	extern float win_width;
	extern float win_height;

	extern bool mouseleftdown;
	extern bool mouserightdown;
	extern int last_key_pressed;
}

#endif