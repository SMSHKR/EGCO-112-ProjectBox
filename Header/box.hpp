#ifndef BOX_HPP_INCLUDED 
#define BOX_HPP_INCLUDED

class Box {
private:
    bool key;
public:
    static int objectCount;
    Box(bool=false); //constructor
    
    void swap();
    void open();
};

#endif // BOX_HPP_INCLUDED