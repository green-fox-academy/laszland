#include <iostream>
#include <string>

class PostIt
{
public:
    std::string backgroundColor;
    std::string text;
    std::string textColor;
};

int main() {
   PostIt first;
   first.backgroundColor = "orange";
   first.textColor = "blue";
   first.text = "Idea 1";

   PostIt second;
   second.backgroundColor = "pink";
   second.textColor = "black";
   second.text = "Awesome";

   PostIt third;
   third.backgroundColor = "yellow";
   third.textColor = "green";
   third.text = "Superb!";

   return 0;
}