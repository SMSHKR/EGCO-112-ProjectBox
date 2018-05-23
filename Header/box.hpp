#ifndef BOX_HPP_INCLUDED 
#define BOX_HPP_INCLUDED

class Box {
public:
    
    Box *next = nullptr;
    Box *prev = nullptr;
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