/* Copyright 2017. All rights reserved.			   _____   ________      _____   ________     _________
* Author: Marcos Vazquez <mrkvr84@gmail.com>	  /     \  \_____  \    /     \  \_____  \   /   _____/
*												 /  \ /  \  /   |   \  /  \ /  \  /   |   \  \_____  \
* Drawing commands          					/    Y    \/    |    \/    Y    \/    |    \ /        \
*												\____|____/\_________/\____|____/\_________//_________/
*/

#ifndef MOMOS_DRAW_H
#define MOMOS_DRAW_H 1

namespace MOMOS {

  // Call this before start sending drawing commands
  void DrawBegin();
  // Call this after all drawing is done
  void DrawEnd();

  void DrawSetStrokeColor(
      unsigned char R,
      unsigned char G, 
      unsigned char B,
      unsigned char Alpha = 255);

  void DrawSetFillColor(
      unsigned char R,
      unsigned char G,
      unsigned char B,
      unsigned char Alpha = 255);

  void DrawClear(
      unsigned char R,
      unsigned char G,
      unsigned char B,
      unsigned char Alpha = 255);

  void DrawLine(float x1,float y1,float x2,float y2);

  // Draws a continuous line (path)
  void DrawPath(float *pairs_of_points, int num_points);

  void DrawSolidPath(float *pairs_of_points, int num_points, bool stroke = true);

  void DrawSetTextFont(const char *name);
  void DrawSetTextSize(float size);
  void DrawSetTextBlur(float blur_radius);
  void DrawText(float x, float y, const char *text);

} /* MOMOS */

#endif