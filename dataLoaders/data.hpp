#ifndef __DATA_H
#define __DATA_H


#include <vector>
#include "stdint.h"
#include "stdio.h"



class data{
    std :: vector<uint8_t> *featureVector;
    uint8_t label;
    int enumLabel;

public:
    data();
    ~data();
    void setFeatureVector(std :: vector<uint8_t>*);

    void appendToFeaturevector(uint8_t);

    void setLabel(uint8_t);
    
    void setEnumeratedLabel(int);

    int getFeatureVectorSize();
    uint8_t getLabel();
    uint8_t getEnumeratedLabel();

    std :: vector<uint8_t> getFeatureVector();

};


#endif
