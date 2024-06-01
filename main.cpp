#include <iostream>
using namespace std;
int debug = 1;

class characters {
  unsigned int hp;
  string name;
  unsigned atk;

  public:
    characters(int hp, int atk, string name = "Enemy") : hp(hp), atk(atk), name(name) {
      if (debug) {
        string details = "name: " + name + " hp: " + to_string(hp) + " atk: " + to_string(atk);
        cout << details << endl;
      }
    }

    void display_battle(characters& player, characters& enemy) {
      cout << "name: " << player.name << " hp: " << player.hp << " atk: " << player.atk << endl;
      cout << "\n" << endl;
      cout << "«" << player.name << "»\t" << "«" << enemy.name << "»" << endl;
      cout << "\n" << endl;
      cout << "name: " << enemy.name << " hp: " << enemy.hp << " atk: " << enemy.atk << endl;
    }
};

int main() {
  characters player(200, 60, "pranav");
  characters enemy(150, 40);
  player.display_battle(player, enemy);
}

