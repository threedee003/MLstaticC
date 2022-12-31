#ifndef __DATA_HANDLER_H
#define __DATA_HANDLER_H



#include <fstream>
#include "stdint.h"
#include "data.hpp"
#include <vector>
#include <string>
#include <map>
#include <unordered_set>

// or use #include <bits/stdc++.h>



class dataHandler{

    std :: vector<data*> *dataArray;
    std :: vector<data*> *trainData;
    std :: vector<data*> *testData;
    std :: vector<data*> *validationData;

    int numClasses;
    int featureVectorSize;

    std :: map<uint8_t,int> classMap;
    const int trainSetPercent = 0.75;
    const int validationSetPercent = 0.05;
    const int testSetPercent = 0.20;
public:
    dataHandler();
    ~dataHandler();

    void readFeatureVector(std :: string path);
    void readFeatureLabels(std :: string path);
    void splitData();
    void countClasses();

    uint32_t convertToLittleEndian(const unsigned char* bytes);

    std :: vector<data*> *getTrainingData();
    std :: vector<data*> *getValidationData();
    std :: vector<data*> *getTestData();

};





#endif
