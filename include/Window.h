#ifndef WINDOW_H
#define WINDOW_H

#include "referenced.h"

#include <stdio.h>
#include <GL/glew.h>
#include <GLFW/glfw3.h>


class Window : public Referenced {
public:
  Window();
  Window(const Window& orig);
  virtual ~Window();
  
  void init(int w, int h);
  void setColor(float r, float g, float b, float a);
  void finish();
  
  bool isOpened();
  
  GLFWwindow* window;
  
private:

};

#endif /* WINDOW_H */