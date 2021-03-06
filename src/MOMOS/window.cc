#include <MOMOS/window.h>
#include <MOMOS/momos.h>
#include <stdio.h>
#include <MOMOS/resource_manager.h>

namespace MOMOS {

	GLFWwindow* win = nullptr;
	float win_width;
	float win_height;

	bool mouseleftdown = false;
	bool mouserightdown = false;
	bool mouseleftup = false;
	bool mouserightup = false;
	int last_key_pressed = -1;

	void key_callback(GLFWwindow* window, int key, int scancode, int action, int mods) {
		if (action == GLFW_PRESS)
			last_key_pressed = key;

		printf("%d\n", last_key_pressed);
	}


	void mouse_button_callback(GLFWwindow* window, int button, int action, int mods) {
		switch (action) {
		case GLFW_PRESS:
			if (button == GLFW_MOUSE_BUTTON_LEFT) {
				mouseleftup = false;
				mouseleftdown = true;
			} else {
				mouserightup = false;
				mouserightdown = true;
			}
			break;
		case GLFW_RELEASE:
			if (button == GLFW_MOUSE_BUTTON_LEFT) {
				mouseleftup = true;
			} else {
				mouserightup = true;
			}
			break;
		}
		
	}

	void WindowInit(unsigned int width, unsigned int height) {
		glfwWindowHint(GLFW_CONTEXT_VERSION_MAJOR, 3);
		glfwWindowHint(GLFW_CONTEXT_VERSION_MINOR, 3);
		glfwWindowHint(GLFW_OPENGL_PROFILE, GLFW_OPENGL_CORE_PROFILE);
		glfwWindowHint(GLFW_OPENGL_FORWARD_COMPAT, GL_TRUE);
		glfwWindowHint(GLFW_RESIZABLE, GL_FALSE);

		if (!glfwInit()) {
			glfwTerminate();
		}

		win = glfwCreateWindow(width, height, "MOMOS2D FTW", NULL, NULL);
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

		//Set input callback
		glfwSetKeyCallback(win, key_callback);
		glfwSetMouseButtonCallback(win, mouse_button_callback);

		ResourceManager::initSpriteShader();

		//Hide cursor by default
		WindowSetMouseVisibility(false);
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
		return win_height;
	}


	unsigned int WindowWidth() {
		return win_width;
	}

	/*
	int main(int, char **) {
		return 0;
	}
	*/


	void WindowSetMouseVisibility(bool visible) {
		if (visible) {
			glfwSetInputMode(MOMOS::win, GLFW_CURSOR, GLFW_CURSOR_NORMAL);
		} else {
			glfwSetInputMode(MOMOS::win, GLFW_CURSOR, GLFW_CURSOR_HIDDEN);
		}
	}

}