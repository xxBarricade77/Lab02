#if !defined READ_FILE
#define READ_FILE

#include "Text.h"

#include <fstream>
using namespace std;

class ReadFile
{
<<<<<<< HEAD
   private:             //I LOVE YOU
=======
   private: // private section
>>>>>>> a9d45806c365141a1a566cb54f27a3861dbd8885
   ifstream input_file;
   bool _eof;
   bool closed;

   public:	
   //constructor	
   ReadFile(const char* file_name);
   //destructor
   ~ReadFile();
   
   String* readLine();
   bool eof();
   void close();	

};

#endif
