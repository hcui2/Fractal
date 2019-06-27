//
//  BitmapFileHeader.h
//  Fractal
//
//  Created by Hongzhu Cui on 5/18/19.
//  Copyright © 2019 Hongzhu Cui. All rights reserved.
//

#ifndef BitmapFileHeader_h
#define BitmapFileHeader_h

#include <cstdint>

using namespace std;

#pragma pack(2)

namespace hongzhucuicom{

struct BitmapFileHeader{
    char header[2] {'B', 'M'};
    int32_t fileSize;
    int32_t reserved{0};
    int32_t dataOffset;
    
};
}
#endif /* BitmapFileHeader_h */
