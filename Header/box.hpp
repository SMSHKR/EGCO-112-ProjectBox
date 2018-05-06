#ifndef BOX_HPP_INCLUDED 
#define BOX_HPP_INCLUDED

class Box {
private:
    bool key;
public:
    static int objectCount; //permutation and combination math m.6
    Box(bool=false); //constructor
    void swap();
    void open();
};

int Box::objectCount = 0;

Box::Box(bool value) {
    key = value;
    objectCount++;
}

#endif // BOX_HPP_INCLUDED