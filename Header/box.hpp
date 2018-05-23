#ifndef BOX_HPP_INCLUDED 
#define BOX_HPP_INCLUDED

class Box {
public:
    Box(); //constructor
    Box *next = nullptr;
    Box *prev = nullptr;
    short x, y; //COORD
    static int objectCount;
    virtual void open() = 0;
    virtual void draw(short,short);
    void append(Box*);
    void swap();
};

class Key : public Box {
public:
    void draw(short,short);
    void open();
};

class Ney : public Box {
public:
    void draw(short,short);
    void open();
};

#endif // BOX_HPP_INCLUDED