#ifndef STAGE_HPP_INCLUDED 
#define STAGE_HPP_INCLUDED

#define KEY_UP 72
#define KEY_LEFT 75
#define KEY_RIGHT 77
#define KEY_DOWN 80

bool stage(int);
void Create_Box(Box*&,int);
void Place_Box(Box*);
void Replace_Box(Box*);
void Swap_Box(Box*,int);

#endif // STAGE_HPP_INCLUDED