#pragma once
#include "epd_interface.h"

class epdvar4bwry : public epdInterface {
  public:
    void epdSetup();
    void epdEnterSleep();
    void draw();
    void drawNoWait();
    void epdWaitRdy();
    void selectLUT(uint8_t lut);

  private:
    void epdWriteDisplayData();
};