#ifndef MOMOS_H
#define MOMOS_H 1

#include <GL/glew.h>
#include <GLFW/glfw3.h>

class SpriteRenderer;

namespace MOMOS {

	extern GLFWwindow* win;
	extern float win_width;
	extern float win_height;

	extern bool mouseleftdown;
	extern bool mouserightdown;
	extern bool mouseleftup;
	extern bool mouserightup;
	extern int last_key_pressed;

	//Global sprite renderer
	extern SpriteRenderer* renderer;
}

#endif