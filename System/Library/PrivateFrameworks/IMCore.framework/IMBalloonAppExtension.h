/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:25:44 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/IMCore.framework/IMCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <IMCore/IMBalloonPlugin.h>

@class NSExtension, LSPlugInKitProxy, NSUUID, NSNumber;

@interface IMBalloonAppExtension : IMBalloonPlugin {

	BOOL _canSendDataPayloads;
	BOOL _shouldBalloonHideAppIcon;
	NSExtension* _extension;
	LSPlugInKitProxy* _proxy;
	NSUUID* _requestIdentifier;

}

@property (nonatomic,retain) LSPlugInKitProxy * proxy;                      //@synthesize proxy=_proxy - In the implementation block
@property (assign) NSUUID * requestIdentifier;                              //@synthesize requestIdentifier=_requestIdentifier - In the implementation block
@property (assign,nonatomic) BOOL canSendDataPayloads;                      //@synthesize canSendDataPayloads=_canSendDataPayloads - In the implementation block
@property (assign,nonatomic) BOOL shouldBalloonHideAppIcon;                 //@synthesize shouldBalloonHideAppIcon=_shouldBalloonHideAppIcon - In the implementation block
@property (nonatomic,retain,readonly) NSExtension * extension;              //@synthesize extension=_extension - In the implementation block
@property (nonatomic,retain,readonly) NSNumber * itemID; 
@property (nonatomic,retain,readonly) id<PKPlugIn> plugin; 
@property (nonatomic,readonly) BOOL isLaunchProhibited; 
-(id)version;
-(NSNumber *)itemID;
-(NSUUID *)requestIdentifier;
-(NSExtension *)extension;
-(void)setProxy:(LSPlugInKitProxy *)arg1 ;
-(LSPlugInKitProxy *)proxy;
-(BOOL)isLaunchProhibited;
-(id<PKPlugIn>)plugin;
-(void)setRequestIdentifier:(NSUUID *)arg1 ;
-(BOOL)isBetaPlugin;
-(id)_initWithPluginBundle:(id)arg1 extension:(id)arg2 pluginKitProxyClass:(Class)arg3 ;
-(id)initWithPluginBundle:(id)arg1 pluginKitProxy:(id)arg2 extension:(id)arg3 ;
-(BOOL)shouldBalloonHideAppIcon;
-(BOOL)canSendDataPayloads;
-(id)initWithPluginBundle:(id)arg1 extension:(id)arg2 ;
-(id)initWithPluginBundle:(id)arg1 appBundle:(id)arg2 ;
-(void)setCanSendDataPayloads:(BOOL)arg1 ;
-(void)setShouldBalloonHideAppIcon:(BOOL)arg1 ;
@end

