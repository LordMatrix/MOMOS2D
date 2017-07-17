/* Copyright 2017. All rights reserved.			   _____   ________      _____   ________     _________
* Author: Marcos Vazquez <mrkvr84@gmail.com>	  /     \  \_____  \    /     \  \_____  \   /   _____/
*												 /  \ /  \  /   |   \  /  \ /  \  /   |   \  \_____  \
* Timming API		          					/    Y    \/    |    \/    Y    \/    |    \ /        \
*												\____|____/\_________/\____|____/\_________//_________/
*/

#ifndef MOMOS_TIME_H
#define MOMOS_TIME_H 1

namespace MOMOS {
  // returns time in milliseconds with microsecond preccision
  double Time();

  // suspends the execution of the current thread. The time given is in ms.
  // The time suspended is not extremely accurate be careful when calling sleep.
  void Sleep(unsigned int ms);
 }

 #endif // MOMOS_TIME_H 