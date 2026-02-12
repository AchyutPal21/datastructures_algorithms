#include <iostream>
#include <string>
#include <vector>

#include "Account.h"


class Player {
  public:
    std::string name {"player"};
    int health {100};
    int xp {0};

    // Inside declaration
    void talk(std::string text_to_say) {
      std::cout << this->name + " says " + text_to_say << std::endl; 
    }

    bool is_dead();
};

// Outside declaration with class scope resolution operator
bool Player::is_dead() {
  if (this->health <= 0) return false;

  return true;
}


int main(int argc, char const *argv[]) {
  // Player playerOne;
  // Player playerTwo;

  // Player *playerDev = new Player();

  // std::cout << playerOne.name << " " << playerTwo.xp << std::endl;
  // std::cout << playerDev->name << " " << playerDev->xp << std::endl;

  // delete playerDev;

  // -------------------------------------------------
  Account frank_account;
  frank_account.set_balance(60000.58);
  std::cout << "Avl. bal: " << frank_account.get_balance() << std::endl;

  return 0;
}
