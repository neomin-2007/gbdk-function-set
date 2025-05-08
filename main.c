#include <gb/gb.h>
#include <gb/hardware.h>
#include <stdio.h>

#include "player.c"
#include "time.c"

int animate(int sprite_index) {
    switch (sprite_index) {
        case 0:
            sprite_index = 1;
            break;
        case 1:
            sprite_index = 0;
            break;
    }
    return sprite_index;
}

void movement() {
    switch (joypad()) {
        case J_LEFT:
            scroll_sprite(0, -1, 0);
            break;
        case J_RIGHT:
            scroll_sprite(0, 1, 0);
            break;
        case J_UP:
            scroll_sprite(0, 0, -1);
            break;
        case J_DOWN:
            scroll_sprite(0, 0, 1);
            break;
    }
}

void main() {

    uint8_t sprite_index = 0;

    set_sprite_data(0, 2, player);
    set_sprite_tile(0, 0);

    move_sprite(0, 88, 78);

    SHOW_SPRITES;

    while(1) {

        sprite_index = animate(sprite_index);
    
        movement();
        waitSeconds(1);

        set_sprite_tile(0, sprite_index);
        waitSeconds(1);
    }
}