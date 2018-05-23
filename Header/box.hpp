#ifndef BOX_HPP_INCLUDED 
#define BOX_HPP_INCLUDED

#define NULL nullptr

class Box {
public:
    
    Box *next = NULL;
    Box *prev = NULL;
    Box(); //constructor
    
    virtual void open() = 0;
    void swap();
    void append(Box*);

    static int objectCount;
};

class Key : public Box {
public:
    void open();
};

class Ney : public Box {
public:
    void open();
};

#endif // BOX_HPP_INCLUDED