/*MIT License

Copyright (c) 2020 Nyameaama Gambrah

Permission is hereby granted, free of charge, to any person obtaining a copy
of this software and associated documentation files (the "Software"), to deal
in the Software without restriction, including without limitation the rights
to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
copies of the Software, and to permit persons to whom the Software is
furnished to do so, subject to the following conditions:

The above copyright notice and this permission notice shall be included in all
copies or substantial portions of the Software.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
SOFTWARE.
*/

#ifndef HCSR04
#define HCSR04

#define FORWARD_TRIG (uint8_t)0
#define FORWARD_ECHO (uint8_t)0

#define SIDE_LEFT_TRIG (uint8_t)0
#define SIDE_LEFT_ECHO (uint8_t)0

#define SIDE_RIGHT_TRIG (uint8_t)0
#define SIDE_RIGHT_ECHO (uint8_t)0

#define BACKWARDS_TRIG (uint8_t)0
#define BACKWARDS_ECHO (uint8_t)0

//#include"../../../cores/arduino/Arduino.h"
//#include<Arduino.h>
#include"../../AUAC_TYPEDEFS/AUAC_TYPES.h"


class Ultrasonics {
    private:
        AUAC_BASE_DOUBLE interface(uint8_t trig,uint8_t echo);

    public:
        AUAC_BASE_DOUBLE getForwardFacing();

        AUAC_BASE_DOUBLE getSideLeft();

        AUAC_BASE_DOUBLE getSideRight();

        AUAC_BASE_DOUBLE getBackwardsFacing();

};

#endif