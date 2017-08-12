
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



#include <MOMOS/sprite.h>
#include <MOMOS/texture.h>
#include <MOMOS/shader.h>
#include <MOMOS/resource_manager.h>
#include <MOMOS/sprite_renderer.h>
#include <glm/glm.hpp>
#include <glm/gtc/matrix_transform.hpp>


int main(int argc, char** argv) {

	MOMOS::WindowInit(800, 600);

	MOMOS::DrawSetTextFont("assets/DroidSerif-Regular.ttf");




	ResourceManager::initSpriteShader();

	MOMOS::SpriteHandle sprite = MOMOS::SpriteFromFile("src/JanKenPon/assets/flags/CRO.jpg");


	
	


	/************************************************/


	


	

	float x = 0.1f;
	while (MOMOS::WindowIsOpened()) {

		MOMOS::DrawBegin();

		MOMOS::DrawClear(1.0f, 1.0f, 1.0f, 1.0f);


		MOMOS::DrawSprite(sprite, 200, 200);


		/************** FONT **************/

		MOMOS::DrawSetFillColor(200, 50, 50, 255);
		MOMOS::DrawSetTextSize(100.0f);
		MOMOS::DrawText(50, 150, "UpBack");

		/**********************************/


		// Draw gears
		x += 0.001f;
		MOMOS::DrawSetStrokeColor(255, 0, 0, 255);
		MOMOS::DrawLine(0.0f, 0.0f, 500.0f, 100.0f);

		MOMOS::Mat3 loc = MOMOS::Mat3Translate(x * 5, x * 5);
		MOMOS::Mat3 rot = MOMOS::Mat3Rotate(x);
		MOMOS::Mat3 trans = MOMOS::Mat3Multiply(loc, rot);


		MOMOS::Vec2 points[5] = { { -100,-100 },{ -100,100 },{ 100,100 },{ 100,0 },{ -100,-100 } };

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

		float fixed_points[10] = { 300,300, 300,500, 500,500, 500,400, 300,300 };
		MOMOS::DrawPath(fixed_points, 5);

		MOMOS::DrawSetFillColor(50, 200, 50, 255);
		MOMOS::DrawSetTextSize(70.0f);
		MOMOS::DrawText(50, 50, "DownFront");

		MOMOS::DrawEnd();
		MOMOS::WindowFrame();
	}

	glfwTerminate();
}