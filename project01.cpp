nclude <iostream>
int main()
{
   // I added a new comment in new.
   int goKerry = 1;
   char boringMe = 'a';
   std::string myCode [] = {
      "#include <iostream>",
      "int main()",
      "{",
      "   int goKerry = 1;",
      "   char boringMe = 'a';",
      "   std::string myCode [] = {",
      "}",
      "   for (int index = 0; index < 6; index++){std::cout<<myCode[index]<<std::endl;}",
      "   for (int index = 0; index < 15; index++){for(int times = 0; times < 6; times++){std::cout<<char(32);}std::cout<<char(34)<< myCode[index]<<char(34)<<char(44)<<std::endl;}",
      "   for(int times = 0; times < 6; times++){std::cout<<char(32);}",
      "   std::cout<<char(34)<<myCode[15]<<char(34)<<std::endl;",
      "   for(int times = 0; times < 3; times++){std::cout<<char(32);}",
      "   std::cout<<myCode[6]<<char(59)<<std::endl;",
      "   for (int index = 7; index < 16; index++){std::cout<<myCode[index]<<std::endl;}",
      "   return 0;",
      "}"
   };
   for (int index = 0; index < 6; index++){std::cout<<myCode[index]<<std::endl;}
   for (int index = 0; index < 15; index++){for(int times = 0; times < 6; times++){std::cout<<char(32);}std::cout<<char(34)<< myCode[index]<<char(34)<<char(44)<<std::endl;}
   for(int times = 0; times < 6; times++){std::cout<<char(32);}
   std::cout<<char(34)<<myCode[15]<<char(34)<<std::endl;
   for(int times = 0; times < 3; times++){std::cout<<char(32);}
   std::cout<<myCode[6]<<char(59)<<std::endl;
   for (int index = 7; index < 16; index++){std::cout<<myCode[index]<<std::endl;}
   return 0;
}
