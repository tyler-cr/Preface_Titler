
void parseFlag();
void parseFile();


void printHelp(){
    printf("Usage: ./pre [FLAG(S)]... [FILE(s)]... \n");
    printf("PLEASE put flags in front of file(s) IE: pre -r -o ~/exampledirectory ~/newexampledirectory\n");
    printf("inserting flags may cause undefined behavior\n");
    printf("\n");
    printf("\n");
    printf("\n");
}

void parseArg(char* arg){

}

int runUnknown(char* arg){
    printf("cmnd \"%s\" unknown\n", arg);
    return 1;
}