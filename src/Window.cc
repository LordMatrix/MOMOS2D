/* 
 * File:   Window.cc
 * Author: Marcos V�zquez
 * 
 * Created on September 29, 2016, 11:59 PM
 */

#include "../include/Window.h"

Window::Window() {
}

Window::Window(const Window& orig) {
}

Window::~Window() {
}

void Window::init(int w, int h) {

	glfwWindowHint(GLFW_CONTEXT_VERSION_MAJOR, 3);
	glfwWindowHint(GLFW_CONTEXT_VERSION_MINOR, 3);
	glfwWindowHint(GLFW_OPENGL_PROFILE, GLFW_OPENGL_CORE_PROFILE);
	glfwWindowHint(GLFW_OPENGL_FORWARD_COMPAT, GL_TRUE);
	glfwWindowHint(GLFW_RESIZABLE, GL_FALSE);

	if (!glfwInit()) {
		glfwTerminate();
	}

	window = glfwCreateWindow(w, h, "Simple example", NULL, NULL);
	glfwMakeContextCurrent(window);
	glewInit();  
	glEnable(GL_DEPTH_TEST);
}


void Window::setColor(float r, float g, float b, float a) {
  glClearColor(r,g,b,a);
}


void Window::finish() {
  glfwTerminate();
}


bool Window::isOpened() {
  return !glfwWindowShouldClose(window);
}