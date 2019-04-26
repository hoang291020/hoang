#include <iostream>
#include <SDL.h>
#include "rule.h"
#include <SDL_ttf.h>
#include <SDL_image.h>
using namespace std;
void rendergame(SDL_Window* window, SDL_Renderer* renderer, const SDL_Rect filled_rect1, const SDL_Rect filled_rect2,SDL_Rect& filled_rect3,SDL_Rect& filled_rect4,SDL_Rect& filled_rect5,SDL_Event event, int m,int time){
   //                                                              .                                .
    SDL_SetRenderDrawColor(renderer, 0, 0, 0, 255);
    SDL_RenderClear(renderer);

    SDL_Surface* loadtex = IMG_Load("blue.jpg");
    SDL_Texture* myload = SDL_CreateTextureFromSurface(renderer, loadtex);
    SDL_RenderCopy(renderer,myload,NULL,&filled_rect1);

    SDL_Surface* loadtex2 = IMG_Load("red.jpg");
    SDL_Surface* loadtex3 = IMG_Load("cherry.jpg");
    SDL_Texture* myload2 = SDL_CreateTextureFromSurface(renderer, loadtex2);
    SDL_Texture* myload3 = SDL_CreateTextureFromSurface(renderer, loadtex3);
    SDL_RenderCopy(renderer,myload3,NULL,&filled_rect2);
    SDL_RenderCopy(renderer,myload2,NULL,&filled_rect3);
    SDL_RenderCopy(renderer,myload2,NULL,&filled_rect4);
    SDL_RenderCopy(renderer,myload2,NULL,&filled_rect5);


    SDL_SetRenderDrawColor(renderer, 225, 0, 0, 255);
    SDL_Rect mill;
    mill.x = 0;
    mill.y = 0;
    mill.w = 400;
    mill.h = 400;
    SDL_RenderDrawRect(renderer,& mill);

    SDL_Rect nill;
    nill.x = 400;
    nill.y = 0;
    nill.w = 200;
    nill.h = 600;
    SDL_SetRenderDrawColor(renderer, 0, 250, 200, 255);
    SDL_RenderFillRect(renderer,& nill);

    SDL_Rect qill;
    qill.x = 0;
    qill.y = 400;
    qill.w = 600;
    qill.h = 200;
    SDL_SetRenderDrawColor(renderer, 0, 250, 200, 255);
    SDL_RenderFillRect(renderer,& qill);

    SDL_Rect aill;
    aill.x = 450;
    aill.y = 50;
    aill.w = 100;
    aill.h = 30;
    SDL_SetRenderDrawColor(renderer, 255, 255, 255, 255);
    SDL_RenderFillRect(renderer,& aill);

    SDL_Rect bill;
    bill.x = 450;
    bill.y = 120;
    bill.w = 100;
    bill.h = 30;
    SDL_SetRenderDrawColor(renderer, 255, 255, 255, 255);
    SDL_RenderFillRect(renderer,& bill);

    if(((time/100)/17)%4== 0){
        filled_rect3.y = 330 - ((time/100)%17)*10 ;
        filled_rect4.y = 135 - ((time/100)%17)*6;
        filled_rect5.y = 230 + ((time/100)%17)*9;
    }
    else if(((time/100)/17)%4== 1){
        filled_rect3.x = 5 + ((time/100)%17)*10 ;
        filled_rect4.x = 240 - ((time/100)%17)*8 ;
        filled_rect5.x = 380 - ((time/100)%17)*9 ;
    }
    else if(((time/100)/17)%4== 2){
        filled_rect3.x = 165 -((time/100)%17)*10 ;
        filled_rect4.x = 115 +((time/100)%17)*8 ;
        filled_rect5.x = 235 +((time/100)%17)*9 ;
    }
    else if(((time/100)/17)%4== 3){
        filled_rect3.y = 170 + ((time/100)%17)*10;
        filled_rect4.y = 45 + ((time/100)%17)*6;
        filled_rect5.y = 370 - ((time/100)%17)*9;
    }

    SDL_SetRenderDrawColor(renderer, 220, 0, 0, 255);

    SDL_RenderDrawLine(renderer,30,30,30,80);
    SDL_RenderDrawLine(renderer,30,80,70,80);
    SDL_RenderDrawLine(renderer,70,80,70,160);
    SDL_RenderDrawLine(renderer,0,120,30,120);
    SDL_RenderDrawLine(renderer,0,160,190,160);
    SDL_RenderDrawLine(renderer,70,30,70,0);
    SDL_RenderDrawLine(renderer,70,30,110,30);
    SDL_RenderDrawLine(renderer,110,30,110,120);
    SDL_RenderDrawLine(renderer,110,120,150,120);
    SDL_RenderDrawLine(renderer,150,120,150,80);
    SDL_RenderDrawLine(renderer,150,80,230,80);
    SDL_RenderDrawLine(renderer,150,30,230,30);
    SDL_RenderDrawLine(renderer,190,160,190,120);
    SDL_RenderDrawLine(renderer,230,30,230,0);
    SDL_RenderDrawLine(renderer,230,80,230,160);
    SDL_RenderDrawLine(renderer,230,160,350,160);
    SDL_RenderDrawLine(renderer,270,30,270,120);
    SDL_RenderDrawLine(renderer,270,120,400,120);
    SDL_RenderDrawLine(renderer,310,0,310,80);
    SDL_RenderDrawLine(renderer,350,30,350,120);
    SDL_RenderDrawLine(renderer,190,160,190,200);
    SDL_RenderDrawLine(renderer,350,160,350,180);
    SDL_RenderDrawLine(renderer,110,200,190,200);
    SDL_RenderDrawLine(renderer,270,200,310,200);
    SDL_RenderDrawLine(renderer,230,160,230,240);
    SDL_RenderDrawLine(renderer,310,200,310,220);
    SDL_RenderDrawLine(renderer,310,220,400,220);
    SDL_RenderDrawLine(renderer,30,200,30,320);
    SDL_RenderDrawLine(renderer,70,200,70,280);
    SDL_RenderDrawLine(renderer,110,200,110,280);
    SDL_RenderDrawLine(renderer,150,240,270,240);
    SDL_RenderDrawLine(renderer,270,260,370,260);
    SDL_RenderDrawLine(renderer,270,240,270,260);
    SDL_RenderDrawLine(renderer,70,280,230,280);
    SDL_RenderDrawLine(renderer,230,280,230,300);
    SDL_RenderDrawLine(renderer,230,300,330,300);
    SDL_RenderDrawLine(renderer,370,260,370,300);
    SDL_RenderDrawLine(renderer,330,300,330,370);
    SDL_RenderDrawLine(renderer,330,340,370,340);
    SDL_RenderDrawLine(renderer,30,320,190,320);
    SDL_RenderDrawLine(renderer,190,320,190,360);
    SDL_RenderDrawLine(renderer,190,360,0,360);
    SDL_RenderDrawLine(renderer,190,340,290,340);
    SDL_RenderDrawLine(renderer,270,340,270,370);
    SDL_RenderDrawLine(renderer,230,380,230,400);



    SDL_Color Black = { 0, 0, 0 };

	TTF_Font* font = TTF_OpenFont("lightitalic.ttf", 30);
	if (font == NULL) {
		cout << "Font loading error" << endl;
		return;
	}

    SDL_Surface* score = TTF_RenderText_Solid(font, ( to_string(m*1000)).c_str(), Black);
	SDL_Texture* scoreMessage = SDL_CreateTextureFromSurface(renderer, score);
	int a;
	if(m < 1){
        a= 1;
	}
	else if(m >= 1 && m < 10){
        a= 4;
	}
	else if(m >= 10){
        a = 5;
	}

	SDL_Rect scoreRect;
	scoreRect.w = 15*a;
	scoreRect.h = 30;
	scoreRect.y = 50;
	if(m >= 10){
        scoreRect.x = 470;
	}
	else if(m >= 1 and m < 10){
        scoreRect.x = 485;
	} else {
        scoreRect.x = 530;
	}
	SDL_RenderCopy(renderer, scoreMessage, NULL, &scoreRect);

    int aa = 180 - time/1000;
	int minute = aa/60;
    int second = aa - (minute*60);
    SDL_Surface* Mytime;
    if(second >= 10){
        Mytime = TTF_RenderText_Solid(font, ( to_string(minute) +":"+ to_string(second)).c_str(), Black);
    } else {
        Mytime = TTF_RenderText_Solid(font, ( to_string(minute) +":0"+ to_string(second)).c_str(), Black);
    }
    SDL_Texture* timeMessage = SDL_CreateTextureFromSurface(renderer, Mytime);
	SDL_Rect timeRect;
	timeRect.w = 50;
	timeRect.h = 30;
	timeRect.x = 480;
	timeRect.y = 120;
	SDL_RenderCopy(renderer, timeMessage, NULL, &timeRect);

    SDL_Surface* mypoint = TTF_RenderText_Solid(font,"Score", Black);
    SDL_Texture* pointMessage = SDL_CreateTextureFromSurface(renderer, mypoint);
    SDL_Rect pointRect;
	pointRect.w = 80;
	pointRect.h = 30;
	pointRect.x = 460;
    pointRect.y = 20;
	SDL_RenderCopy(renderer, pointMessage, NULL, &pointRect);

	SDL_Surface* timepoint = TTF_RenderText_Solid(font,"Time", Black);
    SDL_Texture* timepointMessage = SDL_CreateTextureFromSurface(renderer, timepoint);
    SDL_Rect timepointRect;
	timepointRect.w = 70;
	timepointRect.h = 30;
	timepointRect.x = 460;
    timepointRect.y = 90;
	SDL_RenderCopy(renderer, timepointMessage, NULL, &timepointRect);

    SDL_RenderPresent(renderer);
    SDL_FreeSurface(loadtex);
    SDL_FreeSurface(loadtex2);
    SDL_FreeSurface(loadtex3);
    SDL_DestroyTexture(myload);
    SDL_DestroyTexture(myload2);
    SDL_DestroyTexture(myload3);
    TTF_CloseFont(font);
    SDL_DestroyTexture(timeMessage);

}
