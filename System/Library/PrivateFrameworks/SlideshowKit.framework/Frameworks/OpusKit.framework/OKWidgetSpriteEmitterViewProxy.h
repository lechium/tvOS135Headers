/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:28:16 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/SlideshowKit.framework/Frameworks/OpusKit.framework/OpusKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <OpusKit/OKWidgetView.h>
#import <libobjc.A.dylib/OKWidgetSpriteEmitterViewProxyExports.h>

@class SKView, NSString, SKEmitterNode, SKTexture, SKNode;

@interface OKWidgetSpriteEmitterViewProxy : OKWidgetView <OKWidgetSpriteEmitterViewProxyExports> {

	SKView* _skView;
	NSString* _emitterResourceName;
	NSString* _particuleResourceName;
	SKEmitterNode* _emitterNode;
	SKTexture* _particuleTexture;

}

@property (nonatomic,copy) NSString * emitterResourceName;                //@synthesize emitterResourceName=_emitterResourceName - In the implementation block
@property (nonatomic,copy) NSString * particuleResourceName;              //@synthesize particuleResourceName=_particuleResourceName - In the implementation block
@property (nonatomic,retain) SKNode * emitterNode;                        //@synthesize emitterNode=_emitterNode - In the implementation block
@property (nonatomic,retain) SKTexture * particuleTexture;                //@synthesize particuleTexture=_particuleTexture - In the implementation block
+(id)supportedSettings;
+(void)setupJavascriptContext:(id)arg1 ;
-(void)dealloc;
-(id)valueForUndefinedKey:(id)arg1 ;
-(void)layoutSubviews;
-(id)initWithWidget:(id)arg1 ;
-(BOOL)prepareForDisplay:(BOOL)arg1 ;
-(id)settingObjectForKey:(id)arg1 ;
-(BOOL)prepareForWarmup:(BOOL)arg1 ;
-(BOOL)prepareForUnload:(BOOL)arg1 ;
-(void)setSettingBackgroundColor:(id)arg1 ;
-(void)setAntialiasing:(BOOL)arg1 ;
-(void)setParticuleResourceName:(NSString *)arg1 ;
-(void)unloadEmitter;
-(void)updateEmitter;
-(void)setEmitterResourceName:(NSString *)arg1 ;
-(void)setEmitterNode:(SKNode *)arg1 ;
-(void)setParticuleTexture:(SKTexture *)arg1 ;
-(void)loadEmitterIfNeeded;
-(id)settingParticuleResource;
-(void)setSettingParticuleResource:(id)arg1 ;
-(id)settingEmitterResource;
-(void)setSettingEmitterResource:(id)arg1 ;
-(NSString *)emitterResourceName;
-(NSString *)particuleResourceName;
-(SKNode *)emitterNode;
-(SKTexture *)particuleTexture;
@end

