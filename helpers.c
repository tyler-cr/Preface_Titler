// Forward Declarations
void printHelp(); //what prints to command line when no other arguments written

void parseArg(char* arg);               //Given an argument, decides whether argument is a flag, file, or directory, and runs respective parsing function
void parseFlag(char* flag);             //Runs respective function(s) for flag
void parseFile(char* file);             //Runs respective function(s) for file
void parseDirectory(char* directory);   //Runs respective function(s) for directory

const char* fileType(char* fileName);   //Used in parseFile and parseDirectory to determine file type or if it is a directory

int runUnknown(char* arg);              //If an argument is otherwise unknown, runs this function and terminates program to help avoid error


//--------------------------------------------//

void printHelp(){
    printf("Usage: ./pre [FLAG(S)]... [FILE(s)]... \n\n");
    printf("Add a preface to FILE and overwrite it (by default)\n");
    printf("PLEASE put flags in front of file(s) IE: pre -r -o ~/exampledirectory ~/newexampledirectory\n");
    printf("inserting flags afterwords may cause undefined behavior\n\n");
    printf("FLAGS\n");
    printf("\n");
}

void parseArg(char* arg){
// WIP
}

void parseFlag(char* flag){
// WIP
}

void parseFile(char* file){
// WIP
}

void parseDirectory(char* directory){
// WIP
}

const char* fileType(char* fileName){
// WIP
}

int runUnknown(char* arg){
    printf("cmnd \"%s\" unknown\n", arg);
    return 1;
}
