/* Copyright 2017. All rights reserved.			   _____   ________      _____   ________     _________
* Author: Marcos Vazquez <mrkvr84@gmail.com>	  /     \  \_____  \    /     \  \_____  \   /   _____/
*												 /  \ /  \  /   |   \  /  \ /  \  /   |   \  \_____  \
* Sprite commands	          					/    Y    \/    |    \/    Y    \/    |    \ /        \
*												\____|____/\_________/\____|____/\_________//_________/
*/

#ifndef MOMOS_SPRITE_H
#define MOMOS_SPRITE_H 1

#include <MOMOS/math.h>

namespace MOMOS {

  typedef void* SpriteHandle;

  SpriteHandle SpriteFromFile(const char *path);
  SpriteHandle SpriteFromMemory(int width, int height, const unsigned char *data_RGBA = 0L);
  void SpriteUpdateFromMemory(SpriteHandle, const unsigned char *data_RGBA);

  SpriteHandle SubSprite(SpriteHandle orig, int x, int y, int width, int height);

  void SpriteRelease(SpriteHandle img);
  int SpriteHeight(SpriteHandle img);
  int SpriteWidth(SpriteHandle img);
  void SpriteGetPixel(SpriteHandle img, int x, int y, unsigned char outRGBA[4]);  
  
  void DrawSprite(SpriteHandle img, float x, float y);

  // Draws an Sprite with a transformation matrix. The matrix values are specified as
  // a column-major 3x3 matrix. Only six values are used as shown:
  //     | m1 m4 m7 |
  // M = | m2 m5 m8 |  --> m = [m1,m2,m3,m4,m5,m6,m7,m8,m9]
  //     | m3 m6 m9 |

  void DrawSpriteWithMatrix(SpriteHandle img, const float tranform_matrix[9]);

  // Draws an Sprite with MOMOS::Mat3 as input
  void DrawSpriteWithMatrix(SpriteHandle img, const MOMOS::Mat3 &m);

  struct SpriteTransform {
    float x,y;                // position where to draw the sprite (default 0,0) 
    float angle;              // rotation in radians (default 0)
    float scale_x, scale_y;   // scale (default 1,1)
    float sprite_origin_x,
          sprite_origin_y;    // origin relative to sprite Coordinates in pixels (default 0,0)
  };

  // Initializes SpriteTransform with default values:
  inline void SpriteTransformInit(SpriteTransform *st) {
    st->x = 0.0f;
    st->y = 0.0f;
    st->angle = 0.0f;
    st->scale_x = 1.0f;
    st->scale_y = 1.0f;
    st->sprite_origin_x = 0.0f;
    st->sprite_origin_y = 0.0f;
  }

  void DrawSprite(SpriteHandle img, const SpriteTransform &st);

} /* MOMOS */

#endif
