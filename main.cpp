#include <iostream>
#include <stdio.h>
#include <SDL2/SDL.h>
using namespace std;
int x = 0;
int y = 0;
int colors[3][4] = {
    {255, 0, 0, 255},
    {0, 255, 0, 255},
    {0, 0, 255, 255}
};

int vBuffer[640*480][6] = {};

int updateBuffer() {
    for (int i = 0; i < sizeof(vBuffer); i++) {
        for (int e = 0; e < 4; e++) {
             
        }
    }
}

int main() {
    SDL_Window* window = nullptr;
    SDL_Renderer* renderer = nullptr;

    SDL_Init(SDL_INIT_EVERYTHING);
    SDL_CreateWindowAndRenderer(640, 480, 0, &window, &renderer);
    SDL_RenderSetScale(renderer, 2, 2);
    SDL_SetRenderDrawColor(renderer, 0, 0, 0, 255);
    SDL_RenderClear(renderer);
    
    for (int i = 0; i < sizeof(vBuffer); i++) {
        SDL_SetRenderDrawColor(renderer, vBuffer[i][2], vBuffer[i][3], vBuffer[i][4], vBuffer[i][5]);
        SDL_RenderDrawPoint(renderer, vBuffer[i][0], vBuffer[i][1]);
    }

    SDL_SetRenderDrawColor(renderer, 20, 100, 50, 255);

    SDL_SetRenderDrawColor(renderer, 255, 255, 255, 255);
    SDL_RenderDrawPoint(renderer, 640/2, 480/2);

    SDL_RenderPresent(renderer);
    SDL_Delay(10000);
    cout << "END" << endl;
    return 0;
}