#include <iostream>

class Animal {
 private:
  int food;
  int weight;

 public:
  void set_animal(int _food, int _weight) {
    food = _food; // 객체 자신의 변수이기 때문에 그냥 사용해도 됨.(명시x)
    weight = _weight;
  }
  void increase_food(int inc) {
    food += inc;
    weight += (inc / 3);
  }
  void view_stat() {
    std::cout << "이 동물의 food   : " << food << std::endl;
    std::cout << "이 동물의 weight : " << weight << std::endl;
  }
};

int main() {
  Animal animal;
  animal.set_animal(100, 50);
//   animal.food = 110; // food가 private이기 때문에 오류 발생
  animal.increase_food(30);

  animal.view_stat();
  return 0;
}