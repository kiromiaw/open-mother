// OPEN-MOTHER MAP CODE
//
// "load_map()","render_map()","handle_collisions()","update_map()"

//for now we will hardcode a map inside here, then we will use .omm files

#include "map.h"

// * MAP TILE
// TODO - make this class a bit better cuz now it's kinda dogshit
// all tiles will be 40x40 px
// MapTile::MapTile(float xpos, float ypos, int r, int g, int b) {
//     tile.x = xpos*40;
//     tile.y = ypos*40;
//     tile.w = 40.0;
//     tile.h = 40.0;
//     this->r = r;
//     this->g = g;
//     this->b = b;
// }

// Render function implementation
void MapTile::render(SDL_Renderer* renderer) {
    SDL_FRect renderTile = {
        pos.getrelativex() + (pos.getx() * 39), // why the fuck does it work when i write 39
        pos.getrelativey() + (pos.gety() * 39), // 39 or else it leaves gaps even tho it's 40x40
        40,
        40
    };

    // printf("%f - %f\n", pos.getx(), pos.gety());
    // SDL_SetRenderDrawColor(renderer, r, g, b, 255); //color
    // SDL_RenderFillRectF(renderer, &renderTile); //draws on screen
    SDL_RenderCopyF(renderer, texture, nullptr, &renderTile);
}