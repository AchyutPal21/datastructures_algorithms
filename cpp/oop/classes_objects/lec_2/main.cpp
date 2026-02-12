#include <iostream>
#include <string>
#include <vector>

class Player {
  private:
    std::string name;
    int health;
    int xp;
  public:
    // Overloaded Constructor
    Player() {
      std::cout << "Default constructor called" << std::endl;
    }

    Player(std::string name) {
      std::cout << "(name) constructor called" << std::endl;
    }

    // This format is called constructor initialization list
    // This way help in initialization not in assignment we do in traditional manner
    // name = name; health = health; in the body of the constructor 
    Player(std::string name, int health) : name{name}, health{health} {

    }

    Player(std::string name, int health, int xp) {
      std::cout << "(name, health, xp) constructor called" << std::endl;
    }

    // C++ allows delegation constructor
    // code for one constructor can call another in the initialization list
    // avoids duplicating code, we can define the constructor definition in revers order (i.e.with all parameters to minimal args)
    // Player(arg1, arg2, arg3, arg4, arg5):arg1{arg1}, arg2{arg2},....arg5{arg5}
    // Player(arg1, arg2, arg3, arg4):arg1{arg1},....arg4{arg4}
    // Player(arg1, arg2, arg3):arg1{arg1},....arg3{arg3}
    // Player(arg1, arg2):arg1{arg1}, arg2{arg2}
    // Player(arg1):arg1{arg1}

    // copy constructor
    Player(const Player &player);


    // Destructor
    ~Player() {
      std::cout << "Destructor is called for " << name << std::endl;
    }

    void talk(std::string text_to_say) {
      std::cout << this->name + " says " + text_to_say << std::endl; 
    }

    bool is_dead();
};

// copy constructor
Player::Player(const Player &player) : name{player.name}, health{player.health}, xp{player.xp} {
  std::cout << "Copy constructor is called" << std::endl;
}

bool Player::is_dead() {
  if (this->health <= 0) return false;

  return true;
}


int main(int argc, char const *argv[]) {
  // These four will call different overloaded constructor and 4 times destructor will get called implicitly when they are out of scope 
  Player slayer;
  Player enemy("Enemy", 100, 0);
  Player frank {"Frank", 100, 4};
  Player hero {"Hero"};
  Player villain {"Villain"};

  // Constructor called and here destructor will only get called when we delete the player
  Player *player = new Player("Enemy", 1000, 0);
  delete player;

  return 0;
}
