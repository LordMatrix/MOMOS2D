#include <MOMOS/sprite.h>

#include <glm/glm.hpp>
#include <GL/glew.h>
#include <GLFW/glfw3.h>

#include <MOMOS/shader.h>
#include <MOMOS/texture.h>

namespace MOMOS {

	SpriteHandle SpriteFromFile(const char *path) {
		return nullptr;
	}


	SpriteHandle SpriteFromMemory(int width, int height, const unsigned char *data_RGBA) {
		return nullptr;
	}


	void SpriteUpdateFromMemory(SpriteHandle, const unsigned char *data_RGBA) {

	}


	SpriteHandle SubSprite(SpriteHandle orig, int x, int y, int width, int height) {
		return nullptr;
	}


	void SpriteRelease(SpriteHandle img) {

	}


	int SpriteHeight(SpriteHandle img) {
		return 0;
	}


	int SpriteWidth(SpriteHandle img) {
		return 0;
	}


	void SpriteGetPixel(SpriteHandle img, int x, int y, unsigned char outRGBA[4]) {

	}


	void DrawSprite(SpriteHandle img, float x, float y) {

	}


	void DrawSpriteWithMatrix(SpriteHandle img, const float tranform_matrix[9]) {

	}


	void DrawSpriteWithMatrix(SpriteHandle img, const MOMOS::Mat3 &m) {

	}


	void DrawSprite(SpriteHandle img, const SpriteTransform &st) {

	}

} /* MOMOS */