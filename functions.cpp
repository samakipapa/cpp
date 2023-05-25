#include "functions.hpp"
#include <string>

std::string bleep(std::string word, std::string &text){
  
  for(int i=0;i<text.size()-word.size();i++){
    int counter = 0;
    for(int j=0; j<word.size();j++){
      if(text[i+j] == word[j]){
        counter++;
      }
    }
    if(counter == word.size()){
      for(int k=0;k<word.size();k++){
        text[i+k] = '*';
      }
    }
  }
  return text;
}
