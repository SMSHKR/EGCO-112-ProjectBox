#ifndef BOX_HPP_INCLUDED 
#define BOX_HPP_INCLUDED

class box {
private:
    bool key;
public:
    box(bool=false); //constructor
    void swap();
    void open();
};

box::box(bool value) {
    key = value;
}

#endif // BOX_HPP_INCLUDED