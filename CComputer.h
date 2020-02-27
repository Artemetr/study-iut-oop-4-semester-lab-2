//
// Created by Artem on 25.02.2020.
//
#include <iostream>
#include <string.h>

#ifndef TMP_CCOMPUTER_H
#define TMP_CCOMPUTER_H


class CComputer {
private:
    int cpuFrequency = 1;
    int coresQuantity = 1;
    int ramSize = 1;
    int hddSize = 1;
    int freezeHddSize = 0;

public:
    void setCpuFrequency(int value);
    int getCpuFrequency();

    void setCoresQuantity(int value);
    int getCoresQuantity();

    void setRamSize(int value);
    int getRamSize();

    void setHddSize(int value);
    int getHddSize();

    void setFreezeHddSize(int value);
    int getFreezeHddSize();

    void setHddSizeParams(int freezeSize, int size = 0);

    int getFreeHddSize();

    bool canWriteFileSize(int size);

    std::string getInfo();
};


#endif //TMP_CCOMPUTER_H
