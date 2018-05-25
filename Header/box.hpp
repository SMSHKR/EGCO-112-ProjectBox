#ifndef BOX_HPP_INCLUDED 
#define BOX_HPP_INCLUDED

class Box {
friend void swap(Box*&,Box*&); //สลับกล่อง
private:
    bool key;
    short x, y; //COORD
public:
    Box *next = nullptr;
    Box *prev = nullptr;
    static int objectCount;
    
    Box(bool=false); //constructor
    ~Box(); //destructor

    void black(); //วาดช่องว่างทับกล่อง
    void draw();    //สำหรับวาดกล่อง
    void draw_color(); //วาดกล่องแบบมีสี
    void draw_cursor(); //วาดตัวศรสำหรับเลื่อน 
    void move_cursor(); //เลื่อนตัวลูกศร
    void setxy(short,short); //set พิกัด xy ของกล่อง
    void append(Box*); //กล่องมาต่อกัน
    bool open(Box*&,Box*); //เปิดกล่อง
};

#endif // BOX_HPP_INCLUDED