#ifndef BOX_HPP_INCLUDED 
#define BOX_HPP_INCLUDED

class Box {
private:
    bool key;

public:
    static int objectCount;
    
    Box *next = 0;
    Box *prev = 0;
    Box(bool=false); //constructor
    
    void swap();
    void open();
    void append(Box*);
};

#endif // BOX_HPP_INCLUDED