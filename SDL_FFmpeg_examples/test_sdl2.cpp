extern "C"
{
#include "SDL2/SDL.h"
}
int main(int argc, char* argv[]){
    if(SDL_Init(SDL_INIT_VIDEO)) { 
        printf( "Could not initialize SDL - %s\n", SDL_GetError()); 
    } else{
        printf("Success init SDL");
    }
    return 0;
}