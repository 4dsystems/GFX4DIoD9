/***************************************************************************
*                                                                          *
*  4D Systems GFX4dIoD9 Library                                            *
*                                                                          *
*  Date:        14 December 2016                                           *
*                                                                          *
*  Description: Provides Graphics, Touch Control and SD Card functions     *
*               for 4D Systems Gen4 IoD range of intelligent displays.     *
*                                                                          *
*                   GNU LESSER GENERAL PUBLIC LICENSE                      *
*                       Version 3, 29 June 2007                            *
*                                                                          *
* Copyright (C) 2007 Free Software Foundation, Inc. <http://fsf.org/>      *
* Everyone is permitted to copy and distribute verbatim copies             *
* of this license document, but changing it is not allowed.                *
*                                                                          *
*                                                                          *
* This version of the GNU Lesser General Public License incorporates       *
* the terms and conditions of version 3 of the GNU General Public          *
* License, supplemented by the additional permissions listed below.        *
*                                                                          *
*  0. Additional Definitions.                                              *
*                                                                          *
*   As used herein, "this License" refers to version 3 of the GNU Lesser   *
* General Public License, and the "GNU GPL" refers to version 3 of the GNU *
* General Public License.                                                  *
*                                                                          *
*   "The Library" refers to a covered work governed by this License,       *
* other than an Application or a Combined Work as defined below.           *
*                                                                          *
*   An "Application" is any work that makes use of an interface provided   *
* by the Library, but which is not otherwise based on the Library.         *
* Defining a subclass of a class defined by the Library is deemed a mode   *
* of using an interface provided by the Library.                           *
*                                                                          *
*   A "Combined Work" is a work produced by combining or linking an        *
* Application with the Library.  The particular version of the Library     *
* with which the Combined Work was made is also called the "Linked         *
* Version".                                                                *
*                                                                          *
*   The "Minimal Corresponding Source" for a Combined Work means the       *
* Corresponding Source for the Combined Work, excluding any source code    *
* for portions of the Combined Work that, considered in isolation, are     *
* based on the Application, and not on the Linked Version.                 *
*                                                                          *
*   The "Corresponding Application Code" for a Combined Work means the     *
* object code and/or source code for the Application, including any data   *
* and utility programs needed for reproducing the Combined Work from the   *
* Application, but excluding the System Libraries of the Combined Work.    *
*                                                                          *
*  1. Exception to Section 3 of the GNU GPL.                               *
*                                                                          *
*   You may convey a covered work under sections 3 and 4 of this License   *
* without being bound by section 3 of the GNU GPL.                         *
*                                                                          *
*  2. Conveying Modified Versions.                                         *
*                                                                          *
*   If you modify a copy of the Library, and, in your modifications, a     *
* facility refers to a function or data to be supplied by an Application   *
* that uses the facility (other than as an argument passed when the        *
* facility is invoked), then you may convey a copy of the modified         *
* version:                                                                 *
*                                                                          *
*   a) under this License, provided that you make a good faith effort to   *
*   ensure that, in the event an Application does not supply the           *
*   function or data, the facility still operates, and performs            *
*   whatever part of its purpose remains meaningful, or                    *
*                                                                          *
*   b) under the GNU GPL, with none of the additional permissions of       *
*   this License applicable to that copy.                                  *
*                                                                          *
*  3. Object Code Incorporating Material from Library Header Files.        *
*                                                                          *
*   The object code form of an Application may incorporate material from   *
* a header file that is part of the Library.  You may convey such object   *
* code under terms of your choice, provided that, if the incorporated      *
* material is not limited to numerical parameters, data structure          *
* layouts and accessors, or small macros, inline functions and templates   *
* (ten or fewer lines in length), you do both of the following:            *
*                                                                          *
*   a) Give prominent notice with each copy of the object code that the    *
*   Library is used in it and that the Library and its use are             *
*   covered by this License.                                               *
*                                                                          *
*   b) Accompany the object code with a copy of the GNU GPL and this       *
*   license document.                                                      *
*                                                                          *
*  4. Combined Works.                                                      *
*                                                                          *
*   You may convey a Combined Work under terms of your choice that,        *
* taken together, effectively do not restrict modification of the          *
* portions of the Library contained in the Combined Work and reverse       *
* engineering for debugging such modifications, if you also do each of     *
* the following:                                                           *
*                                                                          *
*   a) Give prominent notice with each copy of the Combined Work that      *
*   the Library is used in it and that the Library and its use are         *
*   covered by this License.                                               *
*                                                                          *
*   b) Accompany the Combined Work with a copy of the GNU GPL and this     * 
*   license document.                                                      *
*                                                                          *
*   c) For a Combined Work that displays copyright notices during          *
*   execution, include the copyright notice for the Library among          *
*   these notices, as well as a reference directing the user to the        *
*   copies of the GNU GPL and this license document.                       *
*                                                                          *
*   d) Do one of the following:                                            *
*                                                                          *
*       0) Convey the Minimal Corresponding Source under the terms of this *
*       License, and the Corresponding Application Code in a form          *
*       suitable for, and under terms that permit, the user to             *
*       recombine or relink the Application with a modified version of     *
*       the Linked Version to produce a modified Combined Work, in the     *
*       manner specified by section 6 of the GNU GPL for conveying         *
*       Corresponding Source.                                              *
*                                                                          *
*       1) Use a suitable shared library mechanism for linking with the    *
*       Library.  A suitable mechanism is one that (a) uses at run time    *
*       a copy of the Library already present on the user's computer       *
*       system, and (b) will operate properly with a modified version      *
*       of the Library that is interface-compatible with the Linked        *
*       Version.                                                           *
*                                                                          *
*   e) Provide Installation Information, but only if you would otherwise   *
*   be required to provide such information under section 6 of the         *
*   GNU GPL, and only to the extent that such information is               *
*   necessary to install and execute a modified version of the             *
*   Combined Work produced by recombining or relinking the                 *
*   Application with a modified version of the Linked Version. (If         *
*   you use option 4d0, the Installation Information must accompany        *
*   the Minimal Corresponding Source and Corresponding Application         *
*   Code. If you use option 4d1, you must provide the Installation         *
*   Information in the manner specified by section 6 of the GNU GPL        *
*   for conveying Corresponding Source.)                                   *
*                                                                          *
*  5. Combined Libraries.                                                  *
*                                                                          *
*   You may place library facilities that are a work based on the          *
* Library side by side in a single library together with other library     *
* facilities that are not Applications and are not covered by this         *
* License, and convey such a combined library under terms of your          *
* choice, if you do both of the following:                                 *
*                                                                          *
*   a) Accompany the combined library with a copy of the same work based   *
*   on the Library, uncombined with any other library facilities,          *
*   conveyed under the terms of this License.                              *
*                                                                          *
*   b) Give prominent notice with the combined library that part of it     *
*   is a work based on the Library, and explaining where to find the       *
*   accompanying uncombined form of the same work.                         *
*                                                                          *
*  6. Revised Versions of the GNU Lesser General Public License.           *
*                                                                          *
*   The Free Software Foundation may publish revised and/or new versions   *
* of the GNU Lesser General Public License from time to time. Such new     *
* versions will be similar in spirit to the present version, but may       *
* differ in detail to address new problems or concerns.                    *
*                                                                          *
*   Each version is given a distinguishing version number. If the          *
* Library as you received it specifies that a certain numbered version     *
* of the GNU Lesser General Public License "or any later version"          *
* applies to it, you have the option of following the terms and            *
* conditions either of that published version or of any later version      *
* published by the Free Software Foundation. If the Library as you         *
* received it does not specify a version number of the GNU Lesser          *
* General Public License, you may choose any version of the GNU Lesser     *
* General Public License ever published by the Free Software Foundation.   *
*                                                                          *
*   If the Library as you received it specifies that a proxy can decide    *
* whether future versions of the GNU Lesser General Public License shall   *
* apply, that proxy's public statement of acceptance of any version is     *
* permanent authorization for you to choose that version for the           *
* Library.                                                                 *
*                                                                          *
***************************************************************************/

#include "GFX4dIoD9.h"
#include <limits.h>
#include "pins_arduino.h"
#include "wiring_private.h"
#include <SPI.h>
#include <ESP8266WiFi.h>
#include <ESP8266HTTPClient.h>
//#include "SdFat.h"

//SdFat SD;

#define hwSPI true

#define swap(a, b) { int16_t tab = a; a = b; b = tab; }

#define MADCTL_MY  0x80
#define MADCTL_MX  0x40
#define MADCTL_MV  0x20
#define MADCTL_ML  0x10
#define MADCTL_RGB 0x00
#define MADCTL_BGR 0x08
#define MADCTL_MH 0x04

GFX4dIoD9::GFX4dIoD9(){
    _cs   = 15; //15
    _dc   = 4;  //4
    _disp = 0;
    _sd   = 5;
    cofset = 0;
    rofset = 24;
    scrollOffset = 0;
    width    = 160;
    height   = 80;  
    rotation  = 0;
    cursor_y  = cursor_x    = 0;
    textsize  = 1;
    textcolor = 0xFFFF;
    textbgcolor = 0x0000;
    wrap      = true;
    fno       = 1;
    fsh       = 8;
    fsw       = 5;
    scrolled  = false;
    sEnable   = false;
    nl        = false;
    ssSpeed   = 5;
    TFA       = 0;
    BFA       = 160;
    curdisp   = 0;
}

SPISettings spiSettings = SPISettings(39900000, MSBFIRST, SPI_MODE0);


void GFX4dIoD9::begin() {
 
  pinMode(_sclk, OUTPUT);
  pinMode(_mosi, OUTPUT);
  pinMode(_miso, INPUT);
  pinMode(_dc, OUTPUT);
  pinMode(_cs, OUTPUT);
  //pinMode(_disp, OUTPUT);
  //pinMode(_tcs, OUTPUT);
  yield();
  SPI.begin();
  SPI.beginTransaction(spiSettings);
  SetCommand(GFX4dIoD9_SLPOUT);
  delay(20);
  delay(10);
  SetCommand(0xB1); SetData(0x05); SetData(0x3C); SetData(0x3C); 
  //SetCommand(0xB1); SetData(0x00); SetData(0x06); SetData(0x03);
  delay(10);
  SetCommand(0xB2); SetData(0x01); SetData(0x2C); SetData(0x2d); 
  //SetCommand(0xB2); SetData(0x05); SetData(0x3C); SetData(0x3C); 
  delay(10);
  SetCommand(0xB3); SetData(0x01); SetData(0x2C); SetData(0x2d); 
  SetData(0x01); SetData(0x2C); SetData(0x2d); 
  //SetCommand(0xB3); SetData(0x05); SetData(0x3C); SetData(0x3C); 
  //SetData(0x05); SetData(0x3C); SetData(0x3C); 
  delay(10);
  SetCommand(GFX4dIoD9_INVCTR); SetData(0x03); 
  delay(10);
  SetCommand(0xC0); SetData(0x28); SetData(0x08); SetData(0x04); 
  delay(10);
  SetCommand(0xC1); SetData(0xC0); 
  delay(10);
  SetCommand(0xC2); SetData(0x0D); SetData(0x00); 
  delay(10);
  SetCommand(0xC3); SetData(0x8D); SetData(0x2A); 
  delay(10);
  SetCommand(0xC4); SetData(0x8D); SetData(0xEE); 
  delay(10);
  SetCommand(GFX4dIoD9_VMCTR1); SetData(0x1A); //VCOM 
  delay(10);
  SetCommand(0x36); SetData(0xC0); //MX, MY, RGB mode
  delay(10); 
  SetCommand(GFX4dIoD9_CASET); SetData(0x00); SetData(0x00); SetData(0x00); SetData(0x4F);
  delay(10);
  SetCommand(GFX4dIoD9_PASET); SetData(0x00); SetData(0x00); SetData(0x00); SetData(0x9F);   
  //ST7735R Gamma Sequence
  delay(10); 
  SetCommand(GFX4dIoD9_GMCTRP1); SetData(0x03); SetData(0x22); SetData(0x07);
  SetData(0x0A); SetData(0x2E); SetData(0x30); SetData(0x25);
  SetData(0x2A); SetData(0x28); SetData(0x26); SetData(0x2E);
  SetData(0x3A); SetData(0x00); SetData(0x01); SetData(0x03);
  SetData(0x13); 
  delay(10); 
  SetCommand(GFX4dIoD9_GMCTRN1); SetData(0x04); SetData(0x16); SetData(0x06);
  SetData(0x0D); SetData(0x2D); SetData(0x26); SetData(0x23);
  SetData(0x27); SetData(0x27); SetData(0x25); 
  SetData(0x2D); SetData(0x3B); SetData(0x00); SetData(0x01); 
  SetData(0x04); SetData(0x13);  
  delay(10);
  SetCommand(0x3A); SetData(0x05); //65k mode 
  delay(10);
  SetCommand(0x13);
  delay(10);
  //SetCommand(0x35); SetData(0x01);//TE
  //delay(10);
  SetCommand(GFX4dIoD9_DISPON);  
  SPI.endTransaction(); 
  
  setScrollArea(0, 0);
  BFA = 160;
  Cls(0);
  Orientation(0);
  if(SD.begin(_sd, 39000000)){
  sdok = true;
  } else {
  sdok = false;
  }
}

void GFX4dIoD9::setScrollArea(uint16_t tfa, uint16_t bfa) {
  SetCommand(GFX4dIoD9_VSCRDEF); SetData(tfa >> 8); SetData(tfa);
                             SetData((height - tfa - bfa) >> 8); SetData(height - tfa - bfa);
                             SetData(tfa >> 8); SetData(bfa);
  TFA = tfa;
  if(bfa = 0){
  BFA = 160;
  } else {
  BFA = bfa;
  }
}

void GFX4dIoD9::Scroll(uint16_t vsp) {
  if(vsp > (height - 1)){
  vsp = vsp - height;
  }
  if(sEnable){
  SetCommand(GFX4dIoD9_VSCRSADD); SetData(vsp >> 8); SetData(vsp);
  scrollOffset = vsp;
  scrolled = true;
  }
}

void GFX4dIoD9::MoveTo(int16_t x, int16_t y) {
  cursor_x = x;
  if(scrolled){
  cursor_y = y + (160 - scrollOffset);
  if(cursor_y > 159){
  cursor_y = cursor_y - 160;
  }
  } else {
  cursor_y = y;
  if(cursor_y > (height - 1)) cursor_y = (height - 1);
  }
  if(cursor_y < 0) cursor_y = 0;
  if(cursor_x < 0) cursor_x = 0;
    if(cursor_y < 0) cursor_y = 0;
  if(cursor_x > (width - 1)) cursor_x = width - 1;
  nl = false;
}

void GFX4dIoD9::TextSize(uint8_t s) {
  if(s > 0){  
  textsize = s;
  textsizeht = s;
  }
}

int8_t GFX4dIoD9::Font(void) {
  return fno;
}

void GFX4dIoD9::Font(uint8_t f) {
  if(f < 1 || f > 2){
  return;
  }
  fno = f;
  if(fno == 1){
  fsw = 5;
  fsh = 8;
  } 
  if(fno == 2){
  fsw = 8;
  fsh = 16;
  } 
}

void GFX4dIoD9::TextColor(uint16_t c) {  
  textcolor = c; 
  textbgcolor = c;
}

void GFX4dIoD9::TextColor(uint16_t c, uint16_t b) {
  textcolor   = c;
  textbgcolor = b; 
}

void GFX4dIoD9::TextWrap(boolean w) {
  wrap = w;
}

int8_t GFX4dIoD9::FontHeight(void) {
  return fsh;
}

void GFX4dIoD9::Rectangle(int16_t x, int16_t y, int16_t x1, int16_t y1, uint16_t color) {
  int w = x1 - x + 1;
  int h = y1 - y + 1;
  Hline(x, y, w, color);
  Hline(x, y + h - 1, w, color);
  Vline(x, y, h, color);
  Vline(x + w - 1, y, h, color);
}

void GFX4dIoD9::RoundRectFilled(int16_t x, int16_t y, int16_t x1, int16_t y1, int16_t r, uint16_t color) {
  if (x > x1) {
  swap(x, x1);
  }
  if (y > y1) {
  swap(y, y1);
  }
  int w = x1 - x + 1;
  int h = y1 - y + 1;
  int maxR;
  if (w > h) 
  maxR = (h-1)/2;
  else if (h > w)
  maxR = (w-1)/2;
  if (r > maxR) r = maxR;
  RectangleFilled(x + r, y, x + (w - r) - 1, y + h - 1, color);
  ArcFilled(x + w - r - 1, y + r, r, 1, h - 2 * r - 1, color);
  ArcFilled(x + r, y + r, r, 2, h - 2 * r - 1, color);
}

void GFX4dIoD9::RoundRect(int16_t x, int16_t y, int16_t x1, int16_t y1, int16_t r, uint16_t color) {
  int w = x1 - x + 1;
  int h = y1 - y + 1;
  Hline(x + r, y, w - 2 * r, color);
  Hline(x + r, y + h - 1, w - 2 * r, color);
  Vline(x, y + r, h - 2  *r, color);
  Vline(x + w - 1, y + r, h - 2 * r, color);
  Arc(x + r, y + r, r, 1, color);
  Arc(x + w - r - 1, y + r, r, 2, color);
  Arc(x + w - r - 1, y + h - r - 1, r, 4, color);
  Arc(x + r, y + h - r - 1, r, 8, color);
}

void GFX4dIoD9::Triangle(int16_t x0, int16_t y0, int16_t x1, int16_t y1, int16_t x2, int16_t y2, uint16_t color) {
  Line(x0, y0, x1, y1, color);
  Line(x1, y1, x2, y2, color);
  Line(x2, y2, x0, y0, color);
}

void GFX4dIoD9::TriangleFilled ( int16_t x0, int16_t y0, int16_t x1, int16_t y1, int16_t x2, int16_t y2, uint16_t color) {
  int16_t p0, p1, y, last;
  if (y0 > y1) {
  swap(y0, y1); swap(x0, x1);
  }
  if (y1 > y2) {
  swap(y2, y1); swap(x2, x1);
  }
  if (y0 > y1) {
  swap(y0, y1); swap(x0, x1);
  }
  if(y0 == y2) {
  p0 = p1 = x0;
  if(x1 < p0) p0 = x1;
  else if(x1 > p1) p1 = x1;
  if(x2 < p0) p0 = x2;
  else if(x2 > p1) p1 = x2;
  Hline(p0, y0, p1 - p0 + 1, color);
  return;
  }
  int16_t xx01 = x1 - x0, yy01 = y1 - y0, xx02 = x2 - x0, yy02 = y2 - y0;
  int16_t xx12 = x2 - x1, yy12 = y2 - y1;
  int32_t z1   = 0, z2   = 0;
  if(y1 == y2){
  last = y1;
  } else {
  last = y1 - 1;
  }
  for(y = y0; y <= last; y++) {
  p0 = x0 + z1 / yy01;
  p1 = x0 + z2 / yy02;
  z1 += xx01;
  z2 += xx02;
  if(p0 > p1){
  swap(p0, p1);
  }   
  Hline(p0, y, p1 - p0 + 1, color);
  }
  z1 = xx12 * (y - y1);
  z2 = xx02 * (y - y0);
  for(; y <= y2; y++) {
  p0 = x1 + z1 / yy12;
  p1 = x0 + z2 / yy02;
  z1 += xx12;
  z2 += xx02;
  if(p0 > p1){
  swap(p0, p1);
  }   
  Hline(p0, y, p1 - p0 + 1, color);
  }
  }

void GFX4dIoD9::Line(int16_t x0, int16_t y0, int16_t x1, int16_t y1, uint16_t color) {
  int16_t angH = abs(y1 - y0) > abs(x1 - x0);
  if (angH) {
  swap(x0, y0);
  swap(x1, y1);
  }
  if (x0 > x1) {
  swap(x0, x1);
  swap(y0, y1);
  }
  int16_t xx;
  int16_t yy;
  xx = x1 - x0;
  yy = abs(y1 - y0);
  int16_t edx = xx / 2;
  int16_t incy;
  if (y0 < y1) {
  incy = 1;
  } else {
  incy = -1;
  }
  for (; x0 <= x1; x0++) {
  if (angH) {
  PutPixel(y0, x0, color);
  } else {
  PutPixel(x0, y0, color);
  }
  edx = edx - yy;
  if (edx < 0) {
  y0 = y0 + incy;
  edx = edx + xx;
  }
  }
}

void GFX4dIoD9::CircleFilled(int16_t xc, int16_t yc, int16_t r, uint16_t color) {
  Vline(xc, yc-r, 2 * r + 1, color);
  ArcFilled(xc, yc, r, 3, 0, color);
}

void GFX4dIoD9::Ellipse(int16_t xe, int16_t ye, int16_t radx, int16_t rady, uint16_t color){
  if(radx < 2){
  return;
  }
  if(rady < 2){
  return;
  }
  int16_t x, y;
  int32_t es;
  int32_t radxx = radx * radx;
  int32_t radyy = rady * rady;
  int32_t xr = 4 * radxx;
  int32_t yr = 4 * radyy;
  for(x = 0, y = rady, es = 2 * radyy + radxx * (1 - 2 * rady); radyy * x <= radxx * y; x++){
  PutPixel(xe + x, ye + y, color);
  PutPixel(xe - x, ye + y, color);
  PutPixel(xe - x, ye - y, color);
  PutPixel(xe + x, ye - y, color);
  if(es >= 0){
  es += xr * (1 - y);
  y--;
  }
  es += radyy * ((4 * x) + 6);
  }
  for(x = radx, y = 0, es = 2 * radxx + radyy * (1 - 2 * radx); radxx * y <= radyy * x; y++){
  PutPixel(xe + x, ye + y, color);
  PutPixel(xe - x, ye + y, color);
  PutPixel(xe - x, ye - y, color);
  PutPixel(xe + x, ye - y, color);
  if(es >= 0){
  es += yr * (1 - x);
  x --;
  }
  es += radxx * ((4 * y) + 6);
  }
}

void GFX4dIoD9::EllipseFilled(int16_t xe, int16_t ye, int16_t radx, int16_t rady, uint16_t color){
  if(radx < 2){
  return;
  }
  if(rady < 2){
  return;
  }
  int16_t x, y;
  int32_t es;
  int32_t radxx = radx * radx;
  int32_t radyy = rady * rady;
  int32_t xr = 4 * radxx;
  int32_t yr = 4 * radyy;
  for(x = 0, y = rady, es = 2 * radyy + radxx * (1 - 2 * rady); radyy * x <= radxx * y; x++){
  Hline(xe - x, ye - y, 1 + x + x, color);
  Hline(xe - x, ye + y, 1 + x + x, color);
  if(es >= 0){
  es += xr * (1 - y);
  y --;
  }
  es += radyy * ((4 * x) + 6);
  }
  for(x = radx, y = 0, es = 2 * radxx + radyy * (1 - 2 * radx); radxx * y <= radyy * x; y++){
  Hline(xe - x, ye - y, 1 + x + x, color);
  Hline(xe - x, ye + y, 1 + x + x, color);
  if(es >= 0){
  es += yr * (1 - x);
  x --;
  }
  es += radxx * ((4 * y) + 6);
  }
}

void GFX4dIoD9::ArcFilled(int16_t xa, int16_t ya, int16_t r, uint8_t sa, int16_t ea, uint16_t color) {
  int16_t c = 1 - r;
  int16_t x = 0;
  int16_t y = r;
  int16_t xx = 1;
  int16_t yy = -2 * r;
  while (x < y) {
  if (c >= 0) {
  y--;
  yy = yy + 2;
  c = c + yy;
  }
  x++ ;
  xx = xx + 2;
  c = c + xx;
  if (sa & 0x1) {
  Vline(xa + x, ya - y, 2 * y + 1 + ea, color);
  Vline(xa + y, ya - x, 2 * x + 1 + ea, color);
  }
  if (sa & 0x2) {
  Vline(xa - x, ya - y, 2 * y + 1 + ea, color);
  Vline(xa - y, ya - x, 2 * x + 1 + ea, color);
  }
  }
}

void GFX4dIoD9::Circle(int16_t xc, int16_t yc, int16_t r, uint16_t color) {
  int16_t c = 1 - r;
  int16_t xx = 1;
  int16_t yy = -2 * r;
  int16_t x = 0;
  int16_t y = r;
  PutPixel(xc, yc + r, color);
  PutPixel(xc, yc - r, color);
  PutPixel(xc + r, yc, color);
  PutPixel(xc - r, yc, color);
  while (x < y) {
  if (c >= 0) {
  y-- ;
  yy = yy + 2;
  c = c + yy;
  }
  x++ ;
  xx = xx + 2;
  c = c + xx;
  PutPixel(xc + x, yc + y, color);
  PutPixel(xc - x, yc + y, color);
  PutPixel(xc + x, yc - y, color);
  PutPixel(xc - x, yc - y, color);
  PutPixel(xc + y, yc + x, color);
  PutPixel(xc - y, yc + x, color);
  PutPixel(xc + y, yc - x, color);
  PutPixel(xc - y, yc - x, color);
  }
}

void GFX4dIoD9::PrintImage(uint8_t ui){
  if(cursor_x > (width - 1)) return;
  boolean tempnl = false;
  if(nl){
  cursor_x = 0;
  tempnl = true;
  newLine(lastfsh, textsizeht, 0);
  }
  if(cursor_y > (height - 1) && (rotation == 2 || rotation == 3 || sEnable == false)) return;
  if(userImag){
  String resultFO = "Success. ";
  } else {
  return;
  }
  int gciapos = (ui) * 12;
  uint32_t tuiIndex;
  int16_t tuix;
  int16_t tuiy;
  tuiIndex = gciobj[gciapos] << 24;
  tuiIndex = tuiIndex + (gciobj[gciapos + 1] << 16);
  tuiIndex = tuiIndex + (gciobj[gciapos + 2] << 8);
  tuiIndex = tuiIndex + gciobj[gciapos + 3];
  userImag.seek(tuiIndex);
  uint16_t iwidth = (userImag.read() << 8); iwidth = iwidth + userImag.read();
  uint16_t iheight = (userImag.read() << 8); iheight =  iheight + userImag.read();
  uint16_t coldepth = (userImag.read() << 8); coldepth = coldepth + userImag.read();
  uint8_t tempfsh = fsh;
  uint16_t isize = iwidth * iheight;
  uint16_t ichunk = iwidth / 2;
  uint16_t isteps = iheight / 4;
  uint16_t irem = iheight - (isteps * 4);
  if(rotation == 0 || rotation == 1 || sEnable == false){
  if((cursor_y + iheight) > height -1){
  iheight = iheight - ((cursor_y + iheight) - height);
  }
  }
  boolean off = false;
  boolean even = false;
  if((iwidth % 2) == 0) even = true;
  int cuiw = iwidth; 
  if((cursor_x + iwidth - 1) >= width){
  cuiw = iwidth - ((cursor_x + iwidth - 1) - width) - 1;
  off = true;
  }
  for(int idraw = 0; idraw < iheight; idraw ++){
  nl = true;
  newLine(1, 1, cursor_x);
  if((cursor_y - 1) < 0 && (rotation == 2 || rotation == 3)){
  setGRAM(cursor_x, cursor_y + height - 1 , cursor_x + cuiw -1 , cursor_y + height - 1);
  } else {
  setGRAM(cursor_x, cursor_y - 1 , cursor_x + cuiw -1 , cursor_y - 1);
  }
  if(off){
  for(uint16_t pc = 0; pc < iwidth; pc ++){
  uint16_t tempc = (userImag.read() << 8); tempc = tempc + userImag.read() ;
  if((cursor_x + pc) < width){
  WrGRAM16(tempc);
  }
  }
  } else {
  for(uint16_t pc = 0; pc < ichunk; pc ++){
  uint32_t tempc =userImag.read() << 24; tempc = tempc + (userImag.read() << 16);
  tempc = tempc + (userImag.read() << 8); tempc = tempc + userImag.read() ;
  WrGRAM(tempc);
  }
  if(even == false){
  uint16_t tempco = (userImag.read() << 8); tempco = tempco + userImag.read() ;
  WrGRAM16(tempco);
  }
  }
  }
  if(tempnl){
  nl = true;
  lastfsh = 1;
  }
}


void GFX4dIoD9::DrawWidget(uint32_t Index, int16_t uix, int16_t uiy, int16_t uiw, int16_t uih, uint16_t frame, int16_t bar){
  if(bar != 0){
  uix = uix + bar;
  }
  if(uix >= width || uiy >= height) return;
  if((uix + uiw - 1) < 0 || (uiy + uih - 1) < 0) return;
  if(userImag){
  String resultFO = "Success. ";
  } else {
  return;
  }
  boolean off = false;
  boolean even = false;
  int cuix = uix;
  int cuiy = uiy;
  int cuiw = uiw;
  int cuih = uih;  
  if(uix < 0){
  cuix = 0;
  cuiw = uiw + uix;
  off = true;
  }
  if(uiy < 0){
  cuiy = 0;
  cuih = uih + uiy;
  off = true;
  }
  if((uix + uiw - 1) >= width){
  cuiw = uiw - ((uix + uiw - 1) - width) - 1;
  off = true;
  }
  if((uiy + uih - 1) >= height){
  cuih = uih - ((uiy + uih - 1) - height) - 1;
  off = true;
  } 
  int urow = uix;
  int ucol = uiy;
  uint16_t cpos;
  uint32_t isize = uiw * uih;
  if((isize % 2) == 0) even = true;
  userImag.seek(Index + 4);
  int cdv;
  uint32_t pos;
  cdv = userImag.read();
  if(cdv == 8){
  pos = (isize * frame);
  } else {
  pos = (isize * frame) * 2;
  }
  if(uimage == false){
  userImag.seek(Index + 8 + pos);
  } else {
  userImag.seek(Index + 6);
  uimage = false;
  }
  uint32_t ichunk = isize / 2;
  cpos = 0;
  int xl = cuix + cuiw - 1;
  int yl = cuiy + cuih - 1;
  setGRAM(cuix, cuiy , xl , yl);
  if(off == false){
  uint32_t cbuff[500];
  for(uint32_t idraw = 0; idraw < ichunk; idraw ++){
  uint32_t tempc;
  if(cdv == 8){
  tempc = RGB3322565[userImag.read()] << 16;
  tempc = tempc + RGB3322565[userImag.read()]; 
  } else {
  tempc =userImag.read() << 24; tempc = tempc + (userImag.read() << 16);
  tempc = tempc + (userImag.read() << 8); tempc = tempc + userImag.read() ;
  }
  cbuff[cpos] = tempc;
  cpos++;
  if(cpos == 500){
  WrGRAMs(cbuff, cpos);
  cpos = 0;
  }
  }  
  if(cpos > 0){
  WrGRAMs(cbuff, cpos);  
  }
  if(even == false){
  if(cdv == 8){
  uint16_t tempco = RGB3322565[userImag.read()];
  WrGRAM16(tempco);
  } else {
  uint16_t tempco = (userImag.read() << 8); tempco = tempco + userImag.read() ;
  WrGRAM16(tempco);
  }
  }
  } else {
  uint16_t cbuff[500];
  for(uint32_t idraw = 0; idraw < isize; idraw ++){
  uint16_t tempc;
  if(cdv == 8){
  tempc = RGB3322565[userImag.read()];
  } else {
  tempc = (userImag.read() << 8); tempc = tempc + userImag.read() ;
  }
  if(urow >= cuix && urow <= (xl)  && ucol >= cuiy && ucol <=(yl)){
  cbuff[cpos] = tempc;
  cpos++;
  }
  urow ++;
  if(urow > (uix +uiw - 1)){
  ucol ++;
  urow = uix;
  }
  if(cpos == 500){
  WrGRAMs16(cbuff, cpos);
  cpos = 0;
  }
  }  
  if(cpos > 0){
  WrGRAMs16(cbuff, cpos);  
  }
  }
}



void GFX4dIoD9::UserImage(uint8_t ui){
  UserImage(ui, 0x7fff, 0x7fff);
}

void GFX4dIoD9::UserImage(uint8_t ui, int altx, int alty){
  if(userImag){
  String resultFO = "Success. ";
  } else {
  return;
  }
  boolean even;
  boolean setemp = sEnable;
  ScrollEnable(false);
  int gciapos = (ui) * 12;
  uint32_t tuiIndex;
  int16_t tuix;
  int16_t tuiy;
  tuiIndex = gciobj[gciapos] << 24;
  tuiIndex = tuiIndex + (gciobj[gciapos + 1] << 16);
  tuiIndex = tuiIndex + (gciobj[gciapos + 2] << 8);
  tuiIndex = tuiIndex + gciobj[gciapos + 3];
  userImag.seek(tuiIndex);
  uint16_t iwidth = (userImag.read() << 8); iwidth = iwidth + userImag.read();
  uint16_t iheight = (userImag.read() << 8); iheight =  iheight + userImag.read();
  uint16_t coldepth = (userImag.read() << 8); coldepth = coldepth + userImag.read();
  tuix = gciobj[gciapos + 4] << 8;
  tuix = tuix + gciobj[gciapos + 5];
  tuiy = gciobj[gciapos + 6] << 8;
  tuiy = tuiy + gciobj[gciapos + 7];
  uimage = true;
  if(altx == 0x7fff && alty == 0x7fff){
  DrawWidget(tuiIndex, tuix, tuiy, iwidth, iheight, 0, 0);
  } else {
  DrawWidget(tuiIndex, altx, alty, iwidth, iheight, 0, 0);
  }
  ScrollEnable(setemp);
}

void GFX4dIoD9::LedDigitsDisplaySigned(int16_t newval, uint16_t index, int16_t Digits, int16_t MinDigits, int16_t WidthDigit, int16_t LeadingBlanks){
  LedDigitsDisplaySigned(newval, index, Digits, MinDigits, WidthDigit, LeadingBlanks, 0x7fff ,0x7fff);
}

void GFX4dIoD9::LedDigitsDisplaySigned(int16_t newval, uint16_t index, int16_t Digits, int16_t MinDigits, int16_t WidthDigit, int16_t LeadingBlanks, int16_t altx, int16_t alty){
  int16_t i, m, lstb, nv, digita[7];
  int leftpos = 0;
  nv = newval ;
  lstb = 1 ;
  for (i = Digits; i > 0; i--){
  m = nv % 10 ;
  if ( LeadingBlanks && (i <= Digits - MinDigits) ){
  if (nv == 0){
  m = 10 ;
  if (lstb == 1) lstb = i ;
  }
  }
  digita[i] = abs(m) ;
  nv /= 10 ;
  }
  if (newval < 0){
  digita[lstb] = 11 ;
  }
  for (i = 1; i <= Digits; i++){
  if(altx == 0x7fff && alty == 0x7fff){
  UserImages(index, digita[i], leftpos);
  } else {
  UserImages(index, digita[i], leftpos, altx, alty);
  }
  leftpos += WidthDigit ;
  }
}

void GFX4dIoD9::LedDigitsDisplay(int16_t newval, uint16_t index, int16_t Digits, int16_t MinDigits, int16_t WidthDigit, int16_t LeadingBlanks){
  LedDigitsDisplay(newval, index, Digits, MinDigits, WidthDigit, LeadingBlanks, 0x7fff ,0x7fff);
}

void GFX4dIoD9::LedDigitsDisplay(int16_t newval, uint16_t index, int16_t Digits, int16_t MinDigits, int16_t WidthDigit, int16_t LeadingBlanks, int16_t altx, int16_t alty){
  int16_t i, k, l, lb;
  l = 1;
  for(i = 1; i < Digits; i++)
  l *= 10;
  lb = LeadingBlanks;
  for(i = 0; i < Digits; i++){
  k = newval / l;
  newval -= k * l;
  if(lb && (i < Digits - MinDigits)){ 
  if(k == 0)
  k = 10;
  else
  lb = 0;
  }
  l /= 10;
  if(altx == 0x7fff && alty == 0x7fff){
  UserImages(index, k , i*WidthDigit);
  } else {
  UserImages(index, k , i*WidthDigit, altx, alty);
  }
  }
}

void GFX4dIoD9::UserImages(uint8_t uisnb, int16_t framenb){  
  uimage = false;
  boolean setemp = sEnable;
  ScrollEnable(false);
  int gciapos = (uisnb) * 12;
  uint32_t tuiIndex;
  int16_t tuix;
  int16_t tuiy;
  uint16_t tuiw;
  uint16_t tuih;
  tuiIndex = (gciobj[gciapos] << 24);
  tuiIndex = tuiIndex + (gciobj[gciapos + 1] << 16);
  tuiIndex = tuiIndex + (gciobj[gciapos + 2] << 8);
  tuiIndex = tuiIndex + gciobj[gciapos + 3];
  tuix = gciobj[gciapos + 4] << 8;
  tuix = tuix + gciobj[gciapos + 5];
  tuiy = gciobj[gciapos + 6] << 8;
  tuiy = tuiy + gciobj[gciapos + 7];
  tuiw = gciobj[gciapos + 8] << 8;
  tuiw = tuiw + gciobj[gciapos + 9];
  tuih = gciobj[gciapos + 10] << 8;
  tuih = tuih + gciobj[gciapos + 11];
  if(framenb > (gciobjframes[uisnb] -1) || framenb < 0){
  outofrange(tuix, tuiy, tuiw, tuih);
  } else {
  DrawWidget(tuiIndex, tuix, tuiy, tuiw, tuih, framenb, 0);
  }
  ScrollEnable(setemp);
}

void GFX4dIoD9::UserImages(uint8_t uis, int16_t frame, int offset, int16_t altx, int16_t alty){  
  uimage = false; 
  boolean setemp = sEnable;
  ScrollEnable(false);
  int gciapos = (uis) * 12;
  uint32_t tuiIndex;
  int16_t tuix;
  int16_t tuiy;
  int16_t tuiw;
  int16_t tuih;
  tuiIndex = (gciobj[gciapos] << 24);
  tuiIndex = tuiIndex + (gciobj[gciapos + 1] << 16);
  tuiIndex = tuiIndex + (gciobj[gciapos + 2] << 8);
  tuiIndex = tuiIndex + gciobj[gciapos + 3];
  tuiw = gciobj[gciapos + 8] << 8;
  tuiw = tuiw + gciobj[gciapos + 9];
  tuih = gciobj[gciapos + 10] << 8;
  tuih = tuih + gciobj[gciapos + 11];
  if(frame > (gciobjframes[uis]- 1) || frame < 0){
  outofrange(tuix, tuiy, tuiw, tuih);
  } else {
  DrawWidget(tuiIndex, altx, alty, tuiw, tuih, frame, offset);
  }
  ScrollEnable(setemp);
}

void GFX4dIoD9::outofrange(int16_t euix, int16_t euiy, int16_t euiw, int16_t euih){
  if(euix >= width || euiy >= height) return;
  if((euix + euiw - 1) < 0 || (euiy + euih - 1) < 0) return;
  int cuix = euix;
  int cuiy = euiy;
  int cuiw = euiw;
  int cuih = euih;
  if(euix < 0){
  cuix = 0;
  cuiw = euiw + euix;
  }
  if(euiy < 0){
  cuiy = 0;
  cuih = euih + euiy;
  }
  if((euix + euiw - 1) >= width) cuiw = euiw - ((euix + euiw - 1) - width) - 1;
  if((euiy + euih - 1) >= height) cuih = euih - ((euiy + euih - 1) - height) - 1; 
  RectangleFilled(cuix, cuiy, cuix + cuiw - 1, cuiy + cuih - 1, BLACK);
  Rectangle(cuix + 1, cuiy + 1, cuix + cuiw - 2, cuiy + cuih - 2, RED);
  Line(cuix + 1, cuiy + 1, cuix + cuiw - 2, cuiy + cuih - 2, RED); 
  Line(cuix + cuiw - 2, cuiy + 1, cuix + 1, cuiy + cuih - 2, RED); 
}

void GFX4dIoD9::UserImages(uint8_t uisnb, int16_t framenb, int16_t newx, int16_t newy){  
  uimage = false;  
  boolean setemp = sEnable;
  ScrollEnable(false);
  int gciapos = (uisnb) * 12;
  uint32_t tuiIndex;
  int16_t tuix = newx;
  int16_t tuiy = newy;
  int16_t tuiw;
  int16_t tuih;
  tuiIndex = (gciobj[gciapos] << 24);
  tuiIndex = tuiIndex + (gciobj[gciapos + 1] << 16);
  tuiIndex = tuiIndex + (gciobj[gciapos + 2] << 8);
  tuiIndex = tuiIndex + gciobj[gciapos + 3];
  tuiw = gciobj[gciapos + 8] << 8;
  tuiw = tuiw + gciobj[gciapos + 9];
  tuih = gciobj[gciapos + 10] << 8;
  tuih = tuih + gciobj[gciapos + 11];
  if(framenb > (gciobjframes[uisnb] -1) || framenb < 0){
  outofrange(tuix, tuiy, tuiw, tuih);
  } else {
  DrawWidget(tuiIndex, tuix, tuiy, tuiw, tuih, framenb, 0);
  }
  ScrollEnable(setemp);
}

void GFX4dIoD9::UserImages(uint8_t uis, int16_t frame, int offset){  
  uimage = false; 
  boolean setemp = sEnable;
  ScrollEnable(false);
  int gciapos = (uis) * 12;
  uint32_t tuiIndex;
  int16_t tuix;
  int16_t tuiy;
  int16_t tuiw;
  int16_t tuih;
  tuiIndex = (gciobj[gciapos] << 24);
  tuiIndex = tuiIndex + (gciobj[gciapos + 1] << 16);
  tuiIndex = tuiIndex + (gciobj[gciapos + 2] << 8);
  tuiIndex = tuiIndex + gciobj[gciapos + 3];
  tuix = gciobj[gciapos + 4] << 8;
  tuix = tuix + gciobj[gciapos + 5];
  tuiy = gciobj[gciapos + 6] << 8;
  tuiy = tuiy + gciobj[gciapos + 7];
  tuiw = gciobj[gciapos + 8] << 8;
  tuiw = tuiw + gciobj[gciapos + 9];
  tuih = gciobj[gciapos + 10] << 8;
  tuih = tuih + gciobj[gciapos + 11];
  if(frame > (gciobjframes[uis]- 1) || frame < 0){
  outofrange(tuix, tuiy, tuiw, tuih);
  } else {
  DrawWidget(tuiIndex, tuix, tuiy, tuiw, tuih, frame, offset);
  }
  ScrollEnable(setemp);
}

void GFX4dIoD9::ScrollEnable(boolean se){
  if(se){
  sEnable = true;
  } else {
  sEnable = false;
  }
}

void GFX4dIoD9::PrintImageFile(String ifile){
  if(cursor_x >= (width - 1)) return;
  boolean tempnl = false;
  if(nl){
  tempnl = true;
  newLine(lastfsh, textsizeht, 0);
  }
  if(cursor_y > (height - 1) && (rotation == 2 || rotation == 3 || sEnable == false)) return;
  uint16_t iwidth;
  uint16_t iheight; 
  dataFile = SD.open(ifile);
  if(!dataFile){
  return;
  }
  iwidth = (dataFile.read() << 8); iwidth = iwidth + dataFile.read();
  iheight = (dataFile.read() << 8); iheight =  iheight + dataFile.read();
  uint16_t coldepth = (dataFile.read() << 8); coldepth = coldepth + dataFile.read();
  uint8_t tempfsh = fsh;
  uint16_t isize = iwidth * iheight;
  uint16_t ichunk = iwidth / 2;
  uint16_t isteps = iheight / 4;
  uint16_t irem = iheight - (isteps * 4);
  if(rotation == 0 || rotation == 1 || sEnable == false){
  if(((cursor_y + iheight) - 1) > height - 1){
  iheight = iheight - ((cursor_y + iheight) - height);
  }
  }
  boolean off = false;
  boolean even = false;
  if((iwidth % 2) == 0) even = true;
  int cuiw = iwidth; 
  if((cursor_x + iwidth - 1) >= width){
  cuiw = iwidth - ((cursor_x + iwidth - 1) - width) - 1;
  off = true;
  }
  for(int idraw = 0; idraw < iheight; idraw ++){
  nl = true;
  newLine(1, 1, cursor_x);
  if((cursor_y - 1) < 0){
  setGRAM(cursor_x, cursor_y + height - 1 , cursor_x + cuiw -1 , cursor_y + height - 1);
  } else {
  setGRAM(cursor_x, cursor_y - 1 , cursor_x + cuiw -1 , cursor_y - 1);
  }
  if(off){
  for(uint16_t pc = 0; pc < iwidth; pc ++){
  uint16_t tempc = (dataFile.read() << 8); tempc = tempc + dataFile.read() ;
  if((cursor_x + pc) < width){
  WrGRAM16(tempc);
  }
  }
  } else {
  for(uint16_t pc = 0; pc < ichunk; pc ++){
  uint32_t tempc =dataFile.read() << 24; tempc = tempc + (dataFile.read() << 16);
  tempc = tempc + (dataFile.read() << 8); tempc = tempc + dataFile.read() ;
  WrGRAM(tempc);
  }
  if(even == false){
  uint16_t tempco = (dataFile.read() << 8); tempco = tempco + dataFile.read() ;
  WrGRAM16(tempco);
  }
  }
  }
  if(tempnl){
  nl = true;
  lastfsh = 1;
  }
}

void GFX4dIoD9::PrintImageWifi(String Address, uint16_t port, String hfile){
  ImageWifi(true, Address, port, hfile);
}

void GFX4dIoD9::PrintImageWifi(String WebAddr){
  ImageWifi(false, WebAddr, 0, "");
}

void GFX4dIoD9::ImageWifi(boolean local, String Address, uint16_t port, String hfile){
  if(cursor_x >= (width - 1)) return;
  boolean tempnl = false;
  if(nl){
  tempnl = true;
  newLine(lastfsh, textsizeht, 0);
  }
  HTTPClient http;
  if(local){
  http.begin(Address,port,hfile);
  Cls();
  } else {
  http.begin(Address);
  }
  int httpCode = http.GET();
  if(httpCode == 404){
  println("File Error");
  return;
  }
  uint16_t iwidth;
  uint16_t iheight;   
  uint16_t coldepth; 
  uint32_t len = http.getSize();
  uint8_t buff[2] = { 0 };
  WiFiClient * stream = http.getStreamPtr();
  size_t size = stream->available();
  int c = stream->readBytes(buff, ((size > sizeof(buff)) ? sizeof(buff) : size));
  uint8_t c0 = buff[0]; uint8_t c1 = buff[1];
  iwidth = (c0 << 8); iwidth = iwidth + c1;
  c = stream->readBytes(buff, ((size > sizeof(buff)) ? sizeof(buff) : size));
  c0 = buff[0];c1 = buff[1];
  iheight = (c0 << 8); iheight = iheight + c1;
  c = stream->readBytes(buff, ((size > sizeof(buff)) ? sizeof(buff) : size));
  c0 = buff[0];c1 = buff[1];
  coldepth = (c0 << 8); coldepth = coldepth + c1;
  uint8_t tempfsh = fsh;
  uint32_t isize = iwidth * iheight;
  uint16_t ichunk = iwidth / 2;
  uint16_t isteps = iheight / 4;
  uint16_t irem = iheight - (isteps * 4);
  if(rotation == 0 || rotation == 1 || sEnable == false){
  if(((cursor_y + iheight) - 1) > height - 1){
  iheight = iheight - ((cursor_y + iheight) - height);
  }
  }
  boolean off = false;
  boolean even = false;
  if((iwidth % 2) == 0) even = true;
  int cuiw = iwidth; 
  if((cursor_x + iwidth - 1) >= width){
  cuiw = iwidth - ((cursor_x + iwidth - 1) - width) - 1;
  off = true;
  }
  for(int idraw = 0; idraw < iheight; idraw ++){
  nl = true;
  newLine(1, 1, cursor_x);
  if((cursor_y - 1) < 0){
  setGRAM(cursor_x, cursor_y + height - 1 , cursor_x + cuiw -1 , cursor_y + height - 1);
  } else {
  setGRAM(cursor_x, cursor_y - 1 , cursor_x + cuiw -1 , cursor_y - 1);
  }
  if(off){
  for(uint16_t pc = 0; pc < iwidth; pc ++){
  c = stream->readBytes(buff, ((size > sizeof(buff)) ? sizeof(buff) : size));
  uint16_t tempc = (buff[0] << 8); tempc = tempc + buff[1] ;
  if((cursor_x + pc) < width){
  WrGRAM16(tempc);
  }
  }
  } else {
  for(uint16_t pc = 0; pc < ichunk; pc ++){
  c = stream->readBytes(buff, ((size > sizeof(buff)) ? sizeof(buff) : size));
  uint32_t tempc =buff[0] << 24; tempc = tempc + (buff[1] << 16);
  c = stream->readBytes(buff, ((size > sizeof(buff)) ? sizeof(buff) : size));
  tempc = tempc + (buff[0] << 8); tempc = tempc + buff[1] ;
  WrGRAM(tempc);
  }
  }
  }
  if(tempnl){
  nl = true;
  lastfsh = 1;
  }
}
uint8_t GFX4dIoD9::getNumberofObjects(void){
  return gciobjnum;
}

void GFX4dIoD9::Close4dGFX(){
  userImag.close();
}

void GFX4dIoD9::Open4dGFX(String file4d){
  uint8_t um;
  uint8_t strpos = 0;
  uint8_t gotchar = 0;
  uint8_t ofset = 0;
  int gciobjcount = 0;
  gciobjnum = 0;
  String inputString;
  dat4d = file4d + ".dat";
  gci4d = file4d + ".gci";
  userDat = SD.open(dat4d);
  if(userDat){
  char c;
  while(userDat.available() >0) {
  c = userDat.read();
  strpos = strpos + 1;
  if(c != char(13) && c != char(10)){
  if(c == char(34)){
  gotchar = gotchar + 1;
  }
  if(gotchar == 2){
  ofset = strpos - 1;
  gotchar = 0;
  }
  inputString = inputString + char(c);
  }
  if(c == char(13)){ 
  strpos = 0;
  String tempis = inputString;
  uint32_t tuiIndex = getIndexfromString(tempis, (2 + ofset)); 
  gciobj[gciobjcount] = tuiIndex >> 24;  
  gciobj[gciobjcount + 1] = (tuiIndex >> 16) & 0xff;
  gciobj[gciobjcount + 2] = (tuiIndex >> 8) & 0xff;
  gciobj[gciobjcount + 3] = tuiIndex & 0xff;  
  uint32_t tuiPos = getCoordfromString(tempis, (12 + ofset));
  gciobj[gciobjcount + 4] = xic >> 8;
  gciobj[gciobjcount + 5] = xic & 0xff;
  gciobj[gciobjcount + 6] = yic >> 8 & 0xff;
  gciobj[gciobjcount + 7] = yic & 0xff;
  inputString = "";
  strpos = 0;
  gciobjcount = gciobjcount + 12;
  gciobjnum = gciobjnum + 1;
  }
  }  
  }
  userDat.close();
  userImag = SD.open(gci4d);
  uint32_t tIndex;
  int twi;
  int thi;
  int objarray;
  int coldepth;
  for(int n = 0; n < gciobjnum; n ++){
  objarray = n * 12;
  tIndex = gciobj[objarray] << 24;
  tIndex = tIndex + (gciobj[objarray + 1] << 16);
  tIndex = tIndex + (gciobj[objarray + 2] << 8);
  tIndex = tIndex + gciobj[objarray + 3];
  userImag.seek(tIndex);
  gciobj[objarray + 8] = userImag.read();
  gciobj[objarray + 9] = userImag.read();
  gciobj[objarray + 10] = userImag.read();
  gciobj[objarray + 11] = userImag.read();
  coldepth = (userImag.read() << 8) + userImag.read();
  gciobjframes[n] = (userImag.read() << 8) + userImag.read();
  }
}

uint16_t GFX4dIoD9::getWidgetNumFrames(int widget){
  return gciobjframes[widget];
}

uint32_t GFX4dIoD9::getIndexfromString(String strval, uint8_t indx) {
  String tempstrval;
  for(int n = 0; n < 4; n ++){
  tempstrval = tempstrval + strval.charAt(indx + n + 4);
  }
  for(int n = 0; n < 4; n ++){
  tempstrval = tempstrval + strval.charAt(indx + n -1);
  }
  uint32_t tempaddr;
  tempaddr = strtol(&tempstrval[0], NULL, 16);
  return tempaddr;
}

uint32_t GFX4dIoD9::getCoordfromString(String strval, uint8_t indx) {
  String tempstrval = "";
  char c;
  for(int n = 0; n < 18; n ++){
  c = strval.charAt(indx + n - 1);
  if(c != char(32) && c != char(0)){
  tempstrval = tempstrval + char(c);
  }
  if(c == char(32)){
  if(tempstrval.length() > 7){
  String tbuild = "";
  for(int o = 0; o < 4; o++){
  tbuild = tbuild + tempstrval.charAt(o + 4);
  }
  tempstrval = tbuild;
  }
  xic = strtol(&tempstrval[0], NULL, 16);
  tempstrval = "";
  }
  if(c == char(0)){
  if(tempstrval.length() > 7){
  String tbuild = "";
  for(int o = 0; o < 4; o++){
  tbuild = tbuild + tempstrval.charAt(o + 4);
  }
  tempstrval = tbuild;
  }
  yic = strtol(&tempstrval[0], NULL, 16);
  break;
  }
  }
  uint32_t tempcoord;
  tempcoord = (xic << 16) & yic;
  return tempcoord;
}

void GFX4dIoD9::SmoothScrollSpeed(uint8_t spd){
  ssSpeed = spd;
}

void GFX4dIoD9::newLine(int8_t f1, int8_t ts, uint16_t ux){
  fsh1 = f1;
  nl = false;
  int tcy2;
  uint8_t remspc = ts * fsh1;
  if(rotation != 2 && rotation != 3){
  cursor_y += remspc;
  cursor_x  = ux;
  ux;
  return;
  }
  if(rotation == 2 || rotation == 3){
  uint16_t offset = 0;
  if(scrolled == false){
  if((cursor_y + remspc )< BFA){
  cursor_y += textsize * fsh1; 
  cursor_x  = ux;
  return;
  }
  }
  if(scrolled){
  uint16_t diff = ts * fsh1;
  int16_t tempy = scrollOffset;
  for(int16_t sn = 0; sn < diff + 1; sn++){
  delay(ssSpeed);  

  if(rotation == 2){
  tcy2 = BFA - scrollOffset;
  } else { 
  tcy2 = scrollOffset;
  }
  int tcy21 = tcy2 - 1;
  if(tcy21 < 0){
  tcy21 = tcy21 + BFA;
  }
  if(textbgcolor != textcolor){  
  Hline(0, tcy2, width, textbgcolor);
  Hline(0, tcy21, width, textbgcolor);
  } else {
  Hline(0, tcy2, width, BLACK);
  Hline(0, tcy21, width, BLACK);
  }
  
  if(rotation == 3){
  if((tempy + sn) > BFA){ 
  Scroll(tempy + sn - BFA);
  } else {
  Scroll(tempy + sn);
  }
  }
  if(rotation == 2){
  if((tempy - sn) < 0){ 
  Scroll(BFA - tempy - sn);
  } else {
  Scroll(tempy - sn);
  }
  }
  offset = sn; 
  }
  if(rotation == 3){
  cursor_y = tempy;
  if(cursor_y > BFA - 1){
  cursor_y = cursor_y - BFA;
  }
  }
  if(rotation == 2){
  cursor_y = BFA - tempy;
  if(cursor_y > BFA){
  cursor_y = cursor_y - BFA;
  }
  }
  cursor_x  = ux;
  }
  if(scrolled == false){
  if((cursor_y + remspc) > (BFA - 1)){
  //setScrollArea(TFA, BFA);
  int16_t diff = remspc;
  int16_t tempy = scrollOffset;
  for(int16_t sn = 0; sn < diff + 1; sn++){
  delay(ssSpeed); 

  if(rotation == 2){
  tcy2 = BFA - scrollOffset;
  } else { 
  tcy2 = scrollOffset;
  }
  int tcy21 = tcy2 - 1;
  if(tcy21 < 0){
  tcy21 = tcy21 + BFA;
  }
  if(textbgcolor != textcolor){  
  Hline(0, tcy2, width, textbgcolor);
  Hline(0, tcy21, width, textbgcolor);
  } else {
  Hline(0, tcy2, width, BLACK);
  Hline(0, tcy21, width, BLACK);
  }

  if(rotation == 3){
  if((tempy + sn) > (BFA - 1)){ 
  Scroll(tempy + sn - BFA);
  } else {
  Scroll(tempy + sn);
  }
  }
  if(rotation == 2){
  if((tempy - sn) < 0){ 
  Scroll(BFA - tempy - sn);
  } else {
  Scroll(tempy - sn);
  }
  }
  offset = sn;  
  }
  if(rotation == 3){
  cursor_y = tempy;
  }
  if(rotation == 2){
  cursor_y = (BFA - 1) - tempy + 1;
  }
  if(cursor_y > (BFA - 1)){
  cursor_y = cursor_y - BFA;
  }
  cursor_x = ux;
  }
  }  
  }
}
/*
void GFX4dIoD9::newLine(int8_t f1, int8_t ts, uint16_t ux){
  fsh1 = f1;
  nl = false;
  int tcy2;
  uint8_t remspc = ts * fsh1;
  if(rotation != 2 && rotation != 3){
  cursor_y += remspc;
  if(cursor_y > 239) cursor_y = 239;
  cursor_x  = ux;
  return;
  }
  if(rotation == 2 || rotation == 3){
  uint16_t offset = 0;
  if(scrolled == false){
  if((cursor_y + remspc )< 320){
  cursor_y += textsizeht * fsh1;
  cursor_x  = ux;
  return;
  }
  }
  if(scrolled){
  uint16_t diff = ts * fsh1;
  int16_t tempy = scrollOffset;
  for(int16_t sn = 0; sn < diff + 1; sn++){
  delay(ssSpeed);  

  if(rotation == 3){
  tcy2 = 320 - scrollOffset;
  } else { 
  tcy2 = scrollOffset;
  }
  int tcy21 = tcy2 - 1;
  if(tcy21 < 0){
  tcy21 = tcy21 + 320;
  }
  if(textbgcolor != textcolor){  
  Hline(0, tcy2, 240, textbgcolor);
  Hline(0, tcy21, 240, textbgcolor);
  } else {
  Hline(0, tcy2, 240, BLACK);
  Hline(0, tcy21, 240, BLACK);
  }
  
  if(rotation == 2){
  if((tempy + sn) > 319){ 
  Scroll(tempy + sn - 320);
  } else {
  Scroll(tempy + sn);
  }
  }
  if(rotation == 3){
  if((tempy - sn) < 0){ 
  Scroll(320 - tempy - sn);
  } else {
  Scroll(tempy - sn);
  }
  }
  offset = sn; 
  }
  if(rotation == 2){
  cursor_y = tempy;
  if(cursor_y > 319){
  cursor_y = cursor_y - 320;
  }
  }
  if(rotation == 3){
  cursor_y = 320 - tempy;
  if(cursor_y > 319){
  cursor_y = cursor_y - 320;
  }
  }
  cursor_x  = ux;
  }
  if(scrolled == false){
  if((cursor_y + remspc) > 319){
  setScrollArea(0, 0);
  int16_t diff = remspc;
  int16_t tempy = scrollOffset;
  for(int16_t sn = 0; sn < diff + 1; sn++){
  delay(ssSpeed); 

  if(rotation == 3){
  tcy2 = 320 - scrollOffset;
  } else { 
  tcy2 = scrollOffset;
  }
  int tcy21 = tcy2 - 1;
  if(tcy21 < 0){
  tcy21 = tcy21 + 320;
  }
  if(textbgcolor != textcolor){  
  Hline(0, tcy2, 240, textbgcolor);
  Hline(0, tcy21, 240, textbgcolor);
  } else {
  Hline(0, tcy2, 240, BLACK);
  Hline(0, tcy21, 240, BLACK);
  }

  if(rotation == 2){
  if((tempy + sn) > 319){ 
  Scroll(tempy + sn - 320);
  } else {
  Scroll(tempy + sn);
  }
  }
  if(rotation == 3){
  if((tempy - sn) < 0){ 
  Scroll(320 - tempy - sn);
  } else {
  Scroll(tempy - sn);
  }
  }
  offset = sn;  
  }
  if(rotation == 2){
  cursor_y = tempy;
  }
  if(rotation == 3){
  cursor_y = 319 - tempy + 1;
  }
  if(cursor_y > 319){
  cursor_y = cursor_y - 320;
  }
  cursor_x = ux;
  }
  }  
  }
}
*/ 

size_t GFX4dIoD9::write(uint8_t c) {
  if(nl){
  newLine(lastfsh, textsizeht, 0);
  }
  if (c == 10) {
  nl = true;
  lastfsh = fsh;
  lastfsw = fsw;
  }
  if (c == 13){
  }
  if(c != 10 && c != 13 && (c > 31 && c < 128)){
  if(fno == 1){   
  drawChar1(cursor_x, cursor_y, c - 32, textcolor, textbgcolor, textsize, textsizeht);
  }    
  if(fno == 2){   
  drawChar2(cursor_x, cursor_y, c - 32, textcolor, textbgcolor, textsize, textsizeht);
  }  
  cursor_x += textsize * (fsw + 1);
  if (wrap && (cursor_x > (width - textsize * (fsw + 1)))) {
  newLine(fsh, textsizeht, 0);
  }
  }
  return 1;
}

void GFX4dIoD9::drawChar2(int16_t x, int16_t y, unsigned char c, uint16_t color, uint16_t bg, uint8_t sizew, uint8_t sizeht) {
  if(rotation != 3 && rotation != 2){  
  if((x >= width)||(y >= height)||((x + (fsw + 1) * sizew - 1) < 0)||((y + fsh * sizeht - 1) < 0)){  
  return;
  }
  }
  for (int8_t j = 0; j < 16; j++ ) {
  uint8_t trow;
  trow = font2[(c * 16) + j];
  for (int8_t i = 0; i < (fsw + 1); i++) {     
  if (i == (fsw)){ 
  trow = 0x00;
  } 
  if (trow & 0x80) {
  if (sizew == 1 && sizeht == 1){
  if(y + j > 159 && (rotation == 3 || rotation == 2)){
  PutPixel(x + i, y + j - 160, color);
  } else {
  PutPixel(x + i, y + j, color);
  }
  } else {
  RectangleFilled(x + (i * sizew), y + (j * sizeht), (sizew + x) + (i * sizew) - 1, (sizeht + y) + (j * sizeht) - 1, color);
  } 
  } else if (bg != color) {
  if (sizew == 1 && sizeht == 1){
  if(y + j > 159 && (rotation == 3 || rotation == 2)){
  PutPixel(x + i, y + j - 160, bg);
  } else {
  PutPixel(x + i, y + j, bg);
  }
  } else {
  RectangleFilled(x + (i* sizew), y + (j * sizeht), (sizew + x) + (i* sizew) - 1, (sizeht + y) + (j * sizeht) - 1, bg);
  }
  }
  trow <<= 1;
  }
  }
}

void GFX4dIoD9::drawChar2tw(int16_t x, int16_t y, unsigned char c, uint16_t color, uint16_t bg, uint8_t size) {
  if((x >= width)||(y >= height)||((x + (fsw + 1) * size - 1) < 0)||((y + fsh * size - 1) < 0)){  
  return;
  }
  if(c < 32 && c > 128){
  return;
  }
  setGRAM(x, y, x + 8, y + 15);
  uint8_t trow = 0x80;
  uint8_t chb;    
  uint16_t c2pos = c * 16;
  for (uint8_t j = 0; j < 16; j++ ) {
  chb = font2[c2pos + j]; 
  for (uint8_t i = 0; i < 9; i++){
  if (chb & trow){ 
  WrGRAM16(color);
  } else {
  WrGRAM16(bg);
  }  
  chb <<= 1;
  }
  trow = 0x80;
  }
}

void GFX4dIoD9::drawChar1tw(int16_t x, int16_t y, unsigned char c, uint16_t color, uint16_t bg, uint8_t size) {
 
  if((x >= width)||(y >= height)||((x + (fsw + 1) * size - 1) < 0)||((y + fsh * size - 1) < 0)){  
  return;
  }
  if(c < 32 && c > 128){
  return;
  }
  setGRAM(x, y, x + 4, y + 7);
  uint8_t trow = 0x01;
  uint8_t chb; 
  uint8_t chb1;   
  for (uint8_t j = 0; j < 8; j++ ) { 
  for (uint8_t i = 0; i < 5; i++){
  chb = font1[(c * 5) + i]; 
  chb1 = chb >> j;  
  if (chb1 & trow){ 
  WrGRAM16(color);
  } else {
  WrGRAM16(bg);
  }  
  }
  }
}

void GFX4dIoD9::TWprintln(String istr){
  istr = istr + char(13);
  char tistr;
  uint16_t len = istr.length();
  for(int n = 0; n < len; n++){
  tistr = istr.charAt(n);
  TWwrite(tistr); 
  }
}

void GFX4dIoD9::TWprint(String istr){
  char tistr;
  uint16_t len = istr.length();
  for(int n = 0; n < len; n++){
  tistr = istr.charAt(n);
  TWwrite(tistr); 
  }
}

String GFX4dIoD9::GetCommand(){
  return cmdtxt;
  cmdtxt = "";
}

void GFX4dIoD9::TWtextcolor(uint16_t twc){
  twcolnum = twc;
  }

void GFX4dIoD9::TWwrite(const char txtinput){
  drawChar2tw(twcurx, twcury, 0, txtf, txtb, 1);
  uint16_t chracc = txtw / (fsw +1);
  uint8_t chrdwn = txth / fsh;
  int apos;
  boolean skip2 = false;
  if(txtinput > 31){
  twtext = twtext + char(txtinput);
  drawChar2tw(twcurx, twcury, txtinput - 32, twcolnum, txtb, 1);
  txtbuf[(chracc * twypos) + twxpos] = txtinput;
  txfcol[(chracc * twypos) + twxpos] = twcolnum;
  twcurx = twcurx + fsw + 1;
  twxpos ++;
  if((twcurx + 8 + 1) > (txtw + txtx)){
  twcury = twcury + 16;
  twcurx = txtx;
  twypos ++;
  twxpos = 0;
  }
  }
  if(txtinput == 9){
  uint tcnt = 0;
  uint ccpos = twcurx / 9;
  for(int n = 0; n < (chracc / 10); n++){
  tcnt = tcnt + 14;
  if(tcnt > ccpos){
  for(int o = 0; o < (tcnt - ccpos); o++){
  twcurx = twcurx + (8 + 1);
  twxpos ++;
  txtbuf[(chracc * twypos) + twxpos] = 32; // 8 + 2
  txfcol[(chracc * twypos) + twxpos] = twcolnum;
  }
  break;
  }
  }
  }
  if(txtinput == 13 || txtinput == 10){
  twcury = twcury + 16;
  twypos ++;
  uint8_t remtxt = chracc - twxpos + 1;
  twcurx = txtx;
  twxpos = 0;
  twcl = twcl + 1;
  if(txtinput == 13){
  cmdtxt = twtext;
  twtext = "";
  }
  for(int n = 0; n < remtxt; n ++){
  txtbuf[(chracc * (twypos - 1)) + (chracc - n)] = char(0);
  } 
  }
  if(txtinput == 8){
  if(twypos < 1 && twxpos < 1){
  return;
  }
  uint16_t lenct = twtext.length();  
  if((twcurx - txtx + 6) < (10) && lenct > 0 && twcury > fsh){
  skip2 = true;
  twcury = twcury - 16;
  twypos --;
  twcurx = txtx + (((txtw / 9) * 9) - 9);
  twxpos = chracc - 1; 
  drawChar2tw(twcurx, twcury, 0, twcolnum, txtb, 1);
  txtbuf[(chracc * twypos) + twxpos] = txtinput;
  txfcol[(chracc * twypos) + twxpos] = twcolnum;
  }
  if(twcurx > txtx && lenct > 0  && skip2 == false){
  twcurx = twcurx - 8 - 1;
  twxpos --;
  drawChar2tw(twcurx, twcury, 0, twcolnum, txtb, 1);
  txtbuf[(chracc * twypos) + twxpos] = txtinput;
  txfcol[(chracc * twypos) + twxpos] = twcolnum;
  }  
  String tempcmd = "";
  for(int n = 0; n < (lenct - 1); n++){
  tempcmd = tempcmd + twtext.charAt(n);
  }
  twtext = tempcmd;
  }
  if((twcury - txty) + 16 > txth){
  uint16_t tempc;
  uint16_t tempp;
  uint16_t tempcpos;
  uint16_t temptwcol;
  boolean drawspc1;
  boolean drawspc2;
  for(int n = 0; n < chrdwn - 1; n ++){
  yield();  
  for(int o = 0; o < chracc; o ++){
  tempcpos = ((n + 1) * chracc) + o;
  tempc = txtbuf[tempcpos];
  tempp = txtbuf[(n * chracc) + o];
  temptwcol = txfcol[tempcpos];
  txtbuf[(n * chracc) + o] = tempc;
  txfcol[(n * chracc) + o] = temptwcol;
  if((tempc < 33) && (tempp < 33)){
  drawspc1 = false; 
  } else {
  drawspc1 = true;
  }
  if(tempc < 32){
  tempc = 32;
  }
  drawChar2tw(txtx + (9 * o), txty + (16 * n), tempc - 32, temptwcol, txtb, 1);
  }
  }  
  twcury = twcury - 16;
  twypos --;
  RectangleFilled(twcurx, twcury, twcurx + (txtw - 1) - 1, twcury + 16, txtb);
  }
  drawChar2tw(twcurx, twcury, 63, txtf, txtb, 1);
}

void GFX4dIoD9::TWcls(){
  RectangleFilled(txtx - 3, txty - 3, (txtx - 3) + (txtw + 2) - 1, (txty - 3) + (txth + 2) - 1, txtb);
  twcurx = txtx;
  twcury = txty;
  for(int n = 0; n < sizeof(txtbuf); n ++){
  txtbuf[n] = 0;
  }
}

void GFX4dIoD9::TWcolor(uint16_t fcol){
  txtf = fcol;
  TWtextcolor(fcol);
}

void GFX4dIoD9::TWcolor(uint16_t fcol, uint16_t bcol){
  txtf = fcol;
  txtb = bcol;
  TWtextcolor(fcol);
}

void GFX4dIoD9::TextWindow(int16_t x, int16_t y, int16_t w, int16_t h, uint16_t txtcolor, uint16_t txbcolor, uint16_t frcolor){
  if(w < 24) w = 24;
  if(h < 31) h = 31;
  if(x < 0) x = 0;
  if(y < 0) y = 0;
  if((w + x) > width) w = w - ((w + x) - width);
  if((h + y) > height) h = h - ((h + y) - height);
  twxpos = 0;
  twypos = 0;
  txtwin = true;
  TWtextcolor(txtcolor);
  txtf = txtcolor;
  txtb = txbcolor;
  txtx = x + 6;
  twcurx = txtx;
  txty = y + 6;
  twcury = txty;
  txtw = w - 8;
  txth = h - 8; 
  twtext = "";
  twframe = true;
  twframecol = frcolor;
  PanelRecessed(x, y, w, h, frcolor);
  RectangleFilled(x + 3, y + 3, (x + 3) + (w - 6) - 1, (y + 3) + (h - 6) - 1, txbcolor);    
}

void GFX4dIoD9::TextWindowRestore(){
  uint16_t chracc = txtw / (fsw +1);
  uint8_t chrdwn = txth / fsh;
  txtwin = true;
  twtext = "";
  uint16_t tcoltw;
  if(twframe){
  PanelRecessed(txtx - 6, txty - 6, txtw + 8 , txth + 8, twframecol);
  RectangleFilled(txtx - 3, txty - 3, (txtx - 3) + (txtw + 2) - 1, (txty - 3) + (txth + 2) - 1, txtb);
  } else {
  RectangleFilled(txtx - 3, txty - 3, (txtx - 3) + (txtw + 2) - 1, (txty - 3) + (txth + 2) - 1, txtb);
  }
  uint16_t tempc;
  for(int n = 0; n < (chrdwn - 1); n ++){
  yield();  
  for(int o = 0; o < chracc; o ++){
  tempc = txtbuf[(n * chracc) + o];
  txtbuf[((n * chracc) +o)] = tempc;
  if(tempc < 32){
  tempc = 32;
  }
  tcoltw = txfcol[(n  * chracc) + o];
  drawChar2tw(txtx + ((fsw + 1) * o), txty + (fsh * n), tempc - 32, tcoltw, txtb, 1);
  }
  }     
}

void GFX4dIoD9::TextWindow(int16_t x, int16_t y, int16_t w, int16_t h, uint16_t txtcolor, uint16_t txbcolor){
  if(w < 22) w = 22;
  if(h < 29) h = 29;
  if(x < 0) x = 0;
  if(y < 0) y = 0;
  if((w + x) > width) w = w - ((w + x) - width);
  if((h + y) > height) h = h - ((h + y) - height);
  twxpos = 0;
  twypos = 0;
  TWtextcolor(txtcolor);
  txtwin = true;
  txtf = txtcolor;
  txtb = txbcolor;
  txtx = x + 3;
  twcurx = txtx;
  txty = y + 3;
  twcury = txty;
  txtw = w - 6;
  txth = h - 6; 
  twtext = "";  
  twframe = false;
  RectangleFilled(x, y, x + w - 1, y + h - 1, txbcolor);    
}

void GFX4dIoD9::drawChar1(int16_t x, int16_t y, unsigned char c, uint16_t color, uint16_t bg, uint8_t sizew, uint8_t sizeht){
  if(rotation != 3 && rotation != 2){
  if((x >= width) || (y >= height) || ((x + (fsw + 1) * sizew - 1) < 0) || ((y + fsh * sizeht - 1) < 0)){
  return;
  }
  }
  for (int8_t i = 0; i < (5); i++ ) {
  uint8_t tcol;
  if (i == (fsw)){ 
  tcol = 0x0;
  } else { 
  tcol = font1[(c * 5) + i];
  }
  for (int8_t j = 0; j < 8; j++) {
  if (tcol & 0x1) {
  if (sizew == 1 && sizeht == 1){
  if(y + j > 159 && (rotation == 3 || rotation == 2)){
  PutPixel(x + i, y + j - 160, color);
  } else {
  PutPixel(x + i, y + j, color);
  }
  } else { 
  RectangleFilled(x + (i * sizew), y + (j * sizeht), (sizew + x) + (i * sizew) - 1, (sizeht + y) + (j * sizeht) - 1, color); 
  }
  } else if (bg != color) {
  if (sizew == 1 && sizeht == 1){
  if(y + j > 159 && (rotation == 3 || rotation == 2)){
  PutPixel(x + i, y + j - 160, bg);
  } else {
  PutPixel(x + i, y + j, bg);
  }
  } else {
  RectangleFilled(x + i * sizew, y + j * sizeht, (sizew + x) + i * sizew - 1, (sizeht + y) + j * sizeht - 1, bg);
  }
  }
  tcol >>= 1;
  }
  }
}

void GFX4dIoD9::Arc( int16_t x0, int16_t y0, int16_t r, uint8_t sa, uint16_t color) {
  int16_t c = 1 - r;
  int16_t xx = 1;
  int16_t yy = -2 * r;
  int16_t x = 0;
  int16_t y = r;
  while (x < y) {
  if (c >= 0) {
  y--;
  yy = yy + 2;
  c = c + yy;
  }
  x++;
  xx = xx + 2;
  c = c + xx;
  if(sa & 0x4) {
  PutPixel(x0 + x, y0 + y, color);
  PutPixel(x0 + y, y0 + x, color);
  } 
  if(sa & 0x2) {
  PutPixel(x0 + x, y0 - y, color);
  PutPixel(x0 + y, y0 - x, color);
  }
  if(sa & 0x8) {
  PutPixel(x0 - y, y0 + x, color);
  PutPixel(x0 - x, y0 + y, color);
  }
  if(sa & 0x1) {
  PutPixel(x0 - y, y0 - x, color);
  PutPixel(x0 - x, y0 - y, color);
  }
  }
}

void GFX4dIoD9::setGRAM(uint16_t x0, uint16_t y0, uint16_t x1, uint16_t y1) {
  digitalWrite(_cs, LOW);
  uint32_t casCoord = ((x0 + cofset) << 16) + (x1 + cofset);
  uint32_t pasCoord = ((y0 + rofset) << 16) + (y1 + rofset);
  digitalWrite(_dc, LOW);
  SPI.write(GFX4dIoD9_CASET);
  digitalWrite(_dc, HIGH);    
  SPI.write32(casCoord);
  digitalWrite(_dc, LOW);    
  SPI.write(GFX4dIoD9_PASET);
  digitalWrite(_dc, HIGH);    
  SPI.write32(pasCoord);
  digitalWrite(_dc, LOW);    
  SPI.write(GFX4dIoD9_RAMWR);
  digitalWrite(_dc, HIGH);
  digitalWrite(_cs, HIGH);
}

void GFX4dIoD9::setGRAM_(uint16_t x0, uint16_t y0, uint16_t x1, uint16_t y1) {
  uint32_t casCoord = ((x0 + cofset) << 16) + (x1 + cofset);
  uint32_t pasCoord = ((y0 + rofset) << 16) + (y1 + rofset);
  digitalWrite(_dc, LOW);
  SPI.write(GFX4dIoD9_CASET);
  digitalWrite(_dc, HIGH);
  SPI.write32(casCoord);
  digitalWrite(_dc, LOW);
  SPI.write(GFX4dIoD9_PASET);
  digitalWrite(_dc, HIGH);
  SPI.write32(pasCoord);
  digitalWrite(_dc, LOW);
  SPI.write(GFX4dIoD9_RAMWR);
  digitalWrite(_dc, HIGH);
}

void GFX4dIoD9::WrGRAM(uint32_t color) {
  SPI.beginTransaction(spiSettings);
  digitalWrite(_dc, HIGH);  
  digitalWrite(_cs, LOW);
  SPI.write32(color, true);
  digitalWrite(_cs, HIGH);
  SPI.endTransaction();
}

void GFX4dIoD9::WrGRAM16(uint16_t color) {
  SPI.beginTransaction(spiSettings);
  digitalWrite(_dc, HIGH);  
  digitalWrite(_cs, LOW);
  SPI.write16(color, true);
  digitalWrite(_cs, HIGH);
  SPI.endTransaction();
}

void GFX4dIoD9::WrGRAMs16(uint16_t *data, uint16_t l) {
  uint32_t tdw;
  SPI.beginTransaction(spiSettings);
  digitalWrite(_dc, HIGH);  
  digitalWrite(_cs, LOW);
  while(l--){
  tdw = *data++;
  SPI.write16(tdw, true);
  }
  digitalWrite(_cs, HIGH);
  SPI.endTransaction();
}

void GFX4dIoD9::WrGRAMs(uint32_t *data, uint16_t l, boolean even) {
  uint32_t tdw;
  if(!even) l--;
  SPI.beginTransaction(spiSettings);
  digitalWrite(_dc, HIGH);  
  digitalWrite(_cs, LOW);
  while(l--){
  tdw = *data++;
  SPI.write32(tdw, true);
  }
  if(!even){ 
  tdw = *data++; 
  SPI.write16(tdw, true);
  }
  digitalWrite(_cs, HIGH);
  SPI.endTransaction();
}

void GFX4dIoD9::WrGRAMs(uint32_t *data, uint16_t l) {
  uint32_t tdw;
  SPI.beginTransaction(spiSettings);
  digitalWrite(_dc, HIGH);  
  digitalWrite(_cs, LOW);
  while(l--){
  tdw = *data++;
  SPI.write32(tdw, true);
  }
  digitalWrite(_cs, HIGH);
  SPI.endTransaction();
}

void GFX4dIoD9::PutPixel(int16_t x, int16_t y, uint16_t color) {
  if((x < 0) || (x >= (width -1)) || (y < 0) || (y >= (height - 1))) {
  return;
  }
  SPI.beginTransaction(spiSettings);
  digitalWrite(_cs, LOW);
  uint32_t casCoord = ((x + cofset) << 16) + ((x + cofset) + 1);
  uint32_t pasCoord = ((y + rofset) << 16) + ((y + rofset) + 1);
  digitalWrite(_dc, LOW);
  SPI.write(GFX4dIoD9_CASET);
  digitalWrite(_dc, HIGH);    
  SPI.write32(casCoord);
  digitalWrite(_dc, LOW);    
  SPI.write(GFX4dIoD9_PASET);
  digitalWrite(_dc, HIGH);    
  SPI.write32(pasCoord);
  digitalWrite(_dc, LOW);    
  SPI.write(GFX4dIoD9_RAMWR);
  digitalWrite(_dc, HIGH);
  SPI.write16(color, true);  
  digitalWrite(_cs, HIGH);
  SPI.endTransaction();
}

void GFX4dIoD9::Vline(int16_t x, int16_t y, int16_t h, uint16_t vcolor) {
  if (x >= width || x < 0) return;
  if (h < 0) {
  y += h;
  h *= -1;
  }
  if (y < 0) {
  h += y;
  y = 0;
  }
  if((y + h - 1) >= height)   h = height - y;
  SPI.beginTransaction(spiSettings);
  digitalWrite(_cs, LOW); 
  uint32_t casCoord = ((x + cofset) << 16) + (x + cofset);
  uint32_t pasCoord = ((y + rofset) << 16) + ((y + rofset) + h - 1);
  digitalWrite(_dc, LOW);
  SPI.write(GFX4dIoD9_CASET);
  digitalWrite(_dc, HIGH);    
  SPI.write32(casCoord);
  digitalWrite(_dc, LOW);    
  SPI.write(GFX4dIoD9_PASET);
  digitalWrite(_dc, HIGH);    
  SPI.write32(pasCoord);
  digitalWrite(_dc, LOW);    
  SPI.write(GFX4dIoD9_RAMWR);
  digitalWrite(_dc, HIGH);
  for(int vl = 0; vl < h; vl ++){
  SPI.write16(vcolor);
  }
  digitalWrite(_cs, HIGH);
  SPI.endTransaction();
}

void GFX4dIoD9::Hline(int16_t x, int16_t y, int16_t w, uint16_t hcolor) {
  if (y >= height || y < 0) return;
  if (w < 0) {
  x += w;
  w *= -1;
  }
  if (x < 0) {
  w += x;
  x = 0;
  }
  if ((x+w-1) >= width)  w = width-x;
  SPI.beginTransaction(spiSettings);
  digitalWrite(_cs, LOW); 
  uint32_t casCoord = ((x + cofset) << 16) + ((x + cofset) + w - 1);
  uint32_t pasCoord = ((y + rofset) << 16) + (y + rofset);
  digitalWrite(_dc, LOW);
  SPI.write(GFX4dIoD9_CASET);
  digitalWrite(_dc, HIGH);    
  SPI.write32(casCoord);
  digitalWrite(_dc, LOW);    
  SPI.write(GFX4dIoD9_PASET);
  digitalWrite(_dc, HIGH);    
  SPI.write32(pasCoord);
  digitalWrite(_dc, LOW);    
  SPI.write(GFX4dIoD9_RAMWR);
  digitalWrite(_dc, HIGH);
  for(int hl = 0; hl < w; hl ++){
  SPI.write16(hcolor);
  }  
  digitalWrite(_cs, HIGH);
  SPI.endTransaction();
}

void GFX4dIoD9::Cls(uint16_t color){
  RectangleFilled(0, 0, width, height, color);
  cursor_x = 0;
  cursor_y = 0;
  Scroll(0);
  scrolled = false;
  nl = false;
}

void GFX4dIoD9::Cls(){
  RectangleFilled(0, 0, width, height, BLACK);
  cursor_x = 0;
  cursor_y = 0;
  Scroll(0);
  scrolled = false;
  nl = false;
}

void GFX4dIoD9::FillScreen(uint16_t color){
  RectangleFilled(0, 0, width, height, color);
}

void GFX4dIoD9::RectangleFilled(int16_t x, int16_t y, int16_t x1, int16_t y1, uint16_t color) {
  if (x > x1) {
  swap(x, x1);
  }
  if (y > y1) {
  swap(y, y1);
  } 
  if((x >= width) || (y >= height) || (x1 < 0) || (y1 < 0)) {
  return;
  } 
  if(x < 0) x = 0;
  if(y < 0) y = 0;
  if(x1 >= width){
  x1 = width -1;
  }
  if(y1 >= height){
  y1 = height-1;
  }
  int w = x1 - x + 1;
  int h = y1 - y + 1;
  SPI.beginTransaction(spiSettings);
  digitalWrite(_cs, LOW);
  uint32_t casCoord = ((x + cofset) << 16) + ((x + cofset)+ w - 1);
  uint32_t pasCoord = ((y + rofset) << 16) + ((y + rofset) + h - 1);
  digitalWrite(_dc, LOW);
  SPI.write(GFX4dIoD9_CASET);
  digitalWrite(_dc, HIGH);    
  SPI.write32(casCoord);
  digitalWrite(_dc, LOW);    
  SPI.write(GFX4dIoD9_PASET);
  digitalWrite(_dc, HIGH);    
  SPI.write32(pasCoord);
  digitalWrite(_dc, LOW);    
  SPI.write(GFX4dIoD9_RAMWR);
  digitalWrite(_dc, HIGH);
  uint8_t colorS[] = { (uint8_t) (color >> 8), (uint8_t) color };
  SPI.writePattern(&colorS[0], 2, (w * h));
  digitalWrite(_cs, HIGH);
  SPI.endTransaction();
}

void GFX4dIoD9::Panel(int16_t x, int16_t y, int16_t w, int16_t h, uint16_t colorp) {
  RectangleFilled(x + 2, y + 2, (x + 2) + (w - 3) - 1, (y + 2) + (h - 3) - 1, colorp);
  uint32_t tcol = bevelColor(colorp);
  uint16_t _dark = tcol >> 16;
  uint16_t _light = tcol & 0xffff;
  Hline(x, y, w, _light);
  Hline(x + 1, y + 1, w - 2, _light);
  Vline(x, y, h, _light);
  Vline(x + 1, y + 1, h - 2, _light);
  Hline(x, y + h - 1, w, _dark);
  Hline(x + 1, y + h - 2, w - 2, _dark);
  Vline(x + w - 1, y, h, _dark);
  Vline(x + w - 2, y + 1, h - 2, _dark);
}

void GFX4dIoD9::PanelRecessed(int16_t x, int16_t y, int16_t w, int16_t h, uint16_t colorpr) {
  RectangleFilled(x, y, x + w - 1, y + h - 1 , colorpr);
  uint32_t tcol = bevelColor(colorpr);
  uint16_t _dark = tcol >> 16;
  uint16_t _light = tcol & 0xffff;
  Hline(x + 2, y + 2, w -4, _dark);
  Vline(x + 2, y + 2, h - 4, _dark);
  Hline(x + 3, y + h - 3, w - 5, _light);
  Vline(x + w - 3, y + 3, h - 5, _light);
}

void GFX4dIoD9::Buttonx(uint8_t hndl, int16_t x, int16_t y, int16_t w, int16_t h, uint16_t colorb, String btext, int8_t tfont, uint16_t tcolor) {
  boolean nlbckp = nl;
  nl = false;
  bactive[hndl] = true;
  bposx[hndl] = x;
  bposy[hndl] = y;
  bposw[hndl] = w;
  bposh[hndl] = h;
  bposc[hndl] = colorb;
  drawButton(0, x, y, w, h, colorb, btext, tfont, 1, 1, tcolor);
}

void GFX4dIoD9::Button(uint8_t state, int16_t x, int16_t y, uint16_t colorb, uint16_t tcolor, int8_t tfont, int8_t tfontsizeh, int8_t tfontsize, String btext) {
  uint8_t sl = btext.length();
  uint8_t fsww;
  uint8_t fshh;
  if(tfont == 1){
  fsww = 6;
  fshh = 8;
  } else {
  fsww = 8;
  fshh = 16;
  }
  uint16_t sw = sl * fsww * tfontsize;
  uint16_t sh = fshh * tfontsizeh;
  drawButton(state, x, y, sw + (19 * tfontsize), sh + (9 * tfontsizeh), colorb, btext, tfont, tfontsize, tfontsizeh, tcolor);
}

void GFX4dIoD9::Slider(uint8_t state, int16_t x, int16_t y, int16_t r, int16_t b, uint16_t colorb, uint16_t colort, int16_t scale, int16_t value){
  int w = r - x;
  int h = b - y;
  drawButton(state, x, y, w, h, colorb, "", 1, 1, 1, colorb);
  uint16_t thw;
  uint16_t thh = h - 4;
  uint16_t ra = w - 4;
  thw = ra / 10;
  if(thw < 5){
  thw = 5;
  }
  float rs = (((float)ra - (float)thw) / (float)scale) * (float)value;
  int rsc = (int)rs;
  RectangleFilled(x + 2 + rsc, y + 2, x + 2 + rsc + thw - 1, y + 2 + thh - 1, colort);
  Hline(x + 2 + rsc, y + 2, thw, tlight);
  Vline(x + 2 + rsc, y + 2, thh, tlight);
  Hline(x + 2 + rsc, y + 1 + thh, thw, tdark);
  Vline(x + 2 + rsc + thw, y + 2, thh, tdark);
}

void GFX4dIoD9::drawButton(uint8_t updn, int16_t x, int16_t y, int16_t w, int16_t h, uint16_t colorb, String btext, int8_t tfont, int8_t tfontsize, int8_t tfontsizeht, uint16_t tcolor) {
  boolean twrap = wrap;
  boolean nlbckp = nl;
  nl = false;
  wrap = false;
  int8_t fnobckup = fno;
  int8 tfw;
  int8 tfh;
  if(tfont < 2){
  tfw = 6;
  tfh = 8;
  } else {
  tfw = 9;
  tfh = 16;
  }
  uint8_t fsizebckup = textsize;
  uint8_t fsizehbckup = textsizeht;
  textsize = tfontsize;
  textsizeht = tfontsizeht;
  uint16_t tcolorbckup = textcolor;
  uint16_t tcolorbgbckup = textbgcolor;
  uint16_t curxbckup = cursor_x;
  uint16_t curybckup = cursor_y;
  RectangleFilled(x + 2, y + 2, (x + 2) + w - 4, (y + 2) + h - 4, colorb);
  uint32_t tcol = bevelColor(colorb);
  uint16_t _dark = tcol >> 16;
  uint16_t _light = tcol & 0xffff;
  tdark = _dark;
  tlight = _light;
  if(updn == 0){
  Hline(x, y, w, _light);
  Hline(x + 1, y + 1, w - 2, _light);
  Vline(x, y, h, _light);
  Vline(x + 1, y + 1, h - 2, _light);
  Hline(x, y + h - 1, w, _dark);
  Hline(x + 1, y + h - 2, w - 2, _dark);
  Vline(x + w - 1, y, h, _dark);
  Vline(x + w - 2, y + 1, h - 2, _dark);
  }
  if(updn == 1){
  Hline(x, y, w, _dark);
  Hline(x + 1, y + 1, w - 2, _dark);
  Vline(x, y, h, _dark);
  Vline(x + 1, y + 1, h - 2, _dark);
  Hline(x, y + h - 1, w, _light);
  Hline(x + 1, y + h - 2, w - 2, _light);
  Vline(x + w - 1, y, h, _light);
  Vline(x + w - 2, y + 1, h - 2, _light);
  }
  TextColor(tcolor, tcolor);
  Font(tfont);
  uint8_t blen = btext.length();
  if(blen > 0){
  MoveTo(((x + (w / 2) - ((blen * tfw * textsize) / 2)) + updn), ((y + (h / 2) - ((tfh * textsizeht)/ 2)) + 1 + updn));
  print(btext);
  }
  TextColor(tcolorbckup, tcolorbgbckup);
  Font(fnobckup);
  textsize = fsizebckup;
  textsizeht = fsizehbckup;
  MoveTo(curxbckup, curybckup);
  nl = nlbckp;
  wrap = twrap;
}

uint16_t GFX4dIoD9::getScrolledY(uint16_t y){
  uint16_t SY = y; 
  if(rotation == 2 || rotation == 3){
  if(rotation == 2 && scrolled == true){
  SY = 160 - scrollOffset + y;
  if(SY > 159){
  SY = SY - 160;
  }
  }
  if(rotation == 3 && scrolled == true){ 
  SY = scrollOffset + y;
  if(SY > 159){
  SY = SY - 160;
  }
  }
  }
  return SY;
}

uint32_t GFX4dIoD9::bevelColor(uint16_t colorb){
  c565toRGBs(colorb);
  RGB2HLS();
  uint8_t oldred = GFX4dIoD9_RED;
  uint8_t oldgreen = GFX4dIoD9_GREEN;
  uint8_t oldblue = GFX4dIoD9_BLUE;
  uint8_t tl = l;
  uint8_t th = h;
  uint8_t ts = s;
  HLS2RGB(th, tl - 18, ts);
  if(GFX4dIoD9_RED > oldred){
  GFX4dIoD9_RED = 0;
  }
  if(GFX4dIoD9_GREEN > oldgreen){
  GFX4dIoD9_GREEN = 0;
  }
  if(GFX4dIoD9_BLUE > oldblue){
  GFX4dIoD9_BLUE = 0;
  }
  uint16_t _dark = RGBs2COL(GFX4dIoD9_RED, GFX4dIoD9_GREEN, GFX4dIoD9_BLUE);
  HLS2RGB(th, tl + 18, ts);
  uint16_t _light = RGBs2COL(GFX4dIoD9_RED, GFX4dIoD9_GREEN, GFX4dIoD9_BLUE);
  uint32_t bevcol = (_dark << 16) + _light;
  return bevcol;
}

void GFX4dIoD9::ButtonDown(int hndl) {
  uint16_t x = bposx[hndl];
  uint16_t y = bposy[hndl];
  uint16_t w = bposw[hndl];
  uint16_t h = bposh[hndl];
  uint16_t colorbd = bposc[hndl];
  uint32_t tcol = bevelColor(colorbd);
  uint16_t _dark = tcol >> 16;
  uint16_t _light = tcol & 0xffff;
  Hline(x, y, w, colorbd);
  Hline(x + 1, y + 1, w - 2, colorbd);
  Vline(x, y, h, colorbd);
  Vline(x + 1, y + 1, h - 2, colorbd);
  Hline(x, y + h - 1, w, _dark);
  Hline(x + 1, y + h - 2, w - 2, colorbd);
  Vline(x + w - 1, y, h, _dark);
  Vline(x + w - 2, y + 1, h - 2, colorbd);
}

void GFX4dIoD9::ButtonUp(int hndl) {
  if(bactive[hndl]){
  uint16_t x = bposx[hndl];
  uint16_t y = bposy[hndl];
  uint16_t w = bposw[hndl];
  uint16_t h = bposh[hndl];
  uint16_t colorbu = bposc[hndl];
  uint32_t tcol = bevelColor(colorbu);
  uint16_t _dark = tcol >> 16;
  uint16_t _light = tcol & 0xffff;
  Hline(x, y, w, _light);
  Hline(x + 1, y + 1, w - 2, _light);
  Vline(x, y, h, _light);
  Vline(x + 1, y + 1, h - 2, _light);
  Hline(x, y + h - 1, w, _dark);
  Hline(x + 1, y + h - 2, w - 2, _dark);
  Vline(x + w - 1, y, h, _dark);
  Vline(x + w - 2, y + 1, h - 2, _dark);
  }
}

void GFX4dIoD9::ButtonActive(uint8_t butno, boolean act){
  bactive[butno] = act;
}

void GFX4dIoD9::DeleteButton(uint8_t hndl){
  RectangleFilled(bposx[hndl], bposy[hndl], bposx[hndl] + bposw[hndl] - 1, bposy[hndl] + bposh[hndl] - 1, bposc[hndl]);
  bactive[hndl] = false;
}

void GFX4dIoD9::DeleteButton(uint8_t hndl, uint16_t color){
  RectangleFilled(bposx[hndl], bposy[hndl], bposx[hndl] + bposw[hndl] - 1, bposy[hndl] + bposh[hndl] - 1, color);
  bactive[hndl] = false;
}

uint16_t GFX4dIoD9::RGBto565(uint8_t rc, uint8_t gc, uint8_t bc) {
  return (((rc & 0xF8) << 8) | ((gc & 0xFC) << 3) | (bc >> 3));
}

void GFX4dIoD9::Orientation(uint8_t m) {
  SPI.beginTransaction(spiSettings);  
  digitalWrite(_dc, LOW);
  digitalWrite(_cs, LOW);
  SPI.write(0x36);
  digitalWrite(_cs, HIGH);
  rotation = m % 4;
  switch (rotation) {
  case 2:
  digitalWrite(_dc, HIGH);
  digitalWrite(_cs, LOW);
  //SPI.write(0x48);
  SPI.write(MADCTL_MX | MADCTL_MY | MADCTL_RGB);
  digitalWrite(_cs, HIGH);   
  width  = GFX4dIoD9_TFTWIDTH;
  height = GFX4dIoD9_TFTHEIGHT;
  rotation = 2;
  cofset = 24;
  rofset = 0;
  break;
  case 0:
  digitalWrite(_dc, HIGH);
  digitalWrite(_cs, LOW);
  //SPI.write(0x28);
  //SPI.write(0x40 | 0x80 | 0x08);
  SPI.write(MADCTL_MY | MADCTL_MV | MADCTL_RGB);
  digitalWrite(_cs, HIGH); 
  width  = GFX4dIoD9_TFTHEIGHT;
  height = GFX4dIoD9_TFTWIDTH;
  rotation = 0;
  cofset = 0;
  rofset = 24;
  break;
  case 3:
  digitalWrite(_dc, HIGH);
  digitalWrite(_cs, LOW);
  //SPI.write(0x88);
  SPI.write(MADCTL_RGB);  
  digitalWrite(_cs, HIGH); 
  width  = GFX4dIoD9_TFTWIDTH;
  height = GFX4dIoD9_TFTHEIGHT;
  rotation = 3;     
  cofset = 24;
  rofset = 0;
  break;
  case 1:
  digitalWrite(_dc, HIGH);
  digitalWrite(_cs, LOW);
  //SPI.write(0xE8);
  SPI.write(MADCTL_MX | MADCTL_MV | MADCTL_RGB);
  digitalWrite(_cs, HIGH); 
  width  = GFX4dIoD9_TFTHEIGHT;
  height = GFX4dIoD9_TFTWIDTH;
  rotation = 1;
  cofset = 0;
  rofset = 24;
  break;
  }
  SPI.endTransaction();
}


void GFX4dIoD9::Invert(boolean i) {
  SPI.beginTransaction(spiSettings);  
  if(i){
  SetCommand(GFX4dIoD9_INVON);
  } else {
  SetCommand(GFX4dIoD9_INVOFF);
  }
  SPI.endTransaction();  
}

uint8_t GFX4dIoD9::ReadCommand(uint8_t c, uint8_t index) {
  SPI.beginTransaction(spiSettings);
  digitalWrite(_cs, LOW);
  digitalWrite(_dc, LOW);
  SPI.write(0xD9);
  digitalWrite(_dc, HIGH);
  SPI.write(0x10 + index);
  digitalWrite(_dc, LOW);
  SPI.write(c);
  digitalWrite(_dc, HIGH);
  uint8_t r = SPI.transfer(0x00);
  digitalWrite(_cs, HIGH);
  SPI.endTransaction();  
  return r;
}
 
void GFX4dIoD9::SetCommand(uint8_t c) {
  digitalWrite(_dc, LOW);
  digitalWrite(_cs, LOW); 
  SPI.write(c);
  digitalWrite(_cs, HIGH);
}

void GFX4dIoD9::SetData(uint8_t c) {
  digitalWrite(_dc, HIGH);
  digitalWrite(_cs, LOW);
  SPI.write(c);
  digitalWrite(_cs, HIGH);
} 

void GFX4dIoD9::SetData(uint8_t * data, uint8_t size) {
  digitalWrite(_dc, HIGH);
  digitalWrite(_cs, LOW);
  SPI.writeBytes(data, size);
  digitalWrite(_cs, HIGH);
}

void GFX4dIoD9::BacklightOn(boolean bl) {
  if(bl){  
  digitalWrite(_disp, HIGH);
  } else {
  digitalWrite(_disp, LOW);
  }
}

int16_t GFX4dIoD9::getHeight(void) {
  return height;
}

int16_t GFX4dIoD9::getWidth(void){
  return width;
}

int16_t GFX4dIoD9::getX(void){
  return cursor_x;
}

int16_t GFX4dIoD9::getY(void){
  return cursor_y;
}

int8_t GFX4dIoD9::Orientation(void){
  return rotation;
}

int16_t GFX4dIoD9::getScrollOffset(void){
  return scrollOffset;
}

uint16_t GFX4dIoD9::read16(void) {
  uint16_t result;
  result = (dataFile.read() << 8) + dataFile.read();
  return result;
}

uint32_t GFX4dIoD9::read32(void) {
  uint32_t result;
  result = (dataFile.read() << 24) + (dataFile.read() << 16);
  result = result + (dataFile.read() << 8) + dataFile.read();
return result;
}

void GFX4dIoD9::UserCharacter(uint32_t *data, uint8_t ucsize, int16_t ucx, int16_t ucy, uint16_t color, uint16_t bgcolor) {
  uint8_t top = 0; uint8_t left = 0;
  uint32_t tdw; uint32_t pix1; uint32_t pix2;
  int mx; int my;
  tdw = *data++;
  uint8_t ucwidth = tdw;
  tdw = *data++;
  uint8_t ucheight = tdw;
  uint16_t ucloop = (ucwidth * ucheight) / 2;
  uint32_t test2 = 0;
  tdw = *data++;
  if(ucx > -1 && ucy > -1 && (ucx + ucwidth - 1) < (width) && (ucy + ucheight - 1) < (height)){
  setGRAM(ucx, ucy, ucx + ucwidth - 1, ucy + ucheight - 1);
  for(int c = 0; c < ucloop; c++){
  test2 = (tdw >> (ucwidth - 1) - left) & 0x1;
  pix1 = bgcolor;
  if(test2 == 1) pix1 = color;
  left++;
  test2 = (tdw >> (ucwidth - 1) - left) & 0x1;
  pix2 = bgcolor;
  if(test2 == 1) pix2 = color;
  left++;
  if(left > (ucwidth - 1)){
  left = 0;
  tdw = *data++;
  }
  WrGRAM((pix1 << 16) + pix2);
  }
  } else {
  for(int c = 0; c < ucloop; c++){
  mx = ucx + left; my = ucy + top;
  test2 = (tdw >> (ucwidth - 1) - left) & 0x1;
  if((mx) > -1 && (my) > -1 && (mx) < (width) && (my) < (height)){
  if(test2 == 1){
  PutPixel(mx, my, color);
  } else {
  PutPixel(mx, my, bgcolor);
  }
  }
  left++;
  mx = ucx + left;
  test2 = (tdw >> (ucwidth - 1) - left) & 0x1;
  if((mx) > -1 && (my) > -1 && (mx) < (width) && (my) < (height)){
  if(test2 == 1){
  PutPixel(mx, my, color);
  } else {
  PutPixel(mx, my, bgcolor);
  }
  }
  left++;
  if(left > (ucwidth - 1)){
  left = 0;
  top++;
  tdw = *data++;
  }
  }
  }
}

void GFX4dIoD9::UserImageDR(uint8_t ui, uint16_t uxpos, uint16_t uypos, uint16_t uwidth, uint16_t uheight, uint16_t tuix, uint16_t tuiy){
  if(uxpos >= width || uypos >= height || uxpos < 0 || uypos < 0) return;
  if((uxpos + uwidth - 1) < 0 || (uypos + uheight - 1) < 0) return;
  if((uxpos + uwidth - 1) > width || (uypos + uheight - 1) > height) return;
  boolean setemp = sEnable;
  ScrollEnable(false);
  int gciapos = (ui) * 12;
  uint32_t bgoff;
  uint32_t tuiIndex;
  tuiIndex = gciobj[gciapos] << 24;
  tuiIndex = tuiIndex + (gciobj[gciapos + 1] << 16);
  tuiIndex = tuiIndex + (gciobj[gciapos + 2] << 8);
  tuiIndex = tuiIndex + gciobj[gciapos + 3];
  if(userImag){
  String resultFO = "Success. ";
  } else {
  return;
  }
  userImag.seek(tuiIndex);
  uint16_t iwidth = (userImag.read() << 8); iwidth = iwidth + userImag.read();
  uint16_t iheight = (userImag.read() << 8); iheight =  iheight + userImag.read();
  uint16_t coldepth = (userImag.read() << 8); coldepth = coldepth + userImag.read();
  if(uxpos + uwidth > iwidth){
  uwidth = iwidth - uxpos;
  }
  if(uypos + uheight > iheight){
  uheight = iheight - uypos;
  }
  if(uwidth % 2){
  uwidth = uwidth - 1;
  }
  if(uheight % 2){
  uheight = uheight - 1;
  } 
  if(uwidth < 2 || uheight < 2){
  return;
  }
  uint16_t left = 0;
  uint32_t uoff = (((uypos * iwidth) + uxpos) * 2);
  uint16_t cpos;
  uint32_t isize = (iwidth * iheight);
  uint32_t isize2 = uwidth * uheight;
  bgoff = tuiIndex + 6 + uoff + 0;
  userImag.seek(bgoff);
  uint32_t ichunk = isize2 / 2;
  uint32_t cbuff[500];
  cpos = 0;
  setGRAM(tuix, tuiy, tuix + uwidth  -1, tuiy + uheight -1);
  for(uint32_t idraw = 0; idraw < ichunk; idraw ++){
  uint32_t tempc =userImag.read() << 24; tempc = tempc + (userImag.read() << 16);
  tempc = tempc + (userImag.read() << 8); tempc = tempc + userImag.read() ;
  cbuff[cpos] = tempc;
  cpos++;
  left++;
  left++;
  if(left > (uwidth - 1)){
  left = 0;
  bgoff = bgoff + ((iwidth) * 2);
  userImag.seek(bgoff + (left * 2));
  }
  if(cpos == 500){
  WrGRAMs(cbuff, cpos);
  cpos = 0;
  }
  }  
  if(cpos > 0){
  WrGRAMs(cbuff, cpos);  
  }
  ScrollEnable(setemp);
}

void GFX4dIoD9::UserImagesDR(uint8_t uino, int frames, uint16_t uxpos, uint16_t uypos, uint16_t uwidth, uint16_t uheight){
  if(uxpos >= width || uypos >= height || uxpos < 0 || uypos < 0) return;
  if((uxpos + uwidth - 1) < 0 || (uypos + uheight - 1) < 0) return;
  if((uxpos + uwidth - 1) > width || (uypos + uheight - 1) > height) return;
  uint32_t bgoff;
  boolean setemp = sEnable;
  ScrollEnable(false);
  int gciapos = (uino) * 12;
  uint32_t tuiIndex;
  uint16_t tuix;
  uint16_t tuiy;
  uint16_t tuiw;
  uint16_t tuih;
  uint8_t cdv;
  tuiIndex = (gciobj[gciapos] << 24);
  tuiIndex = tuiIndex + (gciobj[gciapos + 1] << 16);
  tuiIndex = tuiIndex + (gciobj[gciapos + 2] << 8);
  tuiIndex = tuiIndex + gciobj[gciapos + 3];
  userImag.seek(tuiIndex + 4);
  cdv = userImag.read();
  tuix = gciobj[gciapos + 4] << 8;
  tuix = tuix + gciobj[gciapos + 5];
  tuiy = gciobj[gciapos + 6] << 8;
  tuiy = tuiy + gciobj[gciapos + 7];
  tuiw = gciobj[gciapos + 8] << 8;
  tuiw = tuiw + gciobj[gciapos + 9];
  tuih = gciobj[gciapos + 10] << 8;
  tuih = tuih + gciobj[gciapos + 11];
  if(uxpos + uwidth > tuiw){
  uwidth = tuiw - uxpos;
  }
  if(uypos + uheight > tuih){
  uheight = tuih - uypos;
  }
  if(uwidth % 2){
  uwidth = uwidth - 1;
  }
  if(uheight % 2){
  uheight = uheight - 1;
  } 
  if(uwidth < 2 || uheight < 2){
  return;
  }
  if(!userImag){
  return;
  }
  uint16_t top = 0;
  uint16_t left = 0;
  uint16_t pix1;
  uint16_t cpos;
  uint16_t bc;
  uint32_t isize = tuiw * tuih;
  uint16_t isize2 = uwidth * uheight;
  uint32_t pos;
  uint32_t uoff;
  if(cdv == 8){
  pos = (isize * frames);
  uoff = ((uypos * tuiw) + uxpos);
  } else {
  pos = (isize * frames) * 2;
  uoff = (((uypos * tuiw) + uxpos) * 2);
  }
  bgoff = tuiIndex + 8 + pos + uoff + 0;
  userImag.seek(bgoff);
  uint32_t ichunk = isize2 / 2;
  uint32_t cbuff[500];
  uint32_t tempc;
  cpos = 0;
  if(frames > (gciobjframes[uino]- 1) || frames < 0){
  outofrange(tuix + uxpos, tuiy + uypos, uwidth, uheight);
  ScrollEnable(setemp);
  return;
  }
  setGRAM(tuix + uxpos, tuiy + uypos, tuix + uxpos + uwidth  -1, tuiy + uypos + uheight -1);
  for(uint32_t idraw = 0; idraw < ichunk; idraw ++){
  if(cdv == 8){
  tempc = RGB3322565[userImag.read()] << 16;
  tempc = tempc + RGB3322565[userImag.read()]; 
  } else {
  tempc = userImag.read() << 24; tempc = tempc + (userImag.read() << 16);
  tempc = tempc + (userImag.read() << 8); tempc = tempc + userImag.read() ;
  }
  cbuff[cpos] = tempc;
  cpos++;
  left++;
  left++;
  if(left > (uwidth - 1)){
  left = 0;
  if(cdv == 8){
  bgoff = bgoff + ((tuiw));
  userImag.seek(bgoff + (left));
  } else {
  bgoff = bgoff + ((tuiw) * 2);
  userImag.seek(bgoff + (left * 2));
  }
  }
  if(cpos == 500){
  WrGRAMs(cbuff, cpos);
  cpos = 0;
  }
  }  
  if(cpos > 0){ 
  WrGRAMs(cbuff, cpos); 
  }
  ScrollEnable(setemp);
} 

void GFX4dIoD9::UserCharacterBG(uint32_t *data, uint8_t ucsize, uint16_t ucx, uint16_t ucy, uint16_t color, boolean draw, uint32_t bgindex) {
  if(!dataFile){
  return;
  }
  if(ucx < 0 || ucy < 0) return;
  dataFile.seek(bgindex);
  uint16_t bwidth = (dataFile.read() << 8) + dataFile.read();
  uint16_t bheight = (dataFile.read() << 8) + dataFile.read();
  uint32_t bgoff = bgindex + 6 + (((ucy * bwidth) + ucx) * 2);
  uint8_t top = 0;
  uint8_t left = 0;
  uint32_t tdw;
  uint32_t pix1;
  uint32_t pix2;
  tdw = *data++;
  uint8_t ucwidth = tdw;
  tdw = *data++;
  uint8_t ucheight = tdw;
  if((ucx + ucwidth - 1) > (width - 1) || (ucy + ucheight - 1) > (height - 1)) return; 
  uint16_t ucloop = (ucwidth * ucheight) / 2;
  setGRAM(ucx, ucy, ucx + ucwidth - 1, ucy + ucheight - 1);
  uint32_t test = 2 ^ (ucwidth - 1);
  uint32_t test2 = 0;
  uint32_t bgbuf[ucloop];
  tdw = *data++;
  for(int c = 0; c < ucloop; c++){
  test2 = (tdw >> (ucwidth - 1) - left) & 0x1;
  if(test2 == 1 && draw){
  pix1 = color;
  } else {
  dataFile.seek(bgoff + (left * 2));
  pix1 = (dataFile.read() << 8) + dataFile.read();
  }
  left++;
  test2 = (tdw >> (ucwidth - 1) - left) & 0x1;
  if(test2 == 1 && draw){
  pix2 = color;
  } else {
  dataFile.seek(bgoff + (left * 2));
  pix2 = (dataFile.read() << 8) + dataFile.read();
  }
  left++;
  if(left > (ucwidth - 1)){
  left = 0;
  bgoff = bgoff + (bwidth * 2);
  tdw = *data++;
  uint32_t test = 2 ^ (ucwidth - 1);
  }
  bgbuf[c] = (pix1 << 16) + pix2;
  }
  WrGRAMs(bgbuf, ucloop);
}

void GFX4dIoD9::DownloadFile(String WebAddr, String Fname){   
  Download(WebAddr, 0, "", Fname);
}

void GFX4dIoD9::DownloadFile(String Address, uint16_t port, String hfile, String Fname){   
  Download(Address, port, hfile, Fname);
}

boolean GFX4dIoD9::CheckSD(void){
  return sdok;
}

boolean GFX4dIoD9::CheckDL(void){
  return dlok;
}

void GFX4dIoD9::Download(String Address, uint16_t port, String hfile, String Fname){   
  dlok = false;
  int cstream;
  File Dwnload;
  HTTPClient http;
  if(port > 0){
  http.begin(Address,port,hfile);
  } else {
  http.begin(Address);
  }
  int httpCode = http.GET();
  if(httpCode == 404){
  println("File Error");
  return;
  }
  if(sdok == false){
  return;
  }
  if(SD.exists((char*)Fname.c_str())) {
  SD.remove((char*)Fname.c_str());
  }
  Dwnload = SD.open((char*)Fname.c_str(), FILE_WRITE);
  int32_t lens = http.getSize();
  if(lens == 0){
  return;
  }
  uint8_t buff[128] = { 0 };
  WiFiClient * stream = http.getStreamPtr();
  while(http.connected() && (lens > 0 || lens == -1)) {
  size_t size = stream->available();
  if(size) {
  int cstream = stream->readBytes(buff, ((size > sizeof(buff)) ? sizeof(buff) : size));
  yield();
  if(!Dwnload.write(buff, cstream)){
  return;
  }
  if(lens > 0) {
  lens -= cstream;
  }
  }
  yield();
  }
  Dwnload.close();
  http.end();
  dlok = true;
}

int16_t GFX4dIoD9::XYposToDegree(int curX, int curY){
  int delta, deg, adj ;
  if(curY < 0){
  if (curX < 0){
  adj = 1 ;
  deg = 90 ;
  } else {
  adj = 2 ;
  deg = 180 ;
  }
  } else {
  if (curX < 0){
  deg = 0 ;
  adj = 2 ;
  } else {
  deg = 270 ;
  adj = 1 ;
  }
  }
  curX = abs(curX) ;
  curY = abs(curY) ;
  if (curX < curY){
  adj &= 1 ;
  } else {
  adj &= 2 ;
  swap(curX, curY) ;
  }
  delta = at[(curX * 100) / curY] ;
  if (adj){
  deg += 90 - delta ;
  } else {
  deg += delta ;
  }
  return deg ;
}

uint16_t GFX4dIoD9::RGBs2COL(uint8_t r, uint8_t g, uint8_t b){
  return (b >> 2) | (g & 0x7E) << 4 | (r & 0x7c) << 9  ;
}

void GFX4dIoD9::c565toRGBs(uint16_t i565){
  GFX4dIoD9_RED = (i565 & 0xF800) >> 9 ;
  GFX4dIoD9_GREEN = (i565 & 0x07E0) >> 4 ;
  GFX4dIoD9_BLUE  = (i565 & 0x001F) << 2 ;
}

void GFX4dIoD9::RGB2HLS(){
  uint8_t cMax, cMin, Rdelta, Gdelta, Bdelta, cMpM, cMmM ;
  uint8_t tmaxmin;
  if(GFX4dIoD9_RED >= GFX4dIoD9_GREEN){
  cMax = GFX4dIoD9_RED;
  } else {
  cMax = GFX4dIoD9_GREEN;
  }
  if(GFX4dIoD9_BLUE >= cMax){
  cMax = GFX4dIoD9_BLUE;
  }
  if(GFX4dIoD9_RED <= GFX4dIoD9_GREEN){
  cMin = GFX4dIoD9_RED;
  } else {
  cMin = GFX4dIoD9_GREEN;
  }
  if(GFX4dIoD9_BLUE <= cMin){
  cMin = GFX4dIoD9_BLUE;
  }
  cMpM = cMax + cMin;
  cMmM = cMax - cMin;
  l = ((cMpM * HLSMAX) + RGBMAX) / RGBMAXm2;
  if (cMax == cMin){
  s = 0;
  h = UNDEFINED;
  } else {
  if (l <= (HLSMAX / 2)){
  s = ((cMmM * HLSMAX) + (cMpM / 2) ) / cMpM;
  } else {
  s = ((cMmM * HLSMAX) + ((RGBMAXm2 - cMpM) / 2)) / (RGBMAXm2 - cMpM);
  }
  Rdelta = (((cMax - GFX4dIoD9_RED) * HLSMAXd6) + (cMmM / 2)) / cMmM;
  Gdelta = (((cMax - GFX4dIoD9_GREEN) * HLSMAXd6) + (cMmM / 2)) / cMmM;
  Bdelta = (((cMax - GFX4dIoD9_BLUE) * HLSMAXd6) + (cMmM / 2)) / cMmM;
  if (GFX4dIoD9_RED == cMax){
  h = Bdelta - Gdelta ;
  } else if (GFX4dIoD9_GREEN == cMax){
  h = HLSMAXd3 + Rdelta - Bdelta ;
  } else {
  h = HLSMAXm2d3 + Gdelta - Rdelta;
  }
  if (h < 0){
  h += HLSMAX;
  }
  if (h > HLSMAX){
  h -= HLSMAX;
  }
  }
}

uint8_t GFX4dIoD9::hue_RGB(uint8_t Hin, uint8_t M1, uint8_t M2){
  uint8_t Value ;
  if (Hin < 0){
  Hin += HLSMAX ;
  } else if (Hin > HLSMAX){
  Hin -= HLSMAX ;
  }
  if (Hin < HLSMAXd6){
  Value = M1 + ( (M2 - M1) * Hin + HLSMAXd12) / HLSMAXd6 ;
  } else if (Hin < HLSMAXd2){
  Value = M2 ;
  } else if (Hin < HLSMAXm2d3){
  Value = M1 + ((M2 - M1) * (HLSMAXm2d3 - Hin) + HLSMAXd12) / HLSMAXd6 ;
  } else {
  Value = M1 ;
  }
  return Value ;
}

void GFX4dIoD9::HLS2RGB(uint8_t H, uint8_t L, uint8_t S){
  uint8_t M1, M2 ;
  if (S == 0){
  GFX4dIoD9_RED = L ;
  GFX4dIoD9_GREEN = L ;
  GFX4dIoD9_BLUE = L ;
  } else {
  if (L <= HLSMAXd2){
  M2 = (L * (HLSMAX + S) + HLSMAXd2) / HLSMAX ;
  } else {
  M2 = L + S - ((L * S + HLSMAXd2) / HLSMAX) ;
  }
  M1 = 2 * L - M2 ;
  if ((H > HLSMAX ) || (H < 0)){
  h = 0 ;
  }
  GFX4dIoD9_RED = hue_RGB(H+HLSMAXd3, M1, M2) ;
  GFX4dIoD9_GREEN = hue_RGB(H, M1, M2) ;
  GFX4dIoD9_BLUE = hue_RGB(H-HLSMAXd3, M1, M2) ;
  }
}

void GFX4dIoD9::imageTouchEnable(uint8_t gcinum, boolean en){
  return;
}

uint8_t GFX4dIoD9::imageTouched(){
  return 255;
}

uint16_t GFX4dIoD9::touch_GetX(){
  return 0;
}

uint16_t GFX4dIoD9::touch_GetY(){
  return 0;
}

uint8_t GFX4dIoD9::touch_GetPen(){  
  return 255; 
}

uint8_t GFX4dIoD9::CheckButtons(void){
  butchnge = true;
  int ret = 255; 
  return ret;
  butchnge = false;
}

boolean GFX4dIoD9::touch_Update() {
  return false;
}

void GFX4dIoD9::touch_Set(uint8_t mode) {
  return;
}
