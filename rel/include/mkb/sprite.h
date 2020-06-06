#pragma once

#include "mathtypes.h"
#include "tickable.h"

#include <cstdint>

namespace mkb
{

constexpr int MAX_SPRITES = 80;

typedef void (*SpriteFunc)(struct Sprite *sprite);

struct Sprite
{
    uint8_t visible; /* Whether it's visible or not? */
    uint8_t field_0x1; /* Seems to affect the font size/type on the pause menu? */
    uint8_t index;
    uint8_t field_0x3;
    Vec2f pos;
    uint8_t red;
    uint8_t green;
    uint8_t blue; /* Actually called "bule" in game.. yup */
    uint8_t field_0x0f;
    int16_t field_0x10;
    int16_t field_0x12;
    uint8_t field_0x14;
    uint8_t field_0x15;
    uint8_t field_0x16;
    uint8_t field_0x17;
    uint8_t field_0x18;
    uint8_t field_0x19;
    uint8_t field_0x1a;
    uint8_t field_0x1b;
    uint8_t field_0x1c;
    uint8_t field_0x1d;
    uint8_t field_0x1e;
    uint8_t field_0x1f;
    float field_0x20;
    uint32_t field_0x24;
    uint8_t field_0x28;
    uint8_t field_0x29;
    uint8_t field_0x2a;
    uint8_t field_0x2b;
    struct SpriteTex *tex;
    SpriteFunc destFunc;
    SpriteFunc tickFunc;
    SpriteFunc dispFunc;
    uint16_t field_0x3c;
    uint8_t field_0x3e;
    uint8_t field_0x3f;
    float width;
    float height;
    float depth;
    int32_t someFrameCount;
    uint32_t field_0x50;
    uint32_t field_0x54;
    float field_0x58;
    float field_0x5c;
    uint8_t field_0x60;
    uint8_t field_0x61;
    uint8_t field_0x62;
    uint8_t field_0x63;
    struct Sprite *someSprite1;
    struct Sprite *someSprite2;
    uint32_t field_0x6c;
    uint32_t field_0x70;
    uint32_t field_0x74;
    uint32_t field_0x78;
    uint8_t field_0x7c;
    uint8_t field_0x7d;
    uint8_t field_0x7e;
    uint8_t field_0x7f;
    float field_0x80;
    uint8_t field_0x84;
    uint8_t field_0x85;
    uint8_t field_0x86;
    uint8_t field_0x87;
    uint32_t someBitflag;
    uint8_t field_0x8c;
    uint8_t field_0x8d;
    uint8_t field_0x8e;
    uint8_t field_0x8f;
    uint32_t field_0x90;
    uint32_t field_0x94;
    float field_0x98;
    float field_0x9c;
    char text[48]; /* If this sprite displays text, this is what it shows, otherwise this is usually just an identifier name */
} __attribute__((__packed__));

static_assert(sizeof(Sprite) == 208);

extern "C"
{
extern Sprite sprites[MAX_SPRITES];
extern TickableListMeta spriteListMeta;
}

}
