#ifndef MENU_HPP_INCLUDED 
#define MENU_HPP_INCLUDED

int menu() {
    //add some fancy menu here
    int choice;
    std::cin >> choice; //may change workaround to sth like getch()
    return choice;
}

#endif // MENU_HPP_INCLUDED