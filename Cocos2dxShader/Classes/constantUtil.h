//
//  constantUtil.h
//  Cocos2dxShader
//
//  Created by xiaohu on 16/7/19.
//
//

#ifndef constantUtil_h
#define constantUtil_h

class Constant
{
public:
    Constant();
    ~Constant();
    
    static Constant * getInstance(void);
public:
    int level;
    int ppt;
    int lecture;
    int lectureNo;
    int extendEffect;
    int extendEffectNo;
    int machineID;
};

#endif /* constantUtil_h */
