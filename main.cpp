#include <iostream>
using namespace std;
int debug = 0;

class characters {
  public:
  unsigned int hp;
  string name;
  unsigned atk;

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

    int menu(){
      cout << ":::[1]Attack   [2]Bag   [3]Try to run   [4]Show battle   [5]Exit" << endl;
      unsigned int choice;
      cin >> choice;
      return choice;
    }
};

int main() {
  characters player(200, 60, "pranav");
  characters enemy(150, 40);
  unsigned int choice;
  while(1){
    choice = player.menu();
    if(choice==1){
      enemy.hp -= player.atk;
      cout << "Enemy's hp: " << enemy.hp << endl;
      if(enemy.hp<=0){
        cout << "Enemy gone" << endl;
      }
    } else {
      cout << "test";
    }
  }
}

