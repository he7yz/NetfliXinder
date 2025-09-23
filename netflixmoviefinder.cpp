#include <iostream>
#include <iomanip>
#include <vector>
#include <string>
#include <limits> // for numeric stuffs
// might need to include more later on, up to you guys

using namespace std;

class NetfliXinder;

class NetfliXinder {
private:
  void pauseScreen() const {
        cout << "\nPress Enter to continue...";
        cin.get();
    }

  void clrScreen() const {
    #ifndef _WIN32
      system("cls");
    #else
      system("clear");
    #endif
  }

  int getUserChoice(int min, int max) const {
    int choice;
    while (true) {
      cout << "Please enter a number as your choice (" << min << "-" << max << "): ";
      cin >> choice;

      if (cin.fail() || choice < min || choice > max) {
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        cout << "Invalid choice given... Retry again.\n";
      } else {
        cin.ignore();
        return choice;
      }
    }
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
	     \/     \/                          \_/        \/      \/    \/             `.  .'
                                                                                          \/
    )" << '\n';
    pauseScreen();

    while (true) {
      mainMenu();
      
      int choice = getUserChoice(0,5);
      switch (choice) {
        case 1:
          // func for all movies here
          break;
        case 2:
          // func for search by genre here
          break;
        case 3:
          // func for search by title here
          break;
        case 4:
          // func for top best movies here
          break;
        case 5:
          // func for randomizer here
          break;
        case 0:
          // func to exit app
          cout << "NetfliXinder Exiting...\n";
          cout << R"(                                           ++  -:                                                   
                                                =-                                                  
                                                 ++-                                                
                                             :***=#=-..                                             
                                          *########*=-=-+..                                         
                                       #####**#*#***-+**####**                                      
                                    ###%%*=====*#*****----:---#*                                    
                                   ##%===--====----------:::::--#+                                  
                                 +#%+=======+++=+==----=+=-==-----%                                 
                                +##+====*%@@@@@%*+==--+*@+:::+@%+==#*                               
                               #+%+==+*@-::--:::@+==-==%=@##@=::##=*#*                  =-          
                             :#*%+===#*:-@###@#-:%+=--=*@%%%*%=::%+=***+               #*           
                            =*###+===@-:#%*%%%@+-*===---+@@%*@-:::==%*#                *#**=*=-==-  
             =-            ++#**@+===@--=#%*@@%=------:-::----+=+==*%*            *=###%%%#+=-#  -= 
     -----*++**  +         +@@@@%@+===%--+#=====+++++==========+++=*#+          ***=#%####*+---:=-  
   =----=#**###++#*=-      +@%@@*%%====+======+++++++++++++++++++****:       *********##            
    ==-   +***#%@#*+*++-    **#%%@%#+++++++++++++++++++++++++++++***%-    =***#******++             
              ***#*********  ==*%@#*+++++++++++++++++++++++++++++***#-  +***###*****=               
                ++*****#***=*+++#%%#*++=======++++++++++====+++++**#=  **##*****+++                 
                  =******###****###%**+++==========+=========++++=*+ **#***++++                     
                      +=++******#%%@+++====+=+===================#  ****++++                        
                          -++++**#*------====++++++++++====--:    +===++                            
                              +++==+=   +#*----==*****#+:       =====                               
                                =-====+-         #***#=       +===-                                 
                                    -====+= :    #####*  ##*+==--                                   
                                       -===+###%***#**+++#*====                                     
                                         -==+**%++*+=====%*==                                       
                                            ****=++*+===+=-:                                        
                                          :==+-+=++##**#=+==--                                      
                                        ====-=-++++#*****+===:::                                    
                                      -:==-===-=++##**+**++=---=-                                   
                                    -==---=---==+=#***+**%+=======-                                 
                                  -========- :+**#*****+***=========                                
                                 -=====-===- :+*******++****=---====--                              
                               -====--===-=  :*+***+++++=+++-=========-                             
            )" << '\n';
          cout << "Bye-bye!\n";
          return;
      }
      
    }
  }

  void mainMenu() {
    cout << "NetfliXinder Movie Search\n";
    cout << "[]==============================================================================================[]\n";
    cout << "[1] List All Movies\n";
    cout << "[2] Search by Genre\n";
    cout << "[3] Search by Title\n";
    cout << "[4] Top Best Movies\n";
    cout << "[5] Movie Suggestion Randomizer\n";
    cout << "[0] X Exit NetfliXinder X\n";
    cout << "[]==============================================================================================[]\n";
  }
};

int main() {
  NetfliXinder app;
  app.run();

  return 0;
}


