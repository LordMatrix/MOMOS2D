#ifndef ENGINE_H
#define ENGINE_H

#include <thread>

#include <GL/glew.h>
#include <GLFW/glfw3.h>

#include <glm/glm.hpp>
#include <glm/gtc/matrix_transform.hpp>
#include <glm/gtx/transform.hpp>

#endif

#include "../include/Window.h"

#include <MOMOS/window.h>
#include <MOMOS/draw.h>

/*
#include "../include/GPUCommand.h"
#include "../include/Camera.h"
#include "../include/Input.h"
#include "../include/Timer.h"
#include "../include/Audio.h"
#include "../include/Node.h"
#include "../include/Postprocess.h"
#include "../include/Components/RenderComponent.h"
#include "../include/Components/TransformComponent.h"
#include "../include/Components/TextComponent.h"
#include "../include/Text.h"
#include "../include/Shader.h"
#include "../include/FrameBuffer.h"
#include "../include/Scene.h"
#include "../include/Light.h"
*/


int main(int argc, char** argv) {

	MOMOS::WindowInit(800, 600);

	float x = 10;
	while (MOMOS::WindowIsOpened()) {

		MOMOS::DrawClear(1.0f, 1.0f, 1.0f, 1.0f);
		// Draw gears
		x += 0.1f;
		MOMOS::DrawLine(x, 0.0f, 200.0f, 200.0f);

		float points[6] = { 0, 0, 0, 200, 200, 200 };
		MOMOS::DrawSolidPath(points, 3, false);

		MOMOS::DrawEnd();
	}

	glfwTerminate();
}