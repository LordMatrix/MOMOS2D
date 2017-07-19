#include <MOMOS/input.h>
#include <MOMOS/momos.h>

namespace MOMOS {

	// -- Keyboard ------------------------------------------

	bool IsKeyPressed(char key) {
		int status = glfwGetKey(win, key);
		return (status == GLFW_PRESS);
	}


	bool IsKeyDown(char key) {
		bool is_up = last_key_pressed == key;// && isKeyPressed(key);
		//Consume key if it's down
		if (is_up)
			last_key_pressed = -1;
		return is_up;
	}


	bool IsKeyUp(char key) {
		return false;
	}


	bool IsSpecialKeyPressed(SpecialKey key) {
		int status = glfwGetKey(win, key);
		return (status == GLFW_PRESS);
	}


	bool IsSpecialKeyDown(SpecialKey key) {
		bool is_up = last_key_pressed == key;// && isKeyPressed(key);
		//Consume key if it's down
		if (is_up)
			last_key_pressed = -1;
		return is_up;
	}


	bool IsSpecialKeyUp(SpecialKey key) {
		return false;
	}


	char GetNextPressedKey() {
		char rt = last_key_pressed;
		last_key_pressed = -1;
		return rt;
	}


	void ResetBufferdKeyInput() {

	}


	// -- Mouse ---------------------------------------------

	double MousePositionX() {
		double x, y;
		glfwGetCursorPos(win, &x, &y);
		return x;
	}


	double MousePositionY() {
		double x, y;
		glfwGetCursorPos(win, &x, &y);
		return y;
	}


	double MouseWheelX() {
		return 0.0;
	}


	double MouseWheelY() {
		return 0.0;
	}


	bool MouseButtonPressed(int button_id) {
		return false;
	}


	bool MouseButtonDown(int button_id) {
		switch (button_id) {
		case 0:
			return mouserightdown;
			break;
		case 1:
		default:
			return mouseleftdown;
			break;
		}
	}


	bool MouseButtonUp(int button_id) {
		return false;
	}

}