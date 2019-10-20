#include "Object.h"
#include "Sprite.h"
#include "Utilities.h"
#include <stdlib.h>

#define SCREEN_WIDTH  240
#define SCREEN_HEIGHT 160

#define REG_DISPLAY (*((volatile uint16 *)0x04000000))
#define DISPLAY_MODE1 0x1000
#define DISPLAY_ENABLE_OBJECTS 0x0040

#define TILE_MEM ((volatile tile_block *)0x06000000)
#define TILE_MEM_FG 4
#define TILE_MEM_BG 1
#define PALETTE_MEM ((volatile palette *)(0x05000000 + 0x200))  // ignore bg mem
#define PALETTE_MEM_BG ((volatile palette *)(0x05000000))
#define PALETTE_SIZE 256

#define OAM_MEM ((volatile object *)0x07000000)
#define OAM_HIDE_MASK 0x300         // 0000 0000 0011 0000 0000
#define OAM_HIDE 0x200              // 0000 0000 0010 0000 0000
#define OAM_Y_MASK 0x0FF
#define OAM_X_MASK 0x1FF

#define REG_VCOUNT (*(volatile uint16*) 0x04000006)

#define REG_KEY_INPUT (*((volatile uint16 *)0x04000130))
#define KEY_ANY  0x03FF
#define KEY_LEFT (1 << 5)
#define KEY_RIGHT (1 << 4)

#define VELOCITY 2
using namespace std;

int main()
{
  Utilities u;
  Object *test = u.create_object(0x4000, 0x4000, 5);
}
