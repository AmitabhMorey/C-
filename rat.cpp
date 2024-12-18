// #include <iostream>
// #include <cstdlib>
// #include <cstdio>
// #include <ctime>
// #include <cmath>

// class MacVirus {
// private:
//     std::string name;
//     int spreadRate;

// public:
//     MacVirus(const std::string& virusName, int infectionRate) : name(virusName), spreadRate(infectionRate) {}
//     void infect() {
//         std::cout << "The " << name << " virus infects your MacBook Air M2..." << std::endl;
//         Sleep(1);
//         for (int i = 0; i < 100 * spreadRate; ++i) {
//             std::cout << "Your MacBook Air M2 is more infected! ";
//             Sleep(1);
//         }
//         std::cout << "Unfortunately, there's no antivirus for the " << name << " virus! Your MacBook Air M2 is destroyed!" << std::endl;
//     }
// };

// int main() {
//     MacVirus virus("TheVenice", 0.5);

//     std::cout << "Starting a program..." << std::endl;
//     Sleep(2);

//     try {
//         throw std::exception("Oops! Something went wrong.");
//     } catch (const std::exception& e) {
//         std::cerr << "Error: " << e.what() << ", prepare for the " << virus.name << " virus!" << std::endl;
//         virus.infect();
//     }

//     std::cout << "Program ended..." << std::endl;
//     return 0;
// }