#ifndef BOX_HPP_INCLUDED 
#define BOX_HPP_INCLUDED

class Box {
friend void swap(Box*&,Box*&);
private:
    bool key;
    short x, y; //COORD
public:
    Box *next = nullptr;
    Box *prev = nullptr;
    static int objectCount;
    
    Box(bool=false); //constructor
    ~Box(); //destructor

    void black();
    void draw();
    void draw_color();
    void draw_cursor();
    void move_cursor();
    void setxy(short,short);
    void append(Box*);
    void open();
};

#endif // BOX_HPP_INCLUDED