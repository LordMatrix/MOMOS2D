
#include <GL/glew.h>
#include <GLFW/glfw3.h>

#include <glm/glm.hpp>
#include <glm/gtc/matrix_transform.hpp>
#include <glm/gtx/transform.hpp>

#include "../include/Window.h"

#include <MOMOS/momos.h>
#include <MOMOS/window.h>
#include <MOMOS/draw.h>
#include <MOMOS/math.h>

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

	MOMOS::DrawSetTextFont("assets/DroidSerif-Regular.ttf");
	MOMOS::DrawSetTextSize(124.0f);

	float x = 0.1;
	while (MOMOS::WindowIsOpened()) {

		MOMOS::DrawBegin();

		MOMOS::DrawClear(1.0f, 1.0f, 1.0f, 1.0f);

		/************** FONT **************/

		
		MOMOS::DrawText(50, 150, "UpBack");

		
		/**********************************/

		// Draw gears
		x += 0.001;
		MOMOS::DrawSetStrokeColor(255, 0, 0, 255);
		MOMOS::DrawLine(0.0f, 0.0f, 500.0f, 100.0f);

		MOMOS::Mat3 loc = MOMOS::Mat3Translate(x*5, x*5);
		MOMOS::Mat3 rot = MOMOS::Mat3Rotate(x);
		MOMOS::Mat3 trans = MOMOS::Mat3Multiply(loc, rot);


		MOMOS::Vec2 points[5] = { {-100,-100}, {-100,100}, {100,100}, {100,0}, {-100,-100} };

		float floated_points[10];

		for (int i = 0; i < 5; i++) {
			const float v_in[2] = { points[i].x, points[i].y };
			float v_out[2];
			MOMOS::Mat3TransformRawVec2(trans, v_in, v_out);
			
			floated_points[i * 2 + 0] = v_out[0];
			floated_points[i * 2 + 1] = v_out[1];
		}


		MOMOS::DrawSetFillColor(0, 0, 255, 255);
		MOMOS::DrawSolidPath(floated_points, 5, false);

		MOMOS::DrawText(50, 450, "DownFront");

		MOMOS::DrawEnd();
		MOMOS::WindowFrame();
	}

	glfwTerminate();
}