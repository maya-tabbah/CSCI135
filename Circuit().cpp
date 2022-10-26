#include <iostream>
#include <vector>
using namespace std;

/* Simulate a circuit for controlling a hallway light that has switches at both ends of  the hallway. Each switch can be up or down, and the light can be on or off. Toggling  either switch turns the lamp on or off.
Provide member functions
int get_first_switch_state()// 0 for down, 1 for up
int get_second_switch_state()
int get_lamp_state()// 0 for off, 1 for on
void toggle_first_switch()
void toggle_second_switch()

Cay S. Horstmann. Brief C++: Late Objects, 3rd Edition (p. EX9-3). Wiley. Kindle Edition. */

class Circuit
{
    
private:
    bool lamp = false;
    bool switch1 = false;
    bool switch2 = false;
    
public:
    int get_first_switch_state(){
        return switch1;
    }
    int get_second_switch_state(){
        return switch2;
    }
    int get_lamp_state(){
        return lamp;
    }
    void toggle_first_switch(){
        switch1 =! switch1;
        lamp =! lamp;
    }
    void toggle_second_switch(){
        switch2 =! switch2;
        lamp =! lamp;
    }

        
};


int main() {
  
}
