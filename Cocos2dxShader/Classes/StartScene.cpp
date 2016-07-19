//
//  StartScene.cpp
//  Cocos2dxShader
//
//  Created by xiaohu on 16/7/19.
//
//

#include "StartScene.h"
#include "constantUtil.h"

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

    Size visibleSize = Director::getInstance()->getVisibleSize();
    Point origin = Director::getInstance()->getVisibleOrigin();
    if(visibleSize.width==1136 && visibleSize.height==640){
        Constant::getInstance()->machineID = 1;
    }else if(visibleSize.width==960 && visibleSize.height==640)
    {
        Constant::getInstance()->machineID = 2;
        
    }else if(visibleSize.width==1024 && visibleSize.height==768)
    {
        Constant::getInstance()->machineID = 3;
        
    }else{
        Constant::getInstance()->machineID = 0;
    }
    
    /////////////////////////////
    // 2. add a menu item with "X" image, which is clicked to quit the program
    //    you may modify it.
    
    // add a "close" icon to exit the progress. it's an autorelease object
    auto closeItem = MenuItemImage::create(
                                           "CloseNormal.png",
                                           "CloseSelected.png",
                                           CC_CALLBACK_1(StartScene::menuCloseCallback, this));
    
    closeItem->setPosition(Point(origin.x + visibleSize.width - closeItem->getContentSize().width/2 ,
                                 origin.y + closeItem->getContentSize().height/2));
    
    // create menu, it's an autorelease object
    auto menu = Menu::create(closeItem, NULL);
    menu->setPosition(Point::ZERO);
    this->addChild(menu, 1);
    //this->setFontSize(48);
    
    /*    Label *designInfoLabel;
     designInfoLabel = Label::createWithTTF("App", "Helvetica.ttf", 15, Size(545, 32), TextHAlignment::CENTER);*/
    /*This is the Introduction*/
    MenuItemFont * introduction;
    introduction->setFontSize(48);
    introduction = MenuItemFont::create("Introduction",CC_CALLBACK_1(StartScene::menuIntroCallback,this));
    menu = Menu::create(introduction, NULL);
    introduction->setPosition(Point(visibleSize.width / 4 * 2,visibleSize.height / 5 * 4));
    
    menu->setPosition(Point::ZERO);
    this->addChild(menu, 1);
    
    /*This is the Static Shader effect*/
    MenuItemFont * staticshader = MenuItemFont::create("Static Shader",CC_CALLBACK_1(StartScene::menuStaticShaderCallback,this));
    menu = Menu::create(staticshader, NULL);
    staticshader->setPosition(Point(visibleSize.width / 4 * 2,visibleSize.height / 5 * 3));
    menu->setPosition(Point::ZERO);
    this->addChild(menu, 1);
    
    /*This is the Dynamic Shader effect*/
    MenuItemFont * dynamicshader = MenuItemFont::create("Dynamic Shader",CC_CALLBACK_1(StartScene::menuDynamicShaderCallback,this));
    menu = Menu::create(dynamicshader, NULL);
    dynamicshader->setPosition(Point(visibleSize.width / 4 * 2,visibleSize.height / 5 * 2));
    menu->setPosition(Point::ZERO);
    this->addChild(menu, 1);
    
    /*This is the About us*/
    MenuItemFont * aboutus = MenuItemFont::create("About Us",CC_CALLBACK_1(StartScene::menuAboutUsCallback,this));
    
    //aboutus->setFontName("Zapfino");
    
    menu = Menu::create(aboutus, NULL);
    aboutus->setPosition(Point(visibleSize.width / 4 * 2,visibleSize.height / 5));
    menu->setPosition(Point::ZERO);
    this->addChild(menu, 1);
    
    auto midmidsprite = Sprite::create("HelloWorld.png");
    float winwidthSize = Director::getInstance()->getWinSize().width;
    float contentwidthSize = midmidsprite->getContentSize().width;
    float scalewidth = winwidthSize / contentwidthSize;
    
    float winheightSize = Director::getInstance()->getWinSize().height;
    float contentheightSize = midmidsprite->getContentSize().height;
    float scaleheight = winheightSize / contentheightSize;
    
    midmidsprite->setScale(scaleheight,scaleheight);
    loadShader(cocos2d::ccPositionTextureColor_noMVP_vert, "kaichang.fsh",midmidsprite);
    midmidsprite->setPosition(Point(visibleSize.width / 2 + origin.x, visibleSize.height / 2 + origin.y));
    this->addChild(midmidsprite, 0);
    
    return true;
}

void StartScene::loadShader(const GLchar* vertexShader, const char* frag,Sprite * sprite)
{

}

void StartScene::setShaderwithccPosition(Sprite * sprite,GLProgram* shader)
{

}

void StartScene::setShader(Sprite * sprite,const char* vert,const char* frag)
{

}

void StartScene::menuSingle(cocos2d::Ref *pSender)
{

}

void StartScene::menuIntroCallback(Ref *pSender)
{
    
}

void StartScene::menuAboutUsCallback(Ref *pSender)
{
    
}

void StartScene::menuStaticShaderCallback(Ref *pSender)
{
    
}

void StartScene::menuDynamicShaderCallback(Ref *pSender)
{
    
}

void StartScene::menuBackCallback(Ref *pSender)
{
    
}

void StartScene::menuCloseCallback(Ref* pSender)
{
    
}














