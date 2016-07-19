//
//  StartScene.h
//  Cocos2dxShader
//
//  Created by xiaohu on 16/7/19.
//
//

#ifndef StartScene_h
#define StartScene_h

#include "cocos2d.h"

class StartScene : public cocos2d::Layer
{
public:
    static cocos2d::Scene* createScene();
    
    virtual bool init();
    
    CREATE_FUNC(StartScene);
    
};

#endif /* StartScene_h */
