//
//  BitMap.hpp
//  Fractal
//
//  Created by Hongzhu Cui on 5/18/19.
//  Copyright © 2019 Hongzhu Cui. All rights reserved.
//

#ifndef BitMap_hpp
#define BitMap_hpp

#include <string>
#include <cstdint>

using namespace std;

namespace hongzhucuicom {
    
class Bitmap{
private:
    int m_width{0};
    int m_height{0};
    unique_ptr<uint8_t[]> m_pPixels{nullptr};
    
    
public:
    Bitmap(int width, int height);
    bool write(string filename);
    void setPixel(int x, int y, uint8_t red, uint8_t green, uint8_t yellow);
    virtual ~Bitmap();
};
}

#endif /* BitMap_hpp */
