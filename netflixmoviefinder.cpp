#include <iostream>
#include <iomanip>
#include <vector>
#include <string>
#include <limits> // for numeric stuffs
#include <algorithm> // for std::shuffle
#include <random>    // for std::default_random_engine
#include <cctype>    // for toupper

using namespace std;

class NetfliXinder {
private:
  struct Movie {
    string title;
    string genre;
    double rating;
    int year;
    string description;
    string director;
    string actors;
  };

  vector<Movie> movies;

  void initMovies() {
    // Action Movies
    movies.push_back({"Die Hard", "Action", 8.2, 1988,
                      "An NYPD officer tries to save his wife and several others taken hostage by German terrorists during a Christmas party at the Nakatomi Plaza in Los Angeles.",
                      "John McTiernan",
                      "Bruce Willis, Alan Rickman, Bonnie Bedelia, Reginald VelJohnson"});

    movies.push_back({"The Dark Knight", "Action", 9.0, 2008,
                      "When the menace known as the Joker wreaks havoc and chaos on the people of Gotham, Batman must accept one of the greatest psychological and physical tests of his ability to fight injustice.",
                      "Christopher Nolan",
                      "Christian Bale, Heath Ledger, Aaron Eckhart, Michael Caine"});
    
    movies.push_back({"Mad Max: Fury Road", "Action", 8.1, 2015,
                      "In a post-apocalyptic wasteland, a woman rebels against a tyrannical ruler in search of her homeland with the aid of a group of female prisoners, a psychotic worshiper, and a drifter named Max.",
                      "George Miller",
                      "Tom Hardy, Charlize Theron, Nicholas Hoult, Hugh Keays-Byrne"});
    
    movies.push_back({"Inception", "Action", 8.8, 2010,
                      "A thief who steals corporate secrets through the use of dream-sharing technology is given the inverse task of planting an idea into the mind of a C.E.O.",
                      "Christopher Nolan",
                      "Leonardo DiCaprio, Joseph Gordon-Levitt, Elliot Page, Tom Hardy"});
    
    movies.push_back({"The Matrix", "Action", 8.7, 1999,
                      "A computer hacker learns from mysterious rebels about the true nature of his reality and his role in the war against its controllers.",
                      "Lana Wachowski, Lilly Wachowski",
                      "Keanu Reeves, Laurence Fishburne, Carrie-Anne Moss, Hugo Weaving"});
    
    movies.push_back({"Gladiator", "Action", 8.5, 2000,
                      "A former Roman General sets out to exact vengeance against the corrupt emperor who murdered his family and sent him into slavery.",
                      "Ridley Scott",
                      "Russell Crowe, Joaquin Phoenix, Connie Nielsen, Oliver Reed"});
    
    movies.push_back({"Kill Bill: Vol. 1", "Action", 8.2, 2003,
                      "After awakening from a four-year coma, a former assassin seeks revenge on the team of assassins who betrayed her.",
                      "Quentin Tarantino",
                      "Uma Thurman, David Carradine, Daryl Hannah, Michael Madsen"});
    
    movies.push_back({"Raiders of the Lost Ark", "Action", 8.4, 1981,
                      "In 1936, archaeologist and adventurer Indiana Jones is hired by the U.S. government to find the Ark of the Covenant before the Nazis can obtain its awesome powers.",
                      "Steven Spielberg",
                      "Harrison Ford, Karen Allen, Paul Freeman, Ronald Lacey"});
    
    movies.push_back({"Terminator 2: Judgment Day", "Action", 8.6, 1991,
                      "A cyborg, identical to the one who failed to kill Sarah Connor, must now protect her teenage son John Connor from a more advanced and powerful cyborg.",
                      "James Cameron",
                      "Arnold Schwarzenegger, Linda Hamilton, Edward Furlong, Robert Patrick"});
    
    movies.push_back({"Mission: Impossible - Fallout", "Action", 7.7, 2018,
                      "Ethan Hunt and his IMF team pursue a deadly rogue agent who has stolen a deadly bioweapon.",
                      "Christopher McQuarrie",
                      "Tom Cruise, Henry Cavill, Ving Rhames, Simon Pegg"});
    

    // Comedy Movies
    movies.push_back({"The Hangover", "Comedy", 7.7, 2009,
                      "Three buddies wake up from a bachelor party in Las Vegas, with no memory of the previous night and one of their friends missing. They must find their friend before his wedding.",
                      "Todd Phillips",
                      "Bradley Cooper, Ed Helms, Zach Galifianakis, Justin Bartha"});

    movies.push_back({"Superbad", "Comedy", 7.6, 2007,
                      "Two co-dependent high school seniors are forced to deal with separation anxiety after their plan to sneak alcohol into a party fails, which leads to a visit with the cop who just might be their ticket to freedom.",
                      "Greg Mottola",
                      "Jonah Hill, Michael Cera, Christopher Mintz-Plasse, Seth Rogen"});
    
    movies.push_back({"Anchorman: The Legend of Ron Burgundy", "Comedy", 7.1, 2004,
                      "Ron Burgundy is San Diego's top-rated newsman in the male-dominated broadcasting of the 1970s, but that's all about to change when a young woman is hired as a co-anchor.",
                      "Adam McKay",
                      "Will Ferrell, Christina Applegate, Steve Carell, Paul Rudd"});
    
    movies.push_back({"Monty Python and the Holy Grail", "Comedy", 8.2, 1975,
                      "King Arthur and his Knights of the Round Table embark on a surreal, low-budget quest for the Holy Grail, encountering many, very silly obstacles.",
                      "Terry Gilliam, Terry Jones",
                      "Graham Chapman, John Cleese, Terry Gilliam, Eric Idle"});
    
    movies.push_back({"Groundhog Day", "Comedy", 8.0, 1993,
                      "A weatherman finds himself inexplicably living the same day over and over again.",
                      "Harold Ramis",
                      "Bill Murray, Andie MacDowell, Chris Elliott, Stephen Tobolowsky"});
    
    movies.push_back({"Airplane!", "Comedy", 7.7, 1980,
                      "A man afraid to fly must ensure that a plane lands safely after the pilots become sick.",
                      "Jim Abrahams, David Zucker, Jerry Zucker",
                      "Robert Hays, Julie Hagerty, Leslie Nielsen, Kareem Abdul-Jabbar"});
    
    movies.push_back({"Dumb and Dumber", "Comedy", 7.3, 1994,
                      "The cross-country adventures of two good-hearted but incredibly stupid friends.",
                      "Peter Farrelly, Bobby Farrelly",
                      "Jim Carrey, Jeff Daniels, Lauren Holly, Rob Riggle"});
    
    movies.push_back({"Bridesmaids", "Comedy", 6.8, 2011,
                      "Competition between the maid of honor and a bridesmaid, over who is the bride's best friend, threatens to upend the life of an out-of-work pastry chef.",
                      "Paul Feig",
                      "Kristen Wiig, Maya Rudolph, Rose Byrne, Terry Crews"});
    
    movies.push_back({"Step Brothers", "Comedy", 6.9, 2008,
                      "Two spoiled men become competitive stepbrothers when their single parents get married.",
                      "Adam McKay",
                      "Will Ferrell, John C. Reilly, Mary Steenburgen, Richard Jenkins"});
    
    movies.push_back({"Knocked Up", "Comedy", 6.9, 2007,
                      "For fun loving party animal Ben Stone, the last thing he ever expected was for his one night stand to show up on his doorstep eight weeks later to tell him she's pregnant.",
                      "Judd Apatow",
                      "Seth Rogen, Katherine Heigl, Paul Rudd, Leslie Mann"});
    

    // Drama Movies
    movies.push_back({"The Shawshank Redemption", "Drama", 9.3, 1994,
                      "Two imprisoned men bond over a number of years, finding solace and eventual redemption through acts of common decency.",
                      "Frank Darabont",
                      "Tim Robbins, Morgan Freeman, Bob Gunton, William Sadler"});

    movies.push_back({"Forrest Gump", "Drama", 8.8, 1994,
                      "The history of the United States from the 1950s to the '70s unfolds from the perspective of an Alabama man with an IQ of 75, who yearns to be reunited with his childhood sweetheart.",
                      "Robert Zemeckis",
                      "Tom Hanks, Robin Wright, Gary Sinise, Sally Field"});
    
    movies.push_back({"Schindler's List", "Drama", 9.0, 1993,
                      "In German-occupied Poland during World War II, industrialist Oskar Schindler gradually becomes concerned for his Jewish workforce after witnessing their persecution by the Nazis.",
                      "Steven Spielberg",
                      "Liam Neeson, Ralph Fiennes, Ben Kingsley, Caroline Goodall"});
    
    movies.push_back({"Fight Club", "Drama", 8.8, 1999,
                      "An insomniac office worker and a devil-may-care soap maker form an underground fight club that evolves into something much more.",
                      "David Fincher",
                      "Brad Pitt, Edward Norton, Helena Bonham Carter, Meat Loaf"});
    
    movies.push_back({"Goodfellas", "Drama", 8.7, 1990,
                      "The story of Henry Hill and his life in the mob, covering his relationship with his wife Karen Hill and his mob partners Jimmy Conway and Tommy DeVito in the Italian-American crime syndicate.",
                      "Martin Scorsese",
                      "Robert De Niro, Ray Liotta, Joe Pesci, Lorraine Bracco"});
    
    movies.push_back({"The Godfather", "Drama", 9.2, 1972,
                      "The aging patriarch of an organized crime dynasty transfers control of his clandestine empire to his reluctant son.",
                      "Francis Ford Coppola",
                      "Marlon Brando, Al Pacino, James Caan, Richard S. Castellano"});
    
    movies.push_back({"Pulp Fiction", "Drama", 8.9, 1994,
                      "The lives of two mob hitmen, a boxer, a gangster and his wife, and a pair of diner bandits intertwine in four tales of violence and redemption.",
                      "Quentin Tarantino",
                      "John Travolta, Uma Thurman, Samuel L. Jackson, Bruce Willis"});
    
    movies.push_back({"12 Angry Men", "Drama", 9.0, 1957,
                      "The jury in a New York City murder trial is frustrated by a single member whose skeptical caution forces them to more carefully consider the evidence before jumping to a hasty verdict.",
                      "Sidney Lumet",
                      "Henry Fonda, Lee J. Cobb, Martin Balsam, John Fiedler"});
    
    movies.push_back({"The Green Mile", "Drama", 8.6, 1999,
                      "The lives of guards on Death Row are affected by one of their charges: a black man accused of child murder and rape, yet who has a mysterious gift.",
                      "Frank Darabont",
                      "Tom Hanks, Michael Clarke Duncan, David Morse, Bonnie Hunt"});
    
    movies.push_back({"Saving Private Ryan", "Drama", 8.6, 1998,
                      "Following the Normandy Landings, a group of U.S. soldiers go behind enemy lines to retrieve a paratrooper whose brothers have been killed in action.",
                      "Steven Spielberg",
                      "Tom Hanks, Edward Burns, Tom Sizemore, Jeremy Davies"});

    // Horror Movies
    movies.push_back({"The Exorcist", "Horror", 8.1, 1973,
                      "When a teenage girl is possessed by a mysterious entity, her mother seeks the help of two priests to save her.",
                      "William Friedkin",
                      "Ellen Burstyn, Linda Blair, Jason Miller, Max von Sydow"});

    movies.push_back({"Psycho", "Horror", 8.5, 1960,
                      "A Phoenix secretary embezzles $40,000 from her employer's client, goes on the run, and checks into a remote motel run by a young man under the domination of his mother.",
                      "Alfred Hitchcock",
                      "Anthony Perkins, Janet Leigh, Vera Miles, John Gavin"});
    
    movies.push_back({"The Shining", "Horror", 8.4, 1980,
                      "A family heads to an isolated hotel for the winter where a sinister presence influences the father into violence, while his psychic son sees horrific forebodings from both past and future.",
                      "Stanley Kubrick",
                      "Jack Nicholson, Shelley Duvall, Danny Lloyd, Scatman Crothers"});
    
    movies.push_back({"Alien", "Horror", 8.5, 1979,
                      "The crew of a commercial spacecraft encounter a deadly lifeform after investigating a mysterious transmission from a nearby planet.",
                      "Ridley Scott",
                      "Sigourney Weaver, Tom Skerritt, John Hurt, Veronica Cartwright"});
    
    movies.push_back({"Jaws", "Horror", 8.1, 1975,
                      "A local sheriff, a marine biologist, and an old seafarer team up to hunt down a great white shark terrorizing a beach community.",
                      "Steven Spielberg",
                      "Roy Scheider, Robert Shaw, Richard Dreyfuss, Lorraine Gary"});
    
    movies.push_back({"Get Out", "Horror", 7.8, 2017,
                      "A young African-American man visits his white girlfriend's parents for the weekend, where his simmering uneasiness about their reception of him eventually reaches a boiling point.",
                      "Jordan Peele",
                      "Daniel Kaluuya, Allison Williams, Bradley Whitford, Caleb Landry Jones"});
    
    movies.push_back({"Hereditary", "Horror", 7.3, 2018,
                      "When her mentally ill mother passes away, a woman and her family are haunted by terrible secrets from the past.",
                      "Ari Aster",
                      "Toni Collette, Alex Wolff, Milly Shapiro, Gabriel Byrne"});
    
    movies.push_back({"The Conjuring", "Horror", 7.5, 2013,
                      "Paranormal investigators Ed and Lorraine Warren work to help a family terrorized by a dark presence in their farmhouse.",
                      "James Wan",
                      "Vera Farmiga, Patrick Wilson, Ron Livingston, Lili Taylor"});
    
    movies.push_back({"It", "Horror", 7.3, 2017,
                      "In the summer of 1989, a group of bullied kids band together to destroy a shape-shifting monster that disguises itself as a clown and preys on the children of Derry.",
                      "Andy Muschietti",
                      "Jaeden Martell, Sophia Lillis, Jack Dylan Grazer, Wyatt Oleff"});
    
    movies.push_back({"Halloween", "Horror", 7.7, 1978,
                      "Fifteen years after murdering his sister on Halloween night 1963, Michael Myers escapes from a mental hospital and returns to the small town where he committed the murder, where he stalks his sister and her friends.",
                      "John Carpenter",
                      "Jamie Lee Curtis, Donald Pleasence, Nancy Loomis, P. J. Soles"});
    
    // Sci-Fi Movies
    movies.push_back({"2001: A Space Odyssey", "Sci-Fi", 8.3, 1968,
                      "After discovering a mysterious artifact buried on the Moon, humanity embarks on a quest to Jupiter with the sentient computer HAL in order to seek and possibly eliminate any threat to humanity's survival.",
                      "Stanley Kubrick",
                      "Keir Dullea, Gary Lockwood, William Sylvester, Daniel Richter"});

    movies.push_back({"Blade Runner", "Sci-Fi", 8.1, 1982,
                      "A blade runner must pursue and terminate four replicants who stole a ship in space and have returned to Earth to find their creator.",
                      "Ridley Scott",
                      "Harrison Ford, Rutger Hauer, Sean Young, Edward James Olmos"});
    
    movies.push_back({"Star Wars: Episode IV - A New Hope", "Sci-Fi", 8.6, 1977,
                      "Luke Skywalker joins forces with a Jedi Knight, a cocky pilot, a Wookiee, and two droids to save the galaxy from the Empire's world-destroying battle station, while also attempting to rescue a Princess from an evil warlord.",
                      "George Lucas",
                      "Mark Hamill, Harrison Ford, Carrie Fisher, Peter Cushing"});
    
    movies.push_back({"Interstellar", "Sci-Fi", 8.7, 2014,
                      "A team of explorers travel through a wormhole in space in an attempt to ensure humanity's survival.",
                      "Christopher Nolan",
                      "Matthew McConaughey, Anne Hathaway, Jessica Chastain, Mackenzie Foy"});
    
    movies.push_back({"The Empire Strikes Back", "Sci-Fi", 8.7, 1980,
                      "After the Rebels are brutally overpowered by the Empire on the ice planet Hoth, Luke Skywalker begins Jedi training with Yoda, while his friends are pursued by Darth Vader.",
                      "Irvin Kershner",
                      "Mark Hamill, Harrison Ford, Carrie Fisher, Billy Dee Williams"});
    
    movies.push_back({"Back to the Future", "Sci-Fi", 8.5, 1985,
                      "Marty McFly, a 17-year-old high school student, is accidentally sent thirty years into the past in a time-traveling DeLorean invented by his close friend, Dr. Emmett Brown.",
                      "Robert Zemeckis",
                      "Michael J. Fox, Christopher Lloyd, Lea Thompson, Crispin Glover"});
    
    movies.push_back({"E.T. the Extra-Terrestrial", "Sci-Fi", 7.9, 1982,
                      "A troubled child summons the courage to help a friendly alien escape Earth and return to his home planet.",
                      "Steven Spielberg",
                      "Henry Thomas, Drew Barrymore, Dee Wallace, Peter Coyote"});
    
    movies.push_back({"Dune", "Sci-Fi", 8.0, 2021,
                      "A young nobleman is thrust into a dangerous quest when his family is targeted by a ruthless interstellar empire.",
                      "Denis Villeneuve",
                      "Timothée Chalamet, Rebecca Ferguson, Zendaya, Oscar Isaac"});
    
    movies.push_back({"Arrival", "Sci-Fi", 7.9, 2016,
                      "A linguist works with the military to communicate with alien lifeforms after twelve mysterious spacecraft appear around the world.",
                      "Denis Villeneuve",
                      "Amy Adams, Jeremy Renner, Forest Whitaker, Michael Stuhlbarg"});
    
    movies.push_back({"Gravity", "Sci-Fi", 7.7, 2013,
                      "Two astronauts work together to survive a disaster aboard the International Space Station and return to Earth.",
                      "Alfonso Cuarón",
                      "Sandra Bullock, George Clooney, Ed Harris, Ortoya Scanderi"});
  }

  void displayMovieInfo(const Movie &movie) const {
    clrScreen();
    cout << "Movie Information\n";
    cout << "[]==============================================================================================[]\n";
    cout << "Title: " << movie.title << endl;
    cout << "Rating: " << fixed << setprecision(1) << movie.rating << "/10" << endl;
    cout << "Genre: " << movie.genre << endl;
    cout << "Description: " << movie.description << endl;
    cout << "Director: " << movie.director << endl;
    cout << "Starring: " << movie.actors << endl;
    cout << "Year: " << movie.year << endl;
    cout << "[]==============================================================================================[]\n";
    pauseScreen();
  }

  void listAllMovies() const {
    clrScreen();
    cout << "List of All Movies\n";
    cout << "[]==============================================================================================[]\n";
    
    vector<Movie> shuffled = movies;
    random_device rd;
    default_random_engine rng(rd());
    shuffle(begin(shuffled), end(shuffled), rng);
    
    for (size_t i = 0; i < shuffled.size(); ++i) {
      cout << "[" << (i + 1) << "] " << shuffled[i].title << endl;
    }
    cout << "[]==============================================================================================[]\n";

    cout << "\nEnter 0 to return to menu or select a movie number to view details";
    int choice = getUserChoice(0, (int)shuffled.size());
    if (choice != 0) {
      displayMovieInfo(shuffled[choice - 1]);
    }
  }

  void searchByGenre() const {
    clrScreen();
    cout << "Search Movies by Genre\n";
    cout << "[]==============================================================================================[]\n";
    cout << "Available Genres:\n";
    cout << "A - Action\n";
    cout << "C - Comedy\n";
    cout << "D - Drama\n";
    cout << "H - Horror\n";
    cout << "S - Sci-Fi\n";
    cout << "[]==============================================================================================[]\n";
    cout << "Enter first letter of genre (A/C/D/H/S): ";
    char input;
    cin >> input;
    cin.ignore(numeric_limits<streamsize>::max(), '\n'); // Clear buffer

    input = toupper(input);
    string genre;
    bool valid = true;
    switch(input) {
      case 'A': genre = "Action"; break;
      case 'C': genre = "Comedy"; break;
      case 'D': genre = "Drama"; break;
      case 'H': genre = "Horror"; break;
      case 'S': genre = "Sci-Fi"; break;
      default: 
        valid = false;
        cout << "Invalid input. No movies displayed.\n";
        pauseScreen();
        return;
    }

    vector<Movie> results;
    if (valid) {
      for (const auto& movie : movies) {
        if (movie.genre == genre) {
          results.push_back(movie);
        }
      }
    }

    if (results.empty()) {
      cout << "No movies found for genre: " << genre << "\n";
    } else {
      cout << "Movies in genre '" << genre << "':\n";
      for (size_t i = 0; i < results.size(); ++i) {
        cout << "[" << (i + 1) << "] " << results[i].title 
             << " (Year: " << results[i].year 
             << ") - Rating: " << fixed << setprecision(1) << results[i].rating 
             << "/10\n";
      }
      cout << "[]==============================================================================================[]\n";
      cout << "\nEnter 0 to return to menu or select a movie number to view details";
      int choice = getUserChoice(0, (int)results.size());
      if (choice != 0) {
        displayMovieInfo(results[choice - 1]);
      }
      return;
    }
    cout << "[]==============================================================================================[]\n";
    pauseScreen();
  }

  void searchByTitle() const {
    clrScreen();
    cout << "Search Movies by Title\n";
    cout << "[]==============================================================================================[]\n";
    cout << "Enter title (partial match): ";
    string title;
    getline(cin, title);

    vector<Movie> results;
    for (const auto& movie : movies) {
      if (movie.title.find(title) != string::npos) {
        results.push_back(movie);
      }
    }

    if (results.empty()) {
      cout << "No movies found for title: " << title << "\n";
    } else {
      cout << "Movies matching '" << title << "':\n";
      for (size_t i = 0; i < results.size(); ++i) {
        cout << "[" << (i + 1) << "] " << results[i].title 
             << " - Genre: " << results[i].genre 
             << " (Year: " << results[i].year 
             << ") - Rating: " << fixed << setprecision(1) << results[i].rating 
             << "/10\n";
      }
      cout << "[]==============================================================================================[]\n";
      cout << "\nEnter 0 to return to menu or select a movie number to view details";
      int choice = getUserChoice(0, (int)results.size());
      if (choice != 0) {
        displayMovieInfo(results[choice - 1]);
      }
      return;
    }
    cout << "[]==============================================================================================[]\n";
    pauseScreen();
  }

  void topBestMovies() const {
    clrScreen();
    cout << "Fan Favourites\n";
    cout << "[]==============================================================================================[]\n";
    
    vector<Movie> sorted = movies;
    sort(sorted.begin(), sorted.end(), [](const Movie& a, const Movie& b) {
      return a.rating > b.rating;
    });
    
    cout << "Top 5 Movies by Rating:\n";
    size_t numToShow = min(static_cast<size_t>(5), sorted.size());
    for (size_t i = 0; i < numToShow; ++i) {
      cout << "[" << (i + 1) << "] " << sorted[i].title 
           << " - Genre: " << sorted[i].genre 
           << " (Year: " << sorted[i].year 
           << ") - Rating: " << fixed << setprecision(1) << sorted[i].rating 
           << "/10\n";
    }
    cout << "[]==============================================================================================[]\n";

    cout << "\nEnter 0 to return to menu or select a movie number to view details";
    int choice = getUserChoice(0, (int)numToShow);
    if (choice != 0) {
      displayMovieInfo(sorted[choice - 1]);
    }
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
      cout << "(" << min << "-" << max << "): ";
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
	     \/     \/                          \_/        \/      \/    \/             `.  .'      '.
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
          searchByGenre();
          break;
        case 3:
          searchByTitle();
          break;
        case 4:
          topBestMovies();
          break;
        case 5: {
          random_device rd;
          default_random_engine rng(rd());
          uniform_int_distribution<int> dist(0, (int)movies.size() - 1);
          const Movie &suggestion = movies[dist(rng)];

          displayMovieInfo(suggestion); // show one movie in full detail
          break;
        }
        case 0:
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
          cout << "Bye-bye!\n\n";
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
    cout << "[4] Fan Favourites\n";
    cout << "[5] Movie Suggestion\n";
    cout << "[0] X Exit NetfliXinder X\n";
    cout << "[]==============================================================================================[]\n";
    cout << "Pick a number";
  }
};

int main() {
  NetfliXinder app;
  app.run();

  return 0;
}
