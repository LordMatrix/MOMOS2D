#include <MOMOS/window.h>

namespace MOMOS {

	GLFWwindow* win = nullptr;
	float win_width;
	float win_height;

	void WindowInit(unsigned int width, unsigned int height) {
		glfwWindowHint(GLFW_CONTEXT_VERSION_MAJOR, 3);
		glfwWindowHint(GLFW_CONTEXT_VERSION_MINOR, 3);
		glfwWindowHint(GLFW_OPENGL_PROFILE, GLFW_OPENGL_CORE_PROFILE);
		glfwWindowHint(GLFW_OPENGL_FORWARD_COMPAT, GL_TRUE);
		glfwWindowHint(GLFW_RESIZABLE, GL_FALSE);

		if (!glfwInit()) {
			glfwTerminate();
		}

		win = glfwCreateWindow(width, height, "Simple example", NULL, NULL);
		glfwMakeContextCurrent(win);
		glewInit();
		glEnable(GL_DEPTH_TEST);

		// set up view
		glViewport(0, 0, width, height);
		glMatrixMode(GL_PROJECTION);
		glLoadIdentity();

		// this creates a canvas you can do 2D drawing on
		glOrtho(0.0, width, 0.0, height, 0.0, 1.0);

		win_width = width;
		win_height = height;
	}


	void WindowFrame() {
		glfwSwapBuffers(win);
		glfwPollEvents();
	}


	void WindowDestroy() {

	}


	bool WindowIsOpened() {
		return !glfwWindowShouldClose(win);
	}


	unsigned int WindowHeight() {
		return 0;
	}


	unsigned int WindowWidth() {
		return 0;
	}

	/*
	int main(int, char **) {
		return 0;
	}
	*/


	void WindowSetMouseVisibility(bool visible) {

	}

}