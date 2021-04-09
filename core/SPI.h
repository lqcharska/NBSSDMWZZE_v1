//
// Created by laura on 11.03.2021.
//

#pragma once


class SPI{
public:
    virtual void begin();
    virtual void end();
    virtual uint8_t transfer(uint8_t val);
};