//
//  BitMap.cpp
//  Fractal
//
//  Created by Hongzhu Cui on 5/18/19.
//  Copyright © 2019 Hongzhu Cui. All rights reserved.
//

#include "BitMap.hpp"
#include "BitmapInfoHeader.h"
#include "BitmapFileHeader.h"

using namespace hongzhucuicom;

namespace hongzhucuicom {

    Bitmap::Bitmap(int width, int height):m_width(width), m_height(height), m_pPixels(new uint8_t[width*height*3]{}){
        
    }
    
    bool Bitmap:: write(string filename){
        BitmapFileHeader fileHeader;
        BitmapInfoHeader infoHeader;
        
        fileHeader.fileSize = sizeof(BitmapFileHeader) + sizeof(BitmapInfoHeader) + m_width*m_height*3;
        fileHeader.dataOffset = sizeif(BitmapFileHeader) + sizeof(BitmapInfoHeader);
        
        infoHeader.width = m_width;
        infoHeader.height = m_height;
        
        
        
        return false;
    }
    
    void Bitmap:: setPixel(int x, int y, uint8_t red, uint8_t green, uint8_t yellow){
        
    }
    
    Bitmap::~Bitmap(){
        
    }
}
