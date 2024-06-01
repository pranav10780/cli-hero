//we need an hero amd enemies
//turn based cli game
#include <iostream>
using namespace std;
int debug = 0;

class characters{
  int hp;
  string name;
  int atk;

  public:
    characters(int hp,int atk,string name = "Enemy"){
      //cout << "name:" << name << "hp:" <<hp << "atk:" << atk << endl;
      string details = "name: " + name + " hp: " + to_string(hp) + " atk: " + to_string(atk);
      cout << details << endl;
    }
};

int main(){
  characters player(200,60,"pranav");
}
