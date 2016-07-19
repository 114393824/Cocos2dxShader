//
//  StartScene.cpp
//  Cocos2dxShader
//
//  Created by xiaohu on 16/7/19.
//
//

#include "StartScene.h"

USING_NS_CC;

Scene* StartScene::createScene()
{
    auto scene = Scene::create();
    auto layer = StartScene::create();
    
    scene->addChild(layer);
    
    return scene;
}

bool StartScene::init()
{
    if ( !Layer::init() )
    {
        return false;
    }
    
    
    
    return true;
}