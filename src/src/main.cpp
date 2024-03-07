/**
 * Include the Geode headers.
 */
#include <Geode/Geode.hpp>
#include "connector.h"

/**
 * Brings cocos2d and all Geode namespaces to the current scope.
 */
using namespace geode::prelude;

/**
 * `$modify` lets you extend and modify GD's classes.
 * To hook a function in Geode, simply $modify the class
 * and write a new function definition with the signature of
 * the function you want to hook.
 *
 * Here we use the overloaded `$modify` macro to set our own class name,
 * so that we can use it for button callbacks.
 *
 * Notice the header being included, you *must* include the header for
 * the class you are modifying, or you will get a compile error.
 */

enum Status
{
	STATUS_SUCCESS,
	STATUS_FAILURE,
	STATUS_UNAVAIL,
	STATUS_RETRY,
	STATUS_START  = 5,
	STATUS_PAUSE  = 6,
	STATUS_RESUME = 7,
	STATUS_STOP   = 8,

	STATUS_VISIBLE = 0x80,
	STATUS_NOTVISIBLE = 0x81,
	STATUS_SELECTABLE = 0x82,
	STATUS_NOTSELECTABLE = 0x83,

	STATUS_KEEPALIVE =255
};


int retry = 0;
Connector* connector = 0;

    static void CrowdControlReconnect()
    {
        if (!connector) return;
	    if (!connector->IsConnected())
	    {
		    connector->ConnectAsync();
	    }
	    else if (!connector->IsRunning())
	    {
		    //connector->Run();
	    }
	    else
	    {

	    }
    }

#include <Geode/modify/MenuLayer.hpp>
class $modify(MyMenuLayer, MenuLayer) {
	/**
	 * Typically classes in GD are initialized using the `init` function, (though not always!),
	 * so here we use it to add our own button to the bottom menu.
	 *
	 * Note that for all hooks, your signature has to *match exactly*,
	 * `void init()` would not place a hook!
	*/
	bool init() {
		/**
		 * We call the original init function so that the
		 * original class is properly initialized.
		 */
		if (!MenuLayer::init()) {
			return false;
		}

		if(!connector){
			connector = new Connector();
			CrowdControlReconnect();
		}


		this->scheduleOnce(schedule_selector(MyMenuLayer::checkmsg), 1.0);

		return true;
	}

	void checkmsg(float dt){
		if(!connector)return;

		if(connector->msgs.size() > 0){
			std::string m = connector->msgs.back();
			FLAlertLayer::create("", m, "OK")->show();
			connector->msgs.pop_back();
			
		}
	}

};


cocos2d::CCLabelBMFont * label;
cocos2d::CCLabelBMFont * label2;
cocos2d::ccColor3B color;
bool colorm = false;
PlayLayer *layer = 0;
PlayerObject *player = 0;
int delay = -1;
int dur;
int spin = -1;
int endid = -1;
int colorid = -1;
float scale = 0;
void (*func)();
void (*func2)();

void ZoomIn(){
	layer->setScale(2.0f);
}

void ZoomOut(){
	layer->setScale(0.5f);
}

void ZoomOut2(){
	layer->setScale(0.25f);
}

void ResetZoom(){
	layer->setScale(1.0f);
}

void ResetRotate(){
	layer->setRotationX(0.0f);
	layer->setRotationY(0.0f);
}


void Rotate(){
	layer->setRotationX(30.0f);
}

void Rotate2(){
	layer->setRotationX(60.0f);
}

void Rotate3(){
	layer->setRotationY(30.0f);
}

void Rotate4(){
	layer->setRotationY(60.0f);
}

void Rotate5(){
	layer->setRotationX(45.0f);
	layer->setRotationY(45.0f);
}

void Rotate6(){
	layer->setRotationX(180.0f);
	layer->setRotationY(180.0f);
}

void Spin(){
	spin = 1;
}

void ResetMode(){
	player->toggleBirdMode(false, false);
}

void ResetVis(){
	player = PlayLayer::get()->m_player1;
	player->toggleVisibility(true);
}

void Invis(){
	player = PlayLayer::get()->m_player1;
	player->toggleVisibility(false);
}

void Giant(){
	scale = 3.0f;
}

void Tiny(){
	scale = 0.4f;
}

void ResetScale(){
	player = PlayLayer::get()->m_player1;
	player->setScale(1.0f);
	scale = 0;
}

void Red() {
    color = {255,0,0};
    colorm = true;
}

void Orange() {
    color = {255,128,64};
    colorm = true;
}

void Yellow() {
    color = {255,255,0};
    colorm = true;
}

void Green() {
    color = {0,255,0};
    colorm = true;
}

void Blue() {
    color = {0,0,255};
    colorm = true;
}

void Purple() {
    color = {190,0,190};
    colorm = true;
}

void Pink() {

    color = {255,164,190};
    colorm = true;
}

void Black() {
    color = {0,0,0};
    colorm = true;
}

void White() {
    color = {255,255,255};
    colorm = true;
}

void Reverse(){
	player = PlayLayer::get()->m_player1;
	player->doReversePlayer(true);
}

void ResetReverse(){
	player = PlayLayer::get()->m_player1;
	player->doReversePlayer(false);
}

int depth=0;
bool invert = false;

void Invert(){
	invert = true;
}

void ResetInvert(){
	invert = false;
}

void Bird(){
	player = PlayLayer::get()->m_player1;
	player->doReversePlayer(true);//setYVelocity(100.0,0);
	//player->setScale(3.0f);
}



#include <Geode/modify/PlayerObject.hpp>
class $modify(PT, PlayerObject) {
	void pushButton(PlayerButton po){
		depth++;
		if(depth%2==1 && invert)
			PlayerObject::releaseButton(po);
		else
			PlayerObject::pushButton(po);
	}

	void releaseButton(PlayerButton po){
		depth++;
		if(depth%2==0 || !invert)
			PlayerObject::releaseButton(po);
		else
			PlayerObject::pushButton(po);
	}
};

#include <Geode/modify/PlayLayer.hpp>
class $modify(T, PlayLayer) {
	void ResetColor(float dt){
		colorm=false;
	}

	void checkeffect(float dt){
		retry++;
		if(retry == 100){
			retry = 0;
			CrowdControlReconnect();
		}

		if (!connector || !connector->IsConnected()) return;

			if(colorm){
				player = PlayLayer::get()->m_player1;
				player->setColor(color);
			}
			if(spin>0){
				
				spin+=2;
				if(spin>=360){
					spin=-1;
					layer->setRotationX(0);
					layer->setRotationY(0);
				} else {
					layer->setRotationX(spin);
					layer->setRotationY(spin);
				}
			}

			if(scale>0){
				player = PlayLayer::get()->m_player1;
				player->setScale(scale);
			}

			auto command = connector->PopItem();
            if (command != NULL)
            {
				const char * code = command.get()->command.c_str();
				int id = command.get()->id;
				int len = command.get()->duration / 1000;
				//FLAlertLayer::create("Effect Received", command.get()->command, "OK")->show();
				if(!strcmp(code,"zoomin")){
					startTimer(id, "Close Up Cam In...", 3, len, ZoomIn, ResetZoom);
					return;
				}
				if(!strcmp(code,"zoomout")){
					startTimer(id, "Far Cam In...", 3, len, ZoomOut, ResetZoom);
					return;
				}
				if(!strcmp(code,"zoomout2")){
					startTimer(id, "Ultra Far Cam In...", 3, len, ZoomOut2, ResetZoom);
					return;
				}	
				if(!strcmp(code,"rotate")){
					startTimer(id, "Skew Camera In...", 3, len, Rotate, ResetRotate);
					return;
				}	
				if(!strcmp(code,"rotate2")){
					startTimer(id, "Big Skew Camera In...", 3, len, Rotate2, ResetRotate);
					return;
				}		
				if(!strcmp(code,"rotate3")){
					startTimer(id, "Tilt Camera In...", 3, len, Rotate3, ResetRotate);
					return;
				}	
				if(!strcmp(code,"rotate4")){
					startTimer(id, "Big Tilt Camera In...", 3, len, Rotate4, ResetRotate);
					return;
				}	
				if(!strcmp(code,"rotate5")){
					startTimer(id, "Rotate Camera In...", 3, len, Rotate5, ResetRotate);
					return;
				}		
				if(!strcmp(code,"rotate6")){
					startTimer(id, "Flip Camera In...", 3, len, Rotate6, ResetRotate);
					return;
				}			
				if(!strcmp(code,"spin")){
					startTimer(id, "Spin Camera In...", 3, len, Spin, 0);
					return;
				}
				if(!strcmp(code,"invis")){
					startTimer(id, "Invisible In...", 3, 5, Invis, ResetVis);
					return;
				}	

				if(!strcmp(code,"giant")){
					startTimer(id, "Giant Mode In...", 3, len, Giant, ResetScale);
					return;
				}	

				if(!strcmp(code,"tiny")){
					startTimer(id, "Tiny Mode In...", 3, len, Tiny, ResetScale);
					return;
				}					

				if(!strcmp(code,"bird")){
					startTimer(id, "Bird Mode In...", 3, len, Bird, ResetMode);
					return;
				}

				if(!strcmp(code,"reverse")){
					startTimer(id, "Reverse In...", 3, len, Reverse, ResetReverse);
					return;
				}						

				if(!strcmp(code,"invert")){
					startTimer(id, "Invert Controls In...", 3, len, Invert, ResetInvert);
					return;
				}	

				if(!strcmp(code,"red")){
					if(colorm){
						connector->RespondTimed(id, STATUS_RETRY,"",0);
					}

					Red();
					colorid = id;
					delay = 1;
					dur = 0;
					layer->scheduleOnce(schedule_selector(T::tick), 1.0);
					layer->scheduleOnce(schedule_selector(T::ResetColor), 30);
					connector->RespondTimed(id, STATUS_SUCCESS,"",len * 1000);
					return;
				}	
				if(!strcmp(code,"orange")){
					if(colorm){
						connector->RespondTimed(id, STATUS_RETRY,"",0);
					}

					Orange();
					colorid = id;
					delay = 1;
					dur = 0;
					layer->scheduleOnce(schedule_selector(T::tick), 1.0);
					layer->scheduleOnce(schedule_selector(T::ResetColor), 30);
					connector->RespondTimed(id, STATUS_SUCCESS,"",len * 1000);
					return;
				}	
				if(!strcmp(code,"yellow")){
					if(colorm){
						connector->RespondTimed(id, STATUS_RETRY,"",0);
					}

					Yellow();
					colorid = id;
					delay = 1;
					dur = 0;
					layer->scheduleOnce(schedule_selector(T::tick), 1.0);
					layer->scheduleOnce(schedule_selector(T::ResetColor), 30);
					connector->RespondTimed(id, STATUS_SUCCESS,"",len * 1000);
					return;
				}	
				if(!strcmp(code,"green")){
					if(colorm){
						connector->RespondTimed(id, STATUS_RETRY,"",0);
					}

					Green();
					colorid = id;
					delay = 1;
					dur = 0;
					layer->scheduleOnce(schedule_selector(T::tick), 1.0);
					layer->scheduleOnce(schedule_selector(T::ResetColor), 30);
					connector->RespondTimed(id, STATUS_SUCCESS,"",len * 1000);
					return;
				}	
				if(!strcmp(code,"blue")){
					if(colorm){
						connector->RespondTimed(id, STATUS_RETRY,"",0);
					}

					Blue();
					colorid = id;
					delay = 1;
					dur = 0;
					layer->scheduleOnce(schedule_selector(T::tick), 1.0);
					layer->scheduleOnce(schedule_selector(T::ResetColor), 30);
					connector->RespondTimed(id, STATUS_SUCCESS,"",len * 1000);
					return;
				}	
				if(!strcmp(code,"purple")){
					if(colorm){
						connector->RespondTimed(id, STATUS_RETRY,"",0);
					}

					Purple();
					colorid = id;
					delay = 1;
					dur = 0;
					layer->scheduleOnce(schedule_selector(T::tick), 1.0);
					layer->scheduleOnce(schedule_selector(T::ResetColor), 30);
					connector->RespondTimed(id, STATUS_SUCCESS,"",len * 1000);
					return;
				}	
				if(!strcmp(code,"pink")){
					if(colorm){
						connector->RespondTimed(id, STATUS_RETRY,"",0);
					}

					Pink();
					colorid = id;
					delay = 1;
					dur = 0;
					layer->scheduleOnce(schedule_selector(T::tick), 1.0);
					layer->scheduleOnce(schedule_selector(T::ResetColor), 30);
					connector->RespondTimed(id, STATUS_SUCCESS,"",len * 1000);
					return;
				}	
				if(!strcmp(code,"black")){
					if(colorm){
						connector->RespondTimed(id, STATUS_RETRY,"",0);
					}

					Black();
					colorid = id;
					delay = 1;
					dur = 0;
					layer->scheduleOnce(schedule_selector(T::tick), 1.0);
					layer->scheduleOnce(schedule_selector(T::ResetColor), 30);
					connector->RespondTimed(id, STATUS_SUCCESS,"",len * 1000);
					return;
				}	
				if(!strcmp(code,"white")){
					if(colorm){
						connector->RespondTimed(id, STATUS_RETRY,"",0);
					}
					
					White();
					colorid = id;
					delay = 1;
					dur = 0;
					layer->scheduleOnce(schedule_selector(T::tick), 1.0);
					layer->scheduleOnce(schedule_selector(T::ResetColor), 30);
					connector->RespondTimed(id, STATUS_SUCCESS,"",len * 1000);
					return;
				}		

				connector->RespondTimed(id, STATUS_FAILURE,"",0);			
            }
	}

	void startTimer(int id, const char * text, int time, int len, void (*effect)(), void (*end)()){

		if(delay>=0 || endid>=0){
			connector->RespondTimed(id, STATUS_RETRY,"",0);
			return;
		}

		endid = id;
		delay = time;
		dur = len;
		func = effect;
		func2 = end;
		label->setString(text, true);
		char temp[4];
		itoa(delay,temp,10);
		label2->setString(temp, true);

		if(delay>=3){
			label2->setColor({0,200,0});	
		}
		if(delay==2)label2->setColor({200,200,0});
		if(delay==1)label2->setColor({200,0,0});

		connector->RespondTimed(id, STATUS_SUCCESS,"",(len+3) * 1000);
		layer->scheduleOnce(schedule_selector(T::tick), 1.0);
	}

	void tick(float dt){
		delay--;
		if(delay==0){
			delay--;
			label->setString("", true);
			label2->setString("", true);
			
			if(func)func();
			if(dur){
				layer->scheduleOnce(schedule_selector(T::end), dur);
			} else endid=-1;

			return;
		}

		char temp[4];
		itoa(delay,temp,10);
		label2->setString(temp, true);

		if(delay>=3){
			label2->setColor({0,200,0});	
		}
		if(delay==2)label2->setColor({200,200,0});
		if(delay==1)label2->setColor({200,0,0});

		layer->scheduleOnce(schedule_selector(T::tickb), 1.0);		
	}

	void tickb(float dt){
		delay--;
		if(delay==0){
			delay--;
			label->setString("", true);
			label2->setString("", true);
			func();

			if(func)func();
			if(dur){
				layer->scheduleOnce(schedule_selector(T::end), dur);
			}

			return;
		}

		char temp[4];
		itoa(delay,temp,10);
		label2->setString(temp, true);

		if(delay>=3){
			label2->setColor({0,200,0});	
		}
		if(delay==2)label2->setColor({200,200,0});
		if(delay==1)label2->setColor({200,0,0});

		layer->scheduleOnce(schedule_selector(T::tick), 1.0);		
	}	

	void end(float dt){
		func2();
		connector->RespondTimed(endid, STATUS_STOP,"",0);
		endid=-1;
	}

	bool init(GJGameLevel* level, bool useReplay, bool dontCreateObjects){
		if (!PlayLayer::init(level, useReplay, dontCreateObjects))
			return false;

		auto winSize = CCDirector::get()->getWinSize();

		label = CCLabelBMFont::create("", "bigFont.fnt");
		label->setPosition(winSize.width / 2, winSize.height / 2 + winSize.height / 4);
		this->addChild(label);

		label2 = CCLabelBMFont::create("", "bigFont.fnt");
		label2->setPosition(winSize.width / 2, winSize.height / 2);
		label2->setScale(2.0f);
		this->addChild(label2);		

		this->schedule(schedule_selector(T::checkeffect), 0.1);

		layer = this;
	this->scheduleOnce(schedule_selector(MyMenuLayer::checkmsg), 1.0);

		return true;
	}

	void checkmsg(float dt){
		if(!connector)return;

		if(connector->msgs.size() > 0){
			std::string m = connector->msgs.back();
			FLAlertLayer::create("", m, "OK")->show();
			connector->msgs.pop_back();
			
		}
	}
};