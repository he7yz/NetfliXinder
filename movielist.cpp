  struct Movie {
    string title;
    string genre;
    double rating;
    int year;
  };

  vector<Movie> movies;

  void initMovies() {
    // Action Movies
    movies.push_back({"The Dark Knight", "Action", 9.0, 2008});
    movies.push_back({"Inception", "Action", 8.8, 2010});
    movies.push_back({"Mad Max: Fury Road", "Action", 8.1, 2015});
    movies.push_back({"John Wick", "Action", 7.4, 2014});

    // Comedy Movies
    movies.push_back({"The Hangover", "Comedy", 7.7, 2009});
    movies.push_back({"Superbad", "Comedy", 7.6, 2007});
    movies.push_back({"Knocked Up", "Comedy", 6.9, 2007});
    movies.push_back({"Bridesmaids", "Comedy", 6.8, 2011});

    // Drama Movies
    movies.push_back({"The Shawshank Redemption", "Drama", 9.3, 1994});
    movies.push_back({"Forrest Gump", "Drama", 8.8, 1994});
    movies.push_back({"Fight Club", "Drama", 8.8, 1999});
    movies.push_back({"Good Will Hunting", "Drama", 8.3, 1997});

    // Horror Movies
    movies.push_back({"The Conjuring", "Horror", 7.5, 2013});
    movies.push_back({"It", "Horror", 7.3, 2017});
    movies.push_back({"Get Out", "Horror", 7.8, 2017});
    movies.push_back({"Hereditary", "Horror", 7.3, 2018});

    // Sci-Fi Movies
    movies.push_back({"Interstellar", "Sci-Fi", 8.7, 2014});
    movies.push_back({"The Matrix", "Sci-Fi", 8.7, 1999});
    movies.push_back({"Blade Runner 2049", "Sci-Fi", 8.0, 2017});
    movies.push_back({"Dune", "Sci-Fi", 8.0, 2021});
  }

  void listAllMovies() const {
    clrScreen();
    cout << "List of All Movies\n";
    cout << "[]==============================================================================================[]\n";
    
    vector<Movie> shuffled = movies;
    std::random_device rd;
    std::default_random_engine rng(rd());
    std::shuffle(std::begin(shuffled), std::end(shuffled), rng);
    
    for (size_t i = 0; i < shuffled.size(); ++i) {
      cout << "[" << (i + 1) << "] " << shuffled[i].title << endl;
    }
    cout << "[]==============================================================================================[]\n";
    pauseScreen();
  }

  void pauseScreen() const {
    cout << "\nPress Enter to continue...\n";
    cin.get();
  }

  void clrScreen() const {
    #ifdef _WIN32
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
  NetfliXinder() {
    initMovies();
  }

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
          listAllMovies();
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
