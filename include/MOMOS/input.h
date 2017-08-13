/* Copyright 2017. All rights reserved.			   _____   ________      _____   ________     _________
* Author: Marcos Vazquez <mrkvr84@gmail.com>	  /     \  \_____  \    /     \  \_____  \   /   _____/
*												 /  \ /  \  /   |   \  /  \ /  \  /   |   \  \_____  \
* Input(keyboard, mouse, etc...)          		/    Y    \/    |    \/    Y    \/    |    \ /        \
*												\____|____/\_________/\____|____/\_________//_________/
*/

#ifndef MOMOS_INPUT_H
#define MOMOS_INPUT_H 1z

namespace MOMOS {

  // -- Keyboard ----------------------------------------

  enum SpecialKey {
    kSpecialKey_None = 0,
    kSpecialKey_Space = 32,
    kSpecialKey_Enter = 257,
    kSpecialKey_Tab = 258,
    kSpecialKey_Escape = 256,
    kSpecialKey_Delete = 261,
	kSpecialKey_Backspace = 259,
    kSpecialKey_Up = 265,
    kSpecialKey_Down = 264,
    kSpecialKey_Right = 262,
    kSpecialKey_Left = 263,
    kSpecialKey_Control = 341,
    kSpecialKey_Alt = 342,
    kSpecialKey_Shift = 340,
    kSpecialKey_Keypad_0 = 320,
    kSpecialKey_Keypad_1 = 321,
    kSpecialKey_Keypad_2 = 322,
    kSpecialKey_Keypad_3 = 323,
    kSpecialKey_Keypad_4 = 324,
    kSpecialKey_Keypad_5 = 325,
    kSpecialKey_Keypad_6 = 326,
    kSpecialKey_Keypad_7 = 327,
    kSpecialKey_Keypad_8 = 328,
    kSpecialKey_Keypad_9 = 329,
    kSpecialKey_F1 = 290,
    kSpecialKey_F2 = 291,
    kSpecialKey_F3 = 292,
    kSpecialKey_F4 = 293,
    kSpecialKey_F5 = 294,
    kSpecialKey_F6 = 295,
    kSpecialKey_F7 = 296,
    kSpecialKey_F8 = 297,
    kSpecialKey_F9 = 298,
    kSpecialKey_F10 = 299,
    kSpecialKey_F11 = 300,
    kSpecialKey_F12 = 301,
  };

  // Key pressed
  bool IsKeyPressed(char key);
  // Key pressed in this frame
  bool IsKeyDown(char key);
  // Key released in this frame
  bool IsKeyUp(char key);

  // SpecialKey pressed
  bool IsSpecialKeyPressed(SpecialKey key);
  // SpecialKey pressed in this frame
  bool IsSpecialKeyDown(SpecialKey key);
  // SpecialKey released in this frame
  bool IsSpecialKeyUp(SpecialKey key);

  // Returns keys pressed in sequence, if there is no keys left
  // it will return 0. The amount of keys recorded without calling
  // this method is limited.
  char GetNextPressedKey();

  // cleans the input buffer
  void ResetBufferdKeyInput();

  // -- Mouse ---------------------------------------------
  double MousePositionX();
  double MousePositionY();
  double MouseWheelX();
  double MouseWheelY();

  // Returns true if currently the button is pressed
  bool MouseButtonPressed(int button_id);
  // Returns true the frame the button is pressed down, false otherwise
  bool MouseButtonDown(int button_id);
  // Returns true the frame the button is released, false otherwise
  bool MouseButtonUp(int button_id);

} /* MOMOS */

#endif
