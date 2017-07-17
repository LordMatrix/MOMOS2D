#include <MOMOS/input.h>
#include <MOMOS/momos.h>

namespace MOMOS {

	// -- Keyboard ------------------------------------------

	bool IsKeyPressed(char key) {
		return false;
	}


	bool IsKeyDown(char key) {
		return false;
	}


	bool IsKeyUp(char key) {
		return false;
	}


	bool IsSpecialKeyPressed(SpecialKey key) {
		return false;
	}


	bool IsSpecialKeyDown(SpecialKey key) {
		return false;
	}


	bool IsSpecialKeyUp(SpecialKey key) {
		return false;
	}


	char GetNextPressedKey() {
		return 0;
	}


	void ResetBufferdKeyInput() {

	}


	// -- Mouse ---------------------------------------------

	double MousePositionX() {
		return 0.0;
	}


	double MousePositionY() {
		return 0.0;
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
		return false;
	}


	bool MouseButtonUp(int button_id) {
		return false;
	}

}