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
#include <iostream>

class StartScene : public cocos2d::Layer
{
public:
    static cocos2d::Scene* createScene();
    
    virtual bool init();
    
    cocos2d::MenuItemFont * change;
    void loadShader(const GLchar* vertexShader, const char* frag,cocos2d::Sprite * sprite);
    // a selector callback
    void menuCloseCallback(cocos2d::Ref* pSender);
    void menuIntroCallback(cocos2d::Ref* pSender);
    void menuAboutUsCallback(cocos2d::Ref* pSender);
    void setShaderwithccPosition(cocos2d::Sprite * sprite,cocos2d::GLProgram* shader);
    void setShader(cocos2d::Sprite * sprite,const char* vert,const char* frag);
    void setBlur(cocos2d::Sprite * sprite);
    void setMenuItem(cocos2d::MenuItemImage * sprite,const char* vert,const char* frag);
    //void buildCustomUniforms();
    void menuStaticShaderCallback(cocos2d::Ref* pSender);
    void menuDynamicShaderCallback(cocos2d::Ref* pSender);
    void menuBackCallback(cocos2d::Ref* pSender);
    void menuSingle(cocos2d::Ref* pSender);
    
    CREATE_FUNC(StartScene);
    
};

#endif /* StartScene_h */
