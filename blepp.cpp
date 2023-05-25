#include <iostream>
#include <string>
#include "functions.hpp"


int main() {
  std::string word = "broccoli";

  std::string text = "Eating broccoli is very good for you. Some of the nutritional benefits of eating broccoli are that it is high in fibre and iron. There no such thing as eating too much broccoli. So, go down to the supermarket, grab yourself some brocolli and live a healthy brocollife.";

std::cout << "The original sentence:\n" << text << "\n\n";


bleep(word, text);

std::cout << "The bleeped sentence:\n" << text << "\n";

/*
for(int i=0; i<text.size();i++){
  std::cout << text[i];
}
  std::cout << "\n";
  */
}
