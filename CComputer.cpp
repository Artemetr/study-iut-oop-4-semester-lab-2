//
// Created by Artem on 25.02.2020.
//

#include "CComputer.h"

void CComputer::setCpuFrequency(int value) {
    if (value < 1) {
        throw "Incorrect CPU frequency value!";
    }
    this->cpuFrequency = value;
}

int CComputer::getCpuFrequency() {
    return this->cpuFrequency;
}

void CComputer::setCoresQuantity(int value) {
    if (value < 1) {
        throw "Incorrect CPU cores quantity value!";
    }
    this->coresQuantity = value;
}

int CComputer::getCoresQuantity() {
    return this->cpuFrequency;
}

void CComputer::setRamSize(int value) {
    if (value < 1) {
        throw "Incorrect RAM capacity value!";
    }
    this->ramSize = value;
}

int CComputer::getRamSize() {
    return this->ramSize;
}

void CComputer::setHddSize(int value) {
    if (value < 1) {
        throw "Incorrect HDD capacity value!";
    }
    this->hddSize = value;
}

int CComputer::getHddSize() {
    return this->hddSize;
}

void CComputer::setFreezeHddSize(int value) {
    if (value < 0 || value > this->getHddSize()) {
        throw "Incorrect freeze HDD capacity value!";
    }
    this->freezeHddSize = value;
}

int CComputer::getFreezeHddSize() {
    return this->freezeHddSize;
}

void CComputer::setHddSizeParams(int freezeSize, int size) {
    if (size > 0) {
        this->setHddSize(size);
    }

    if (freezeSize < 0 || freezeSize > this->getHddSize()) {
        throw "Incorrect freeze HDD capacity value!";
    }
    this->setFreezeHddSize(freezeSize);
}

int CComputer::getFreeHddSize() {
    return this->getHddSize() - this->getFreezeHddSize();
}

bool CComputer::canWriteFileSize(int size) {
    if (size < 1) {
        throw "Incorrect file size!";
    }

    return this->getFreeHddSize() >= size;
}

std::string CComputer::getInfo() {
    std::string info = "";

    info.append("Computer parameters:\n");
    info.append(" * CPU frequency - ");
    info.append((char*)this->getCpuFrequency());
    info.append("Hz;\n");

    info.append(" * CPU cores - ");
    info.append((char*)this->getCoresQuantity());
    info.append(";\n");

    info.append(" * RAM size - ");
    info.append((char*)this->getRamSize());
    info.append(";\n");

    info.append(" * HDD size - ");
    info.append((char*)this->getHddSize());
    info.append(";\n");

    info.append(" * HDD size - ");
    info.append((char*)this->getHddSize());
    info.append(";\n");

    return fromat("Computer parameters:\n");
}
