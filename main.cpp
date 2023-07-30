#include <iostream>
#include <string>

int main() {
  double earthWeight = 0.0;
  int planetNumber;
  double planetWeight;

  std::cout << "Whats ur earth weight?\n";
  std::cin >> earthWeight;
  
  std::cout << "1.Mercury\n 2.Venus\n 3.Mars\n 4.Jupiter\n 5.Saturn\n 6.Uranus\n 7.Neptune\n ";
  std::cout << "Whats ur planet number?\n";
  std::cin >> planetNumber;

  if (planetNumber == 1) {
    planetWeight = (earthWeight/0.98) * 0.38;
  } else if (planetNumber == 2) {
    planetWeight = (earthWeight/0.98) * 0.91;
  } else if (planetNumber == 3) {
    planetWeight = (earthWeight/0.98) * 0.38;
  } else if (planetNumber == 4) {
    planetWeight = (earthWeight/0.98) * 2.34;
  } else if (planetNumber == 5) {
    planetWeight = (earthWeight/0.98) * 1.06;
  } else if (planetNumber == 6) {
    planetWeight = (earthWeight/0.98) * 0.92;
  } else if (planetNumber == 7) {
    planetWeight = (earthWeight/0.98) * 1.19;
  } else {
    std::cout << "ngga ada planetnya kocak\n";
    return 0;
  }
   
  
  std::cout << "ur weight is: " << planetWeight << "\n";
}