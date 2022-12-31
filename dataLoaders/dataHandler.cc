#include "dataHandler.hpp"



dataHandler :: dataHandler(){
    dataArray = new std :: vector<data*>;
    trainData = new std :: vector<data*>;
    testData = new std :: vector<data*>;
    validationData = new std :: vector<data*>;
}
dataHandler :: ~dataHandler(){
    // its a destructor
}

void dataHandler :: readFeatureVector(std :: string path){
    uint32_t header[4];       // magic no | no of images | row size | col size
    unsigned char bytes[4];
    FILE *f = fopen(path.c_str(),"r");
    if(f){
        for(int i = 0; i < 4; ++i){
            if(fread(bytes,sizeof(bytes),1,f)) header[i] = convertToLittleEndian(bytes);
        }
    printf("File Header acquired");
    int imageSize = header[2]*header[3];
    for(int i = 0; i < header[1]; ++i){
        data *d  = new data();
        uint8_t element[1];
        for(int j = 0; j < imageSize; ++j){
            if(fread(element,sizeof(element),1,f)){
                d->appendToFeaturevector(element[0]);
            }
            else{
                printf("Error reading from file.\n");
                exit(1);
            }
            dataArray->push_back(d);
        }
    }printf("Successully rad and stored %lu feature vectors",dataArray->size());
    }
    else{
        printf("Could not find the file.\n");
        exit(1);
    }
}
void dataHandler :: readFeatureLabels(std :: string path){

}
void dataHandler :: splitData(){

}
void dataHandler :: countClasses(){

}

uint32_t dataHandler :: convertToLittleEndian(const unsigned char* bytes){

}

std :: vector<data*> *dataHandler :: getTrainingData(){
    
}
std :: vector<data*> *dataHandler :: getValidationData(){

}
std :: vector<data*> *dataHandler :: getTestData(){

}
