#include <MOMOS/sprite.h>

#include <glm/glm.hpp>
#include <GL/glew.h>
#include <GLFW/glfw3.h>

#include <MOMOS/shader.h>
#include <MOMOS/texture.h>

namespace MOMOS {

	SpriteRenderer* renderer;

	SpriteHandle SpriteFromFile(const char *path) {
		// Load textures
		Texture2D* texture = ResourceManager::LoadTexture(path, GL_TRUE, path);
		// Set render-specific controls
		MOMOS::renderer = new SpriteRenderer(ResourceManager::GetShader("sprite"));

		return texture;
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
		Texture2D* tex = static_cast<Texture2D*>(img);
		MOMOS::renderer->DrawSprite(*tex, glm::vec2(x,y), glm::vec2(tex->Width, tex->Height), 0.0f, glm::vec3(1.0f, 1.0f, 1.0f));
	}


	void DrawSpriteWithMatrix(SpriteHandle img, const float tranform_matrix[9]) {

	}


	void DrawSpriteWithMatrix(SpriteHandle img, const MOMOS::Mat3 &m) {

	}


	void DrawSprite(SpriteHandle img, const SpriteTransform &st) {

	}

} /* MOMOS */