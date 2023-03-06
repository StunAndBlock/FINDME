#include <stdio.h>
#include "boolType.h"
e_handl createCfg(){
    remove("data/cfg");
    FILE* cfgPtr=fopen("data/cfg","w");
    if(cfgPtr==NULL){
        return false;
    }
    fprintf(cfgPtr,"%s","firststart:0");
    fclose(cfgPtr);
    return true;
}


e_handl startCHK(){
    FILE* cfgPtr=fopen("data/cfg","r");
    if (cfgPtr==NULL){
        return false;
    }
    char c;
    if (fscanf(cfgPtr,":%hhd",&c)==0 || c!=0){
        return false;
    }

    return true;
}

e_handl gettingStarted(){
    if (!createCfg() && !startCHK())
    return false;
    return true;
}