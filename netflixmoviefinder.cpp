#include <iostream>
#include <iomanip>
#include <vector>
#include <string>
// might need to include more later on

using namespace std;

class NetfliXinder;

class NetfliXinder {
private:
  void pauseScreen() const {
        cout << "\nPress Enter to continue...";
        cin.ignore();
        cin.get();
    }
public:
  NetfliXinder() {}

  void run() {
     cout << R"(
      _______          __    _____.__  .______  ___.__            .___                    /\
      \      \   _____/  |__/ ____\  | |__\   \/  /|__| ____    __| _/___________       .'  `.
      /   |   \_/ __ \   __\   __\|  | |  |\     / |  |/    \  / __ |/ __ \_  __ \    .'      `.
     /    |    \  ___/|  |  |  |  |  |_|  |/     \ |  |   |  \/ /_/ \  ___/|  | \/   <          >
     \____|__  /\___  >__|  |__|  |____/__/___/\  \|__|___|  /\____ |\___  >__|       `.      .'
	      \/     \/                          \_/        \/      \/    \/           `.  .'
                                                                                          \/
    )" << '\n';
    pauseScreen();

  }
};

int main() {
  NetfliXinder app;
  app.run();

  return 0;
}

